//
// Created by leandro on 10/29/20.
//

#include "contacorrente.h"

ContaCorrente::ContaCorrente(bool type, string agencia, string numero, double saldo, double limite, date abertura):
        Conta(type,agencia,numero,saldo,abertura), limite(limite){}

ContaCorrente::~ContaCorrente(){}

double ContaCorrente::getLimite(){
    return this->limite;
}

bool ContaCorrente::processaMovimentacao(Movimentacao& transacao){

    if (transacao.getTipo()==tipoCredito) {

        this->saldo += transacao.getValor();
        this->historico.push_back(transacao);
        return true;

    } else if (transacao.getTipo()==tipoDebito && (this->saldo + this->limite >= transacao.getValor())) {

        this->saldo -= transacao.getValor();
        this->historico.push_back(transacao);
        return true;
    }else if (transacao.getTipo()==tipoJuros) {

        this->saldo += transacao.getValor();
        this->historico.push_back(transacao);
        return true;
    }

    return false;
}

bool ContaCorrente::processaTaxa(){
    double juros;
    if(this->saldo >=0 ){
        juros = 0;
    } else{
        juros = this->saldo*0.08;
    }
    Movimentacao jurosmensal("Cobrança de Juros",juros,tipoJuros);
    return processaMovimentacao(jurosmensal);
}