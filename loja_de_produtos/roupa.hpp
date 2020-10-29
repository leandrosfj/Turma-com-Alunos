//
// Created by leandro on 10/28/20.
//

#ifndef LOJA_DE_PRODUTOS_ROUPA_HPP
#define LOJA_DE_PRODUTOS_ROUPA_HPP

#include "produto.hpp"

enum TipoSexo{
    MASCULINO, FEMININO
};

enum TipoTamanho {
    PP, P, M, G, GG, XXG
};

class Roupa : public Produto {
private:
    string marca;
    TipoSexo sexo;
    TipoTamanho tamanho;

    ostream& print(ostream &o) const;
public:
    Roupa();
    Roupa(string codigo, string descricao, double preco, string marca, TipoSexo sexo, TipoTamanho tamanho);
    ~Roupa();

    string getmarca() const;
    TipoSexo getSexo() const;
    TipoTamanho getTamanho() const;

    void setMarca(string marca);
    void setSexo(TipoSexo sexo);
    void setTamanho(TipoTamanho tamanho);
};

#endif //LOJA_DE_PRODUTOS_ROUPA_HPP
