#include <iostream>
#include "sapo.h"

using namespace std;

//set dist_total by argc argv after
//set argv vectos sapos

int Sapo::dist_total = 100;

int main(void) {

	Sapo sapo[3];

	while (1)
	{
		for (int i = 0; i < 3; ++i)
		{
			if (sapo[i].Pular())
			{
				cout << "O sapo " << sapo[i].getSapo() << " ganhou!" << endl;
				cout << "Pulos: " << sapo[i].getPulos() << endl;
				cout << "Distância percorrida: " << sapo[i].getPercorrido() << endl;
				exit(1);
			}
		}
	}

	return 0;
}