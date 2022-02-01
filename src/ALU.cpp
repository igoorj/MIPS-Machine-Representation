
#include <iostream>
#include <string>
#include "ALU.h"

using namespace std;

ALU::ALU() {
        
    this->andf = "0000";
    this->orf = "0001";
    this->addf = "0010";
    this->subf = "0110";
    this->sltf = "0111";
    this->norf = "1100";
}

ALU::~ALU() {

        this->andf.clear();
        this->orf.clear();
        this->addf.clear();
        this->subf.clear();
        this->sltf.clear();
        this->norf.clear();
}

void ALU::operacaoAnd(string a, string b) {
    for (int i = 32; i > 0; i--) {
        if (a[i] == '1' && b[i] == '1') {
            this->result[i] = '1';
        } else {
            this->result[i] = '0';
        }
    }
}

void ALU::operacaoOr(string a, string b) {
    for (int i = 32; i > 0; i--) {
        if (a[i] == '1' || b[i] == '1') {
            this->result[i] = '1';
        } else {
            this->result[i] = '0';
        }
    }
}