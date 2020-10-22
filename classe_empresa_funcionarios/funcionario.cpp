//
// Created by leandro on 10/21/20.
//

#include "funcionario.h"

#include <iostream>
#include <iomanip>
#include <cassert>

using std::cout;
using std::endl;

Funcionario::Funcionario(string nome, double salario, date nascimento, date admissao):
    nome(nome), salario(salario), nascimento(nascimento), admissao(admissao){
    ativos++;
}

Funcionario::Funcionario(const Funcionario &copia){
    this->nome = copia.nome;
    this->salario = copia.salario;
    this->admissao = copia.admissao;
    ativos++;
}

Funcionario::~Funcionario(){
    ativos--;
}

string Funcionario::getNome() const{
    return this->nome;
}

double Funcionario::getSalario() const{
    return this->salario;
}

date Funcionario::getNascimento() const{
    return this->nascimento;
}

date Funcionario::getAdmissao() const{
    return this->admissao;
}

void Funcionario::setSalario(double salario){
    assert(salario>0);
    this->salario = salario;
}

int Funcionario::getAtivos(){
    return ativos;
}

bool Funcionario::operator==(const Funcionario& outro) const{
    return this->nome == outro.getNome();
}

std::ostream& operator<< (std::ostream &o, Funcionario const f){
    o << f.nome << " - " << fixed << setprecision(2) << f.salario << " - " << f.admissao;
    return o;
}

