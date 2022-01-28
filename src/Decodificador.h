
#ifndef TRABALHO_DECODIFICADOR_H
#define TRABALHO_DECODIFICADOR_H
#include <iostream>
#include <string>

using namespace std;

class Decodificador {

    private:
        string $rs;
        string $rt;
        string opcode;

    public:
        Decodificador();
        ~Decodificador();
        void decodificaInstrucao(string instrucao);
        string getRs();
        string getRt();
        
};

#endif 