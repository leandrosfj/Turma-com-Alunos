#include <iostream>
#include "turma.h"
#include "aluno.h"

int Aluno::cadastrados = 0;

int main() {

	Turma turma("IMD0030", "LPI", 35);

	Aluno fulano("202000000", "Fulano de Tal", 20, "(00) 9 1234-5678", "Rua dos bobos, 00");
	Aluno cicrano("202000001", "Cicrano de Tal", 26, "(00) 9 8765-4321", "Rua dos bobos, 10");
	Aluno beltrano("202000002", "Beltrano de Tal", 81, "(00) 9 8765-4131", "Rua dos bobos, 50");
	Aluno deltrano(beltrano);
	deltrano.setNome("Deltrano");

	turma.addAluno(fulano);
	turma.addAluno(cicrano);
	turma.addAluno(beltrano);
	turma.addAluno(deltrano);

	cout << "Codigo da turma:  " << turma.getCodigo() << endl;
	cout << "Descricao:  " << turma.getDescricao() << endl;
	cout << "Capacidade:  " << turma.getCapacidade() << endl;
	cout << "Alunos Registrados: " << turma.getAlunosNaTurma() << endl;
	cout << endl;
	std::cout << "Cadastrados(membro estático): " << Aluno::getCadastrados() << std::endl;

	std::cout << "Lista de Alunos:"<<endl;
	turma.listaAlunos();

	return 0;
}