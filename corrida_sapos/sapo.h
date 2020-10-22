#ifndef SAPO_H
#define SAPO_H

#include <random>

class Sapo
{
private:
	short sapo;
	short percorrido;
	short pulos;
	std::random_device dev();
	std::mt19937 gen(dev() );
	std::uniform_int_distribution<int> dist;
	
public:
	static short dist_total;
	static short sapos_criados;
	//methods
	Sapo();
	void Pular();
	//gets & sets
	short getSapo();
	void setSapo(short sapo_);
	short getPercorrido();
	void setPercorrido(short percorrido_);
	short getPulos();
	void setPulos(short pulos_);
	void setDist_total(short dist);
};

#endif //SAPO_H