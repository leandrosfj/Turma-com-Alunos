#include "turma.hpp"

#include <iostream>

Turma::Turma():
	codigo(""), descricao(""), participantes(nullptr), capacidade(0), alunosNaTurma(0)
{}

Turma::~Turma(){ //destrutor
	delete []participantes;
}

Turma::Turma(string codigo_, string descricao_, short capacidade_):
	codigo(codigo_), descricao(descricao_), capacidade(capacidade_), alunosNaTurma(0)
{
	participantes = new Aluno[capacidade_];
}

string Turma::getCodigo(){
	return this->codigo;
}

void Turma::setCodigo(string Codigo){
	this->codigo = Codigo;
}

string Turma::getDescricao(){
	return descricao;
}

void Turma::setDescricao(string novaDescricao){
	descricao = novaDescricao;
}

void Turma::setCapacidade(short cap) {
	capacidade = cap;
	participantes = new Aluno[cap];
	alunosNaTurma = 0;
}

short Turma::getCapacidade() {
	return capacidade;
}

void Turma::addAluno (Aluno &umAluno){
	if (alunosNaTurma < capacidade)	{
		participantes[alunosNaTurma++] = umAluno;
	}
}

short Turma::getAlunosNaTurma(){
	return alunosNaTurma;
}

void Turma::listaAlunos(){
	for (int i = 0; i < alunosNaTurma;i++)
	{
		cout << endl;
		cout << "Meu nome é " << participantes[i].getNome() << endl;
		cout << "Minha matricula é " << participantes[i].getMatricula() << endl;
		cout << "Minha idade é " << participantes[i].getIdade() << endl;
		cout << "Meu contato é " << participantes[i].getContato() << endl;
		cout << "Meu endereço é " << participantes[i].getEndereco() << endl;
	}
}
