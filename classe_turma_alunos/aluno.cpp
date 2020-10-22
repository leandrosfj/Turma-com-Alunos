#include "aluno.hpp"

#include <iostream>

using namespace std;

string Aluno::getMatricula(){
	return this->matricula;
}
void Aluno::setMatricula(string matricula){
	this->matricula = matricula;
}
string Aluno::getNome(){
	return this->nome;
}
void Aluno::setNome(string nome){
	this->nome = nome;
}
int Aluno::getIdade(){
	return this->idade;
}
void Aluno::setIdade(int i){
	this->idade = idadede;
}
string Aluno::getContato(){
	return this->contato;
}
void Aluno::setContato(string contato){
	this->contato = contato;
}
string Aluno::getEndereco(){
	return this->endereco;
}

void Aluno::setEndereco(string endereco){
	this->endereco = endereco;
}