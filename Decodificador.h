
#ifndef TRABALHO_DECODIFICADOR_H
#define TRABALHO_DECODIFICADOR_H
#include <iostream>
#include <string>

using namespace std;

class Decodificador {

    private:
        string instrucao;
        char* opcode;

    public:
        Decodificador();
        ~Decodificador();
        string getInstrucao();
        void setInstrucao(string instrucao);
        void decodifica();
        string convertToString(char* a, int size);
};

#endif 