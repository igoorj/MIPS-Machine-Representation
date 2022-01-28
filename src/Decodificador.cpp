
#include <iostream>
#include <string>
#include "Decodificador.h"

using namespace std;

Decodificador::Decodificador() {
    
    this->$rs = "";
    this->$rt = "";
    this->opcode = "";
}

Decodificador::~Decodificador() {
    
    this->$rs.clear();
    this->$rt.clear();
    this->opcode.clear();
}


void Decodificador::decodificaInstrucao(string instrucao) {

    for(int i=0; i<6; i++) {
        this->opcode += instrucao[i];
 
    }
    cout << "Opcode: " << this->opcode << endl;
    
    for(int i=6; i<11; i++) {
        this->$rs += instrucao[i];
    }

    cout << "$rs: " << this->$rs << endl;
    for(int i=11; i<16; i++) {
        this->$rt += instrucao[i];
    }

}

string Decodificador::getRs() {
    return this->$rs;
}

string Decodificador::getRt() {
    return this->$rt;
}