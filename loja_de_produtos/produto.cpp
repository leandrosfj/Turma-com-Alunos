//
// Created by leandro on 10/28/20.
//

#include "produto.hpp"

Produto::Produto(){}

Produto::Produto(string codigo, string descricao, double preco):cod_barras(codigo),descricao(descricao),preco(preco){}

Produto::~Produto(){}

string Produto::getCodBarras() const{
    return this->cod_barras;
}

string Produto::getDescricao() const{
    return this->descricao;
}

double Produto::getPreco() const{
    return this->preco;
}

void Produto::setCodBarras(string codigo){
    this->cod_barras = codigo;
}

void Produto::setDescricao(string descricao){
    this->descricao = descricao;
}

void Produto::setPreco(double preco){
    this->preco = preco;
}

double Produto::operator+ (const Produto &outro) const{
    return this->preco + outro.preco;
}

double Produto::operator- (const Produto &outro) const{
    return this->preco - outro.preco;
}

double Produto::operator+ (const double &valor) const{
    return this->preco + valor;
}

double Produto::operator- (const double &valor) const{
    return this->preco - valor;
}

bool Produto::operator== (const Produto &outro) const{
    return this->cod_barras == outro.cod_barras;
}

ostream& operator<< (ostream &o, Produto const &p){
    return p.print(o);
}