#include <iostream>
#include <string>
#include <fstream>
#include "MemoriaInstrucoes.h"

using namespace std;

int main(int argc, char const *argv[]) {

    int totalInstrucoes = 0;
    ifstream inFile;
    string linha;
    
    inFile.open ("entrada.txt", ios::in);
    if(!inFile)
        return 0;
    
    cout << "Informe o total de instrucoes que sera adicionada: " << endl;
    cin >> totalInstrucoes;

    MemoriaInstrucoes *memoria = new MemoriaInstrucoes(totalInstrucoes);
    //memoria->imprimeInstrucoes(); // deve imprimir memoria vazia

    cout << "Lendo arquivo binario..." << endl;
    int counter = 0;
    while (! inFile.eof() && counter < totalInstrucoes) {
        getline (inFile, linha);
        memoria->insereInstrucao(linha);
        counter++;
    }

    memoria->imprimeInstrucoes(); // deve imprimir instrucoes inseridas
    
    inFile.close();     // fechando conexão
    delete [] memoria;  // deletando instancia da memoria
    return 0;
}