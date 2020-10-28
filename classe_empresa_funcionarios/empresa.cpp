//
// Created by leandro on 10/21/20.
//

#include "empresa.h"

#include <iostream>
#include <vector>

Empresa::Empresa(string nome, string cnpj):nome(nome), cnpj(cnpj){
    this->empregados.clear();
    ativas ++;
}

Empresa::Empresa(const Empresa &copia){
    this->nome = copia.nome;
    this->cnpj = copia.cnpj;
    for (const auto &empregado : copia.empregados) {
        this->empregados.push_back(new Funcionario(*empregado));
    }
    ativas++;
}

Empresa::~Empresa(){
    for (auto &empregado : this->empregados){
        delete empregado;
    }
    ativas--;
}

string Empresa::getNome() const{
    return this->nome;
}

string Empresa::getCnpj() const{
    return this->cnpj;
}

Funcionario* Empresa::adicionarEmpregado(Funcionario *novo){
    this->empregados.push_back(novo);
    return novo;
}

Funcionario* Empresa::removerEmpregado(string nome){
    int index=0;
    auto pos = this->empregados.begin();
    Funcionario* removido = nullptr;

    for(const auto &empregado : this->empregados){
        if (empregado->getNome()==nome){
            removido = empregado;
            this->empregados.erase(pos+index);
            break;
        }
        index++;
    }

    return removido;
}

void Empresa::listarEmpregados(){
    for (const auto &empregado : this->empregados){
        cout << *empregado << endl;
    }
}

void Empresa::listarEmpregadosEmExp(date referencia){
    for (const auto &empregado : this->empregados){
        if(empregado->getAdmissao()>referencia){
            cout << *empregado << endl;
        }
    }
}

int Empresa::aplicarAumento(double percentual){
    for (Funcionario* &empregado : this->empregados){
        empregado->setSalario(empregado->getSalario()*(percentual+1));
    }
    return this->empregados.size();
}

int Empresa::getAtivas(){
    return ativas;
}

std::ostream& operator<< (std::ostream &o, Empresa const e){
    o << e.nome << " - " << e.cnpj << " [" << e.empregados.size() << " funcionários]";
    return o;
}
