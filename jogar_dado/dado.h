#ifndef DADO_H
#define DADO_H

#include <random>

class Dado {
	private:
		int valor;
		std::random_device device;
		std::mt19937 generator;
		std::uniform_int_distribution<int> distribution;
	public:
		Dado();
		int jogar();
		int getValor();	
}; //Dado

#endif // DADO_H