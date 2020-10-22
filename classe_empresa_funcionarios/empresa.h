//
// Created by leandro on 10/21/20.
//

#ifndef EMPRESA_H
#define EMPRESA_H

#include "funcionario.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class Empresa {
public:
    Empresa(string nome, string cnpj);
    Empresa(const Empresa &copia);
    ~Empresa();
    string getNome() const;
    string getCnpj() const;
    Funcionario* adicionarEmpregado(Funcionario* novo);
    Funcionario* removerEmpregado(string nome);
    void listarEmpregados();
    void listarEmpregadosEmExp(date referencia);
    int aplicarAumento(double percentual);
    static int getAtivas();

    friend std::ostream& operator<< (std::ostream &o, Empresa const e);

private:
    string nome;
    string cnpj;
    vector<Funcionario*> empregados;
    static int ativas;
};

#endif //EMPRESA_H
