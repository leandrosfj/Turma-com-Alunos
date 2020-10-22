#ifndef TURMA_HPP
#define TURMA_HPP

using namespace std;

#include "aluno.hpp"

#define CAP_MAX 10

class Turma {
	private:
		string codigo;
		string descricao;
		Aluno* participantes[CAP_MAX];
		short capacidade;
		int alunosNaTurma = 0;
	public:
		Turma();
		~Turma(); //destrutor
		Turma(string codigo_, string descricao_, short capacidade_);
		void addAluno (Aluno &umAluno);
		// get & set
		string getCodigo();
		void setCodigo(string novoCodigo);
		void setCapacidade(short cap);
		short getCapacidade();
		string getDescricao();
		void setDescricao(string novaDescricao);
		short getAlunosNaTurma();
		void listaAlunos();
};

#endif //TURMA_HPP