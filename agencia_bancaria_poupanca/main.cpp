#include "agencia.h"

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    date hoje = date(5,11,2020);
    Agencia ag("Agência Central", "2304-1","Banco Quebrado S/A", hoje);

    return 0;
}
