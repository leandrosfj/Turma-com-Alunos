//
// Created by leandro on 11/4/20.
//

#include "conta.h"
#include <iostream>

Conta::Conta(bool type, string agencia, string numero, double saldo, date abertura):
        type(type), agencia(agencia),numero(numero),saldo(saldo), abertura(abertura){}

Conta::~Conta(){}

string Conta::getAgencia() const{
    return this->agencia;
}

string Conta::getNumero() const{
    return this->numero;
}

double Conta::getSaldo() const{
    return this->saldo;
}

date Conta::getAbertura() const{
    return this->abertura;
}

bool Conta::getType() const{
    return this->type;
}

void Conta::mostraHistorico(){
    for (auto &mov : this->historico){
        std::cout << mov << std::endl;
    }
}