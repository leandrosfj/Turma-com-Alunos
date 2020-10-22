#include "sapo.h"

Sapo::Sapo() :
        sapo(++sapos_criados), percorrido(0), pulos(0) {}

bool Sapo::Pular()

:dist(1, dist_total - percorrido)
{
percorrido +=
dist(gen);
pulos++;

}

if (percorrido == dist_total)
{
return true;    } else return false;
// Dado::Dado():device(),generator(device()), distribution(1,6) {
// 	valor = distribution(generator);
// }
}

short getSapo() {
    return sapo;
}

void setSapo(short sapo) {
    this->sapo = sapo;
}

short getPercorrido() {
    return percorrido;
}

void setPercorrido(short percorrido_) {
    percorrido = percorrido_;
}

short getPulos() {
    return pulos;
}

void setPulos(short pulos_) {
    pulos = pulos_;
}

void setDist_total(short dist) {
    dist_total = dist;
}