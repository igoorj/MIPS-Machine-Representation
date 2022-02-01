
#ifndef PC_H
#define PC_H
#include <iostream>
#include <string>
#include "MemoriaInstrucoes.h"

using namespace std;

class PC {

    private:
        int enderecoAtual;
        int novoEndereco;
    public:
        PC();
        ~PC();
        int getEnderecoAtual();
        int getNovoEndereco();
        int buscaInstrucaoMemoria(int novoEndereco, bool PCSrc);

};

#endif