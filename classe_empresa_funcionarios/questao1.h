//
// Created by leandro on 10/22/20.
//

#ifndef QUESTAO1_H
#define QUESTAO1_H

#include "empresa.h"

#include <vector>
#include <string>

using std::vector;

class Questao1 {
public:
    Questao1();
    ~Questao1();
    void listarEmpresas();
    bool adicionaEmpresa(Empresa* nova);
    bool removeEmpresa(string nome);
    void testar();
    int mediaFuncionarios();
private:
    vector<Empresa*> empresas;
};

#endif //QUESTAO1_H
