#include "dado.h"

Dado::Dado():device(),generator(device()), distribution(1,6) {
	
	valor = distribution(generator);
}

int Dado::jogar() {
	valor = distribution(generator);
	return valor;
}

int Dado::getValor() {
	return valor;
}