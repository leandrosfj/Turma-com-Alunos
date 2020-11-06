//
// Created by leandro on 11/4/20.
//

#ifndef AGENCIA_BANCARIA_CONTA_H
#define AGENCIA_BANCARIA_CONTA_H

#include "movimentacao.h"
#include "date.h"
#include <iostream>

#include <string>
#include <vector>

using std::string;
using std::vector;

class Conta {
public:
    Conta(bool type, string agencia, string numero, double saldo, date abertura);
    virtual ~Conta();
    string getAgencia() const;
    string getNumero() const;
    double getSaldo() const;
    date getAbertura() const;
    bool getType() const;
    void mostraHistorico();
    virtual double getLimite() = 0;
    virtual bool processaMovimentacao(Movimentacao& transacao) = 0;
    virtual bool processaTaxa() = 0;
protected:
    bool type;
    string agencia;
    string numero;
    double saldo;
    date abertura;
    vector<Movimentacao> historico;
};

#endif //AGENCIA_BANCARIA_CONTA_H
