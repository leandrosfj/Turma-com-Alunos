//
// Created by leandro on 10/21/20.
//

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "date.h"
#include <string>

using std::string;

class Funcionario {
public:
    Funcionario(string nome, double salario, date nascimento, date admissao);
    Funcionario(const Funcionario &copia);
    ~Funcionario();
    string getNome() const;
    double getSalario() const;
    date getNascimento() const;
    date getAdmissao() const;
    void setSalario(double salario);

    static int getAtivos();

    bool operator==(const Funcionario& outro) const;

    friend std::ostream& operator<< (std::ostream &o, Funcionario const f);

private:
    string nome;
    double salario;
    date nascimento;
    date admissao;

    static int ativos;
};

#endif //FUNCIONARIO_H
