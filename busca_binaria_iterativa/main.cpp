#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(vector<int>& v, int busca);

int main(int argc, char** argv) {

    char * pEnd;
    int busca = int(strtol(argv[1], &pEnd, 10));
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    buscaBinaria(v, busca);

    return 0;
}

int buscaBinaria(vector<int>& v, int busca){

    int inicio = 0;
    int fim = int(v.size()) - 1;

    while(fim>=inicio){
        int meio = (inicio + fim)/2;

        if (busca == v[meio]) {
            cout << busca << " encontrado!" << endl;
            return 1;
        }
        else if (busca > v[meio])
            inicio = meio+1;
        else if (busca < v[meio])
            fim = meio-1;
    }
    cout << busca << " nao encontrado!" << endl;
    return 0;
}
