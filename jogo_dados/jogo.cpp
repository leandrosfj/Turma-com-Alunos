//
// Created by leandro on 10/28/20.
//

#include "jogo.hpp"

Jogo::Jogo():total_jogadores(0),rodadas(0){}

Jogo::~Jogo(){}

void Jogo::novaRodada(){
    this->rodadas++;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "RODADA #" << this->rodadas << std::endl;
    std::cout << "------------------------------------" << std::endl;
    for (int i = 0; i < this->total_jogadores; ++i) {
        if (this->jogadores[i]->getStatus() != EXCLUIDO && totalEmJogo()==1){
            this->vencedor = this->jogadores[i];
            break;
        }
        if (this->jogadores[i]->podeJogar()){
            int jogada = this->jogadores[i]->Jogar(this->dado1, this->dado2);

            if (this->jogadores[i]->getStatus()==EXCLUIDO){
                std::cout << this->jogadores[i]->getNome() << " pontuou: " << jogada << " e estourou os pontos (" << this->jogadores[i]->getPontos() << ") e foi EXCLUIDO." << std::endl;
            } else{
                std::cout << this->jogadores[i]->getNome() << " pontuou: " << jogada << " | Total: " << this->jogadores[i]->getPontos() << std::endl;
            }

            if (this->jogadores[i]->getPontos()==Jogador::getAlvo()){
                this->vencedor = this->jogadores[i];
                break;
            }
        }
    }
    std::cout << "------------------------------------" << std::endl;
}

int Jogo::totalEmJogo(){
    int emJogo = 0;
    for (int i = 0; i < this->total_jogadores; ++i) {
        if (this->jogadores[i]->getStatus()==ATIVO || this->jogadores[i]->getStatus()==PARADO){
            emJogo++;
        }
    }
    return emJogo;
}

void Jogo::run(){
    while (this->vencedor== nullptr && getAtivos()>0 && totalEmJogo()>1){
        novaRodada();
    }
    int maior = 0;
    if (this->vencedor==nullptr){
        for (int i = 0; i < this->total_jogadores; ++i) {
            if (this->jogadores[i]->getStatus()!=EXCLUIDO && this->jogadores[i]->getPontos()>maior){
                this->vencedor = this->jogadores[i];
                maior = this->jogadores[i]->getPontos();
            }

        }
    }
    mostrarResultado();
}

void Jogo::addJogador(Jogador * novo){
    if (this->total_jogadores<MAX_JOGADORES){
        this->jogadores[this->total_jogadores++] = novo;
    }
}

int Jogo::getAtivos(){
    int ativos = 0;
    for (int i = 0; i < this->total_jogadores; ++i) {
        if (this->jogadores[i]->getStatus()==ATIVO){
            ativos++;
        }
    }
    return ativos;
}

void Jogo::mostrarResultado(){
    std::cout << "====================================" << std::endl;
    std::cout << "         RESULTADO DO JOGO " << std::endl;
    std::cout << "------------------------------------" << std::endl;
    for (int i = 0; i < this->total_jogadores; ++i) {
        std::cout << this->jogadores[i]->getNome() << " --- " << this->jogadores[i]->getPontos() << " pontos.";

        if (this->jogadores[i]==this->vencedor){
            std::cout << " ** VENCEDOR ** ";
        }
        if (this->jogadores[i]->getStatus()==EXCLUIDO){
            std::cout << " >> EXCLUÍDO << ";
        }
        std::cout << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
}