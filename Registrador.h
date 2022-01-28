#ifndef REGISTRADOR_H
#define REGISTRADOR_H
#include <iostream>
#include <string>

using namespace std;

class Registrador {
    
    private:
        string **registradores;
        int bitsPorRegistrador = 32;

        string *dado1;
        string *dado2;

        int regWrite;
        int controlRegW;
    
    public:

        Registrador();
        ~Registrador();
        string **getRegistradores();
        string *getDado1();
        string *getDado2();
        string mapeia(string registrador);
        void imprimeRegistradores();
        void escreveRegistrador(int posicao, string valor);
        void busca(int i, int j, int write, int controlData);
        void writeBack(string *dataW);
        string getRegistrador(int posicao);
};

#endif