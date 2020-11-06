//
// Created by leandro on 10/29/20.
//

#ifndef AGENCIA_BANCARIA_CONTACORRENTE_H
#define AGENCIA_BANCARIA_CONTACORRENTE_H

#include "conta.h"

class ContaCorrente : public Conta {
public:
    ContaCorrente(bool type, string agencia, string numero, double saldo, double limite, date abertura);
    ~ContaCorrente();

    double getLimite();
    bool processaMovimentacao(Movimentacao& transacao);
    bool processaTaxa();
private:
    double limite;
};

#endif //AGENCIA_BANCARIA_CONTACORRENTE_H
