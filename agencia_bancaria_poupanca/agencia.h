//
// Created by leandro on 10/29/20.
//

#ifndef AGENCIA_BANCARIA_AGENCIA_H
#define AGENCIA_BANCARIA_AGENCIA_H

#include "conta.h"
#include "contacorrente.h"
#include "contapoupanca.h"
#include "date.h"

#include <vector>
#include <string>

using std::vector;
using std::string;

class Agencia{
private:
    string nome;
    string numero;
    string banco;
    date hoje;
    vector<Conta*> contas;
public:
    Agencia(string nome, string numero, string banco, date hoje);
    ~Agencia();

    bool adicionaConta(Conta* nova);
    bool criarConta();
    bool excluirConta(string numero_conta);
    bool saque(string numero_conta, double valor);
    bool deposito(string numero_conta, double valor);
    bool saldo(string numero_conta) const;
    bool extrato(string numero_conta) const;
    bool transferencia(string conta_origem, string conta_destino, double valor);
    bool listaContas() const;
    bool simula1Mes();

    int menuPrincipal();
    int menuConta(string conta);
};

#endif //AGENCIA_BANCARIA_AGENCIA_H
