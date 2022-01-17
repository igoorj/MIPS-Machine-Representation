
#include "MemoriaInstrucoes.h"
#include <iostream>
#include <string>

using namespace std;

MemoriaInstrucoes::MemoriaInstrucoes(int totalInstrucoes) {
    this->posicoesInstrucoes = new string[totalInstrucoes];
    this->totalInstrucoesAdicionadas = 0;
}

MemoriaInstrucoes::~MemoriaInstrucoes() {
    delete [] this->posicoesInstrucoes;
}

string MemoriaInstrucoes::getInstrucao(int indice) {
    return this->posicoesInstrucoes[indice];
}

void MemoriaInstrucoes::insereInstrucao(string novaInstrucao) {

    this->posicoesInstrucoes[totalInstrucoesAdicionadas] = novaInstrucao;
    this->totalInstrucoesAdicionadas = totalInstrucoesAdicionadas + 1;  
}

void MemoriaInstrucoes::imprimeInstrucoes() {

    if(this->totalInstrucoesAdicionadas == 0) {
        cout << "Memoria vazia" << endl;
        exit(1);
    
    } else {
        cout << "Instrucoes presentes na memoria ..." << endl;
        for(int i=0; i< this->totalInstrucoesAdicionadas; i++) {
            cout << this->posicoesInstrucoes[i] << endl;
        }
    }

}