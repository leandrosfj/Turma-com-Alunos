//
// Created by leandro on 10/28/20.
//

#ifndef JOGO_DADOS_DADO_HPP
#define JOGO_DADOS_DADO_HPP

#include <random>

class Dado {
private:
    int valor;
    std::random_device rd;
    std::default_random_engine gen;
    std::uniform_int_distribution<> dis;
public:
    Dado();
    int jogar();
    int getValor();
};


#endif //JOGO_DADOS_DADO_HPP
