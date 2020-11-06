//
// Created by leandro on 11/4/20.
//

#include "contapoupanca.h"

ContaPoupanca::ContaPoupanca(bool type, string agencia, string numero, double saldo, date abertura):
        Conta(type,agencia,numero,saldo,abertura){}

ContaPoupanca::~ContaPoupanca(){}

double ContaPoupanca::getLimite(){
    return -1;
}

bool ContaPoupanca::processaMovimentacao(Movimentacao& transacao){

    if (transacao.getTipo()==tipoCredito) {

        this->saldo += transacao.getValor();
        this->historico.push_back(transacao);
        return true;

    } else if (transacao.getTipo()==tipoDebito && (this->saldo >= transacao.getValor())) {

        this->saldo -= transacao.getValor();
        this->historico.push_back(transacao);
        return true;
    } else if (transacao.getTipo()==tipoRendimento) {

        this->saldo += transacao.getValor();
        this->historico.push_back(transacao);
        return true;
    }

    return false;
}

bool ContaPoupanca::processaTaxa(){
    Movimentacao rendimento("Rendimento mensal",this->saldo*0.04,tipoRendimento);
    return processaMovimentacao(rendimento);
}