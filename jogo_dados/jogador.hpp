//
// Created by leandro on 10/28/20.
//

#ifndef JOGO_DADOS_JOGADOR_HPP
#define JOGO_DADOS_JOGADOR_HPP

#include <iostream>
#include "dado.hpp"

using std::string;

enum StatusJogador{ATIVO,PARADO,EXCLUIDO};

class Jogador {
private:
    string nome;
    int pontos;
    StatusJogador status;
    static int alvo;
public:
    Jogador();
    Jogador(string nome);
    ~Jogador();

    int Jogar(Dado &d1, Dado &d2);
    bool podeJogar();

    int getPontos() const;
    string getNome() const;
    StatusJogador getStatus() const;

    static int getAlvo();
};

#endif //JOGO_DADOS_JOGADOR_HPP
