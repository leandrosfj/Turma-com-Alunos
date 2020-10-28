#include "jogo.hpp"
#include <iostream>

using std::cout;
using std::endl;

int Jogador::alvo = 50;

int main() {
    Jogo game;
    cout << "Novo jogo de lançamento de dados" << endl;
    game.addJogador(new Jogador("Popeye"));
    game.addJogador(new Jogador("Olívia"));
    game.addJogador(new Jogador("Capitão"));
    game.addJogador(new Jogador("Marujo"));
    game.addJogador(new Jogador("Marinheiro"));
    game.run();
    return 0;
}
