//
// Created by leandro on 11/4/20.
//

#ifndef AGENCIA_BANCARIA_CONTAPOUPANCA_H
#define AGENCIA_BANCARIA_CONTAPOUPANCA_H

#include "conta.h"

class ContaPoupanca : public Conta {

public:
    ContaPoupanca(bool type, string agencia, string numero, double saldo, date abertura);
    ~ContaPoupanca();

    double getLimite();
    bool processaMovimentacao(Movimentacao& transacao);
    bool processaTaxa();
};

#endif //AGENCIA_BANCARIA_CONTAPOUPANCA_H
