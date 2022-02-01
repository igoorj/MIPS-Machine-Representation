
#include "MemoriaInstrucoes.h"
#include <iostream>
#include <string>

using namespace std;

MemoriaInstrucoes::MemoriaInstrucoes() {

    this->comandos = new instrucao[128]; // Memoria de 512 bytes
    this->totalInstrucoesAdicionadas = 0;
}

MemoriaInstrucoes::~MemoriaInstrucoes() {
    delete [] this->comandos;
}

void MemoriaInstrucoes::imprimeInstrucoes() {

    if(this->totalInstrucoesAdicionadas == 0) {
        cout << "Memoria vazia" << endl;
        exit(1);
    
    } else {
        cout << "Instrucoes presentes na memoria ..." << endl;
        for(int i=0; i< this->totalInstrucoesAdicionadas; i++) {
            cout << "Posicao: " << this->comandos[i].endereco 
            << " / Instrucao: " << this->comandos[i].conteudo << endl;
        }
    }

}

string MemoriaInstrucoes::buscaInstrucao(int pos) {
    
    if(this->totalInstrucoesAdicionadas == 0)
        return nullptr;
    
    int i = 0;
    while(i<this->totalInstrucoesAdicionadas && comandos[i].endereco <pos) {
        i++;
    }

    // retornando a instrucao da memoria
    return this->comandos[i].conteudo;
}

void MemoriaInstrucoes::insereComando(string instrucao) {

    if(this->totalInstrucoesAdicionadas <= 128) {
        this->comandos[totalInstrucoesAdicionadas].conteudo = instrucao;
        this->comandos[totalInstrucoesAdicionadas].endereco = 4*(totalInstrucoesAdicionadas+1);
        
        this->totalInstrucoesAdicionadas++;
    } else {
        cout << "Erro: Memoria cheia." << endl;
        exit(1);
    }
}

int MemoriaInstrucoes::getTotalInstrucoesAdicionadas() {
    return this->totalInstrucoesAdicionadas;
}