//
// Created by leandro on 10/28/20.
//

#ifndef JOGO_DADOS_JOGO_HPP
#define JOGO_DADOS_JOGO_HPP

#include <iostream>

#include "jogador.hpp"

#define MAX_JOGADORES 10

class Jogo {
private:
    Jogador * jogadores[MAX_JOGADORES];
    Jogador * vencedor = nullptr;
    int total_jogadores;
    int rodadas;
    Dado dado1;
    Dado dado2;
public:
    Jogo();
    ~Jogo();

    void novaRodada();
    int totalEmJogo();
    void run();
    void addJogador(Jogador * novo);

    int getAtivos();
    void mostrarResultado();
};

#endif //JOGO_DADOS_JOGO_HPP
