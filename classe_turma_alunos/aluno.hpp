#ifndef ALUNO_HPP
#define ALUNO_HPP

using namespace std;

class Aluno {
	private:
		string matricula;
		string nome;
		int idade;
		string contato;
		string endereco;
	public:
		//get & set
		string getMatricula();
		void setMatricula(string matricula);
		string getNome();
		void setNome(string nome);
		short getIdade();
		void setIdade(int idade);
		string getContato();
		void setContato(string contato);
		string getEndereco();
		void setEndereco(string endereco);
};	

#endif //ALUNO_HPP