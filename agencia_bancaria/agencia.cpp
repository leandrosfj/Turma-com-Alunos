//
// Created by leandro on 10/29/20.
//

#include "agencia.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Agencia::Agencia(string nome, string numero, string banco): nome(nome),numero(numero),banco(banco){}

Agencia::~Agencia(){}

string Agencia::getNome() const{
    return this->nome;
}

string Agencia::getNumero() const{
    return this->numero;
}

string Agencia::getBanco() const{
    return this->banco;
}

int Agencia::getTotalContas() const{
    return this->contas.size();
}

bool Agencia::adicionaConta(ContaCorrente* nova){
    this->contas.push_back(nova);
    return true;
}

bool Agencia::criarConta(){
    string numero;
    double saldo;
    TipoConta tipo = contaNormal;
    double limite;
    char ctipo = 0;

    cout << "Número da conta: ";
    cin >> numero;
    cout << "Saldo inicial: ";
    cin >> saldo;
    do{
        cout << "Conta Normal ou Especial? (N/E): ";
        cin >> ctipo;
        if (ctipo == 'N' || ctipo == 'n') {
            tipo = contaNormal;
        } else if (ctipo == 'E' || ctipo == 'e') {
            tipo = contaEspecial;
        }
    } while (ctipo != 'N' || ctipo != 'n' || ctipo != 'E' || ctipo != 'e');
    cout << "Limite disponível: ";
    cin >> limite;
    return adicionaConta(new ContaCorrente(this->numero,numero,saldo,tipo,limite));
}

bool Agencia::excluirConta(){
    //implementar
    return true;
}

bool Agencia::saque(string numero_conta, double valor){

    for (auto &conta : this->contas) {
        if (conta->getNumero()==numero_conta) {
            Movimentacao saque("Saque no terminal",valor,tipoDebito);
            if (conta->processaMovimentacao(saque)) {
                cout << "Saque realizado com sucesso" << endl;
                cout << "Saldo em conta: R$ " << conta->getSaldo() << endl;

                //falta printar o limite em todas as funções
                return true;
            }
        }
    }
    cout << "ERRO: Você não possui limite para realizar esta transação." << endl;
    return false;
}

bool Agencia::deposito(string numero_conta, double valor){

    for (auto &conta : this->contas) {
        if (conta->getNumero()==numero_conta) {
            Movimentacao deposito("Depósito em conta",valor,tipoCredito);
            if (conta->processaMovimentacao(deposito)) {
                cout << "Depósito realizado com sucesso" << endl;
                cout << "Saldo em conta: R$ " << conta->getSaldo() << endl;
                return true;
            }
        }
    }
    cout << "ERRO: Transação não realizada" << endl;
    return false;
}

bool Agencia::saldo(string numero_conta) const{
    for (auto &conta : this->contas) {
        if (conta->getNumero()==numero_conta) {
            cout << "Saldo em conta: R$ " << conta->getSaldo() << endl;
        }
    }
    return true;
}

bool Agencia::extrato(string numero_conta) const{
    for (auto &conta : this->contas) {
        if (conta->getNumero()==numero_conta) {
            cout << "Extrato da conta [" << conta->getNumero() << "]:" << endl;
            conta->mostraHistorico();
            cout << "Saldo em conta: R$ " << conta->getSaldo() << endl;
            cout << endl;
        }
    }
    return true;
}

bool Agencia::tranferencia(string conta_origem, string conta_destino, double valor){

    for (auto &conta : this->contas) {
        if (conta->getNumero()==conta_origem) {
            Movimentacao transferencia("Transferência entre contras",valor,tipoDebito);
            if (conta->processaMovimentacao(transferencia)) {
                cout << "Transferência realizado com sucesso" << endl;
            } else{
                cout << "ERRO: Você não possui limite para realizar esta transação." << endl;
                return false;
            }
            break;
        }
    }

    for (auto &conta : this->contas) {
        if (conta->getNumero()==conta_destino) {
            Movimentacao transferencia("Transferência entre contras",valor,tipoCredito);
            conta->processaMovimentacao(transferencia);
        }
    }
    return true;
}

void Agencia::listaContas() const{
    for (auto& conta: this->contas){
        cout << "Conta " << conta->getNumero() << "  |  Saldo: R$" << conta->getSaldo() << endl;
    }
}