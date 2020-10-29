//
// Created by leandro on 10/28/20.
//

#ifndef LOJA_DE_PRODUTOS_BEBIDA_HPP
#define LOJA_DE_PRODUTOS_BEBIDA_HPP

#include "produto.hpp"

class Bebida : public Produto{
private:
    double teor_alcoolico;

    ostream& print(ostream &o) const;
public:
    Bebida();
    Bebida(string codigo, string descricao, double preco, double teor_alcoolico);
    ~Bebida();

    double getTeorAlcoolico() const;
    void setTeorAlcoolico(double teor_alcoolico);
};

#endif //LOJA_DE_PRODUTOS_BEBIDA_HPP
