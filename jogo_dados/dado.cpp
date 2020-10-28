//
// Created by leandro on 10/28/20.
//

#include "dado.hpp"

Dado::Dado():rd(), gen(rd()), dis(1,6){
    valor = std::round(dis(gen));
}

Dado::jogar(){
    valor = std::round(dis(gen));
    return valor;
}

Dado::getValor(){
    return valor;
}