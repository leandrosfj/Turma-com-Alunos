#include "agencia.h"

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{

    Agencia ag("2304-1","Agência Central","Banco Quebrado S/A");

    ContaCorrente* conta1 = new ContaCorrente("2304-1", "8900765-7", 1000.00,contaNormal, 400.00);
    ContaCorrente* conta2 = new ContaCorrente("2304-1", "0986765-9", 500.00,contaNormal, 400.00);
    ag.adicionaConta(conta1);
    ag.adicionaConta(conta2);

    //ag.criarConta();
    ag.listaContas();
    ag.saque("8900765-7", 300);
    ag.saldo("8900765-7");
    ag.deposito("8900765-7", 300);
    ag.saldo("8900765-7");
    ag.tranferencia("8900765-7", "0986765-9", 300);
    ag.extrato("8900765-7");
    ag.extrato("0986765-9");

    return 0;
}