//
// Created by leandro on 10/28/20.
//

#ifndef LOJA_DE_PRODUTOS_FRUTA_HPP
#define LOJA_DE_PRODUTOS_FRUTA_HPP

#include "produto.hpp"

class Fruta : public Produto{
private:
    string data_lote;
    string validade;

    ostream& print(ostream &o) const;
public:
    Fruta();
    Fruta(string codigo, string descricao, double preco, string data_lote, string validade);
    ~Fruta();

    string getDataLote() const;
    string getValidade() const;
    void setDataLote(string data_lote);
    void setValidade(string validade);
};


#endif //LOJA_DE_PRODUTOS_FRUTA_HPP
