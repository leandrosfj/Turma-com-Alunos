//
// Created by leandro on 10/28/20.
//

#include "roupa.hpp"
#include <iomanip>

using std::setfill;
using std::setw;

Roupa::Roupa(){}
Roupa::Roupa(string codigo, string descricao, double preco, string marca, TipoSexo sexo, TipoTamanho tamanho):Produto(codigo, descricao, preco), marca(marca), sexo(sexo), tamanho(tamanho){}
Roupa::~Roupa(){}

string Roupa::getmarca() const{
    return this->marca;
}
TipoSexo Roupa::getSexo() const{
    return this->sexo;
}
TipoTamanho Roupa::getTamanho() const{
    return this->tamanho;
}

void Roupa::setMarca(string marca){
    this->marca = marca;
}

void Roupa::setSexo(TipoSexo sexo){
    this->sexo = sexo;
}

void Roupa::setTamanho(TipoTamanho tamanho){
    this->tamanho = tamanho;
}

ostream& Roupa::print(ostream &o) const{
    o << setfill(' ') << setw(10) << this->cod_barras << " | " << setfill('.') << setw(20) << this->descricao << " | " << setfill(' ') << setw(5) << this->preco << " | " << setfill(' ') << setw(10) << this->marca << " | " << setfill(' ') << setw(5) << this->sexo << " | " << setfill (' ') << setw (5) << this->tamanho;
    return o;
}