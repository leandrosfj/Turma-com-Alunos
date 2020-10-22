#include <iostream>
#include <random>
#include "dado.h"

int main(int argc, char const *argv[])
{
	Dado meu_dado;

	for (int i=0; i< atoi(argv[1]); ++i) {

		std::cout << meu_dado.jogar() << std::endl;
	}

	return 0;
} //main
