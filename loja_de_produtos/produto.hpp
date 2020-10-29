//
// Created by leandro on 10/28/20.
//

#ifndef LOJA_DE_PRODUTOS_PRODUTO_HPP
#define LOJA_DE_PRODUTOS_PRODUTO_HPP

#include <iostream>

using std::string;
using std::ostream;

class Produto {
protected:
    string cod_barras;
    string descricao;
    double preco;
public:
    Produto();
    Produto(string codigo, string descricao, double preco);
    virtual ~Produto();

    string getCodBarras() const;
    string getDescricao() const;
    double getPreco() const;
    void setCodBarras(string codigo);
    void setDescricao(string descricao);
    void setPreco(double preco);

    double operator+ (const Produto &outro) const;
    double operator- (const Produto &outro) const;
    double operator+ (const double &valor) const;
    double operator- (const double &valor) const;
    bool operator== (const Produto &outro) const;

    friend ostream& operator<< (ostream &o, Produto const &p);
private:
    virtual ostream& print(ostream&) const = 0;
};

#endif //LOJA_DE_PRODUTOS_PRODUTO_HPP
