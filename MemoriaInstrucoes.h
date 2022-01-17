
#ifndef TRABALHO_MEMORIAINSTRUCOES_H
#define TRABALHO_MEMORIAINSTRUCOES_H
#include <iostream>
#include <string.h>

using namespace std;

class MemoriaInstrucoes {

    private:
        string *posicoesInstrucoes;
        int totalInstrucoesAdicionadas;
    public:
        MemoriaInstrucoes(int totalInstrucoes);
        ~MemoriaInstrucoes();
        string getInstrucao(int indice);
        void insereInstrucao(string novaInstrucao);
        void imprimeInstrucoes();
};


#endif