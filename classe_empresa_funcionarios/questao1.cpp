//
// Created by leandro on 10/22/20.
//

#include "questao1.h"

Questao1::Questao1(){
    this->empresas.clear();
}

Questao1::~Questao1(){
    for (auto &empresa : this->empresas){
        delete empresa;
    }
}

void Questao1::listarEmpresas(){
    for (const auto &empresa : this->empresas){
        cout << *empresa << endl;
    }
}

bool Questao1::adicionaEmpresa(Empresa* nova){
    this->empresas.push_back(nova);
    return true;
}

bool Questao1::removeEmpresa(string nome){
    int index=0;
    auto pos = this->empresas.begin();
    Empresa* removida = nullptr;

    for (const auto &empresa : this->empresas){
        if(empresa->getNome()==nome){
            removida = empresa;
            this->empresas.erase(pos+index);
            break;
        }
        index++;
    }
    return true;
}

int Questao1::mediaFuncionarios(){

    return Funcionario::getAtivos()/Empresa::getAtivas();
}

void Questao1::testar(){
    Empresa* vought = new Empresa("Vought International","870001/23");
    vought->adicionarEmpregado(new Funcionario("The Homelander",250000.00,date(2,11,1980),date(26,7,2019)));
    vought->adicionarEmpregado(new Funcionario("Black Noir",200000.00,date(25,7,1985),date(26,7,2019)));
    vought->adicionarEmpregado(new Funcionario("Queen Mave",200000.00,date(18,4,1991),date(26,7,2019)));
    vought->adicionarEmpregado(new Funcionario("A-Train",150000.00,date(2,12,1995),date(26,7,2019)));
    vought->adicionarEmpregado(new Funcionario("The Deep",100000.00,date(15,9,1990),date(26,7,2019)));
    vought->adicionarEmpregado(new Funcionario("Starlight",100000.00,date(12,5,1999),date(26,7,2019)));
    vought->adicionarEmpregado(new Funcionario("Stormfront",150000.00,date(1,8,1950),date(4,9,2020)));

    this->adicionaEmpresa(vought);
    this->listarEmpresas();

    vought->listarEmpregados();
    vought->aplicarAumento(0.2);

    Funcionario* coitado = vought->removerEmpregado("The Deep");
    if (coitado != nullptr) {
        cout << "R.I.P. " << coitado->getNome() << endl;
        delete coitado;
    }

    vought->listarEmpregados();
    vought->listarEmpregadosEmExp(date(11,7,2020));

    Empresa* tabajara = new Empresa("Organizações Tabajara", "990001/44");
    tabajara->adicionarEmpregado(new Funcionario("Zé Dirceu",100000.00,date(12,5,1999),date(26,7,2019)));
    tabajara->adicionarEmpregado(new Funcionario("Zé de Abreu",150000.00,date(1,8,1950),date(4,9,2020)));

    this->adicionaEmpresa(tabajara);
    tabajara->listarEmpregados();
    this->listarEmpresas();

    cout << "Total de empresas: " << Empresa::getAtivas() << endl;
    cout << "Total de funcionarios: " << Funcionario::getAtivos() << endl;
    cout << "Media de funcionarios por empresa: " << this->mediaFuncionarios() << endl;
}