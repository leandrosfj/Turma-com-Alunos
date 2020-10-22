#include "tempo.hpp"

#include<iostream>

using namespace std;

int main()
{
    Tempo tempo1,tempo2;
    cout << "Tempo 1: ";
    cin >> tempo1;
    cout << "Tempo 2: ";
    cin >> tempo2;

    Tempo soma = tempo1 + tempo2;

    cout << "Tempo final: ";
    cout << soma << endl;

	return 0;
}



