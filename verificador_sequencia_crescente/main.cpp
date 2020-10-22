#include <iostream>
#include <vector>

using namespace std;

int EstaOrdemCrescente(vector<int>&, int);

int main(int argc, char** argv) {

    vector<int> vetorA;
    char * pEnd;

    vetorA.reserve(argc);

    for (int i = 0; i < argc; ++i) {
        vetorA.push_back(strtol(argv[i], &pEnd, 10));
    }

    EstaOrdemCrescente(vetorA, vetorA.size());
}
int EstaOrdemCrescente(vector<int>& vetor, int tamanho) {

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i - 1] > vetor[i]) {
            cout << "Nao esta em ordem crescente" << endl;
            return 0;
        }
    }
    cout << "Esta em ordem crescente" << endl;
    return 1;
}


