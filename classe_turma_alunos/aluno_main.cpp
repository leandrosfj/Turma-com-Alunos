#include <iostream>
#include "aluno.h"

int Aluno::cadastrados = 0;

using namespace std;

int main(int argc, char *argv[]) {

    Aluno fulano;
    fulano.setMatricula("202000000");
    fulano.setNome("Fulano de Tal");
    fulano.setIdade(20);
    fulano.setContato("(00) 9 1234-5678");
    fulano.setEndereco("Rua dos bobos, 00");

    Aluno* outro = new Aluno();
    outro->setNome("Marilia M");
    outro->setIdade(25);
    //outro->setContato("239456834");
    outro->setContato(fulano.getContato());
    outro->setEndereco("sei la onde mora");
    outro->setMatricula("2374594");

    std::cout << "Meu nome é " << fulano.getNome() << std::endl;
    std::cout << "Minha idade é " << fulano.getIdade() << std::endl;

    return 0;
}