
#include <iostream>
#include <string>
#include "Decodificador.h"

using namespace std;

Decodificador::Decodificador() {
    this->instrucao = "";
    this->opcode = new char[6];
}

Decodificador::~Decodificador() {
    this->instrucao.clear();
}

string Decodificador::getInstrucao() {
    return this->instrucao;
}

void Decodificador::setInstrucao(string instrucao) {
    this->instrucao = instrucao;
}

string Decodificador::convertToString(char* a, int size) {

    string s = "";
    for (int i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

void Decodificador::decodifica() {

    if(this->instrucao.empty()) {
        cout << "Nao ha instrucoes a serem decodificadas..." << endl;
        exit(1);
    }

    // identificando o OPcode da instrucao
    for(int i=0; i<6; i++) {
        this->opcode[i] = this->instrucao[i];
    }
    /*
    string resultadoOpcode = this->convertToString(this->opcode, 6);

    if(resultadoOpcode == "100011") {

    } else if (resultadoOpcode == "000000") {

    } else if () {

    } else {
        cout << "Instrucao invalida!" << endl;
        exit(2);
    } */
}