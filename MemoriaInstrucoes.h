
#ifndef TRABALHO_MEMORIAINSTRUCOES_H
#define TRABALHO_MEMORIAINSTRUCOES_H
#include <iostream>
#include <string.h>

using namespace std;

class instrucao {
    public:
        string conteudo;
        int endereco;
};

class MemoriaInstrucoes {

    private:
        instrucao* comandos;
        int totalInstrucoesAdicionadas;
    public:
        MemoriaInstrucoes();
        ~MemoriaInstrucoes();
        void insereComando(string novaInstrucao);
        void imprimeInstrucoes();
        string buscaInstrucao(int pos); // busca instrucao na memoria
};


#endif