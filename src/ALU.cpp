
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

        void ALU::entradaAlu(string controle, string dados1, string dados2) {
        
        
           if(controle == "0010") { // add
                addOperation(dados1, dados2);
                return;
           } else if (controle == "0110") { // sub
                operacaoSub(dados1, dados2);
                return;
           } else if (controle == "0000") { // and
                operacaoAnd(dados1, dados2);
                return;
           } else if (controle == "0001") { // or 
                operacaoOr(dados1, dados2);
                return;
           } else if (controle == "0111") { // slt
                setOnLessThan(dados1, dados2);
                return;
           } else {
               cout << "Sinal de controle invalido." << endl;
               exit(1);
           } 

        };

        void ALU::addOperation(string a, string b)
        {
            bool verificaOF = false;
            for (int i = 32; i > 0; i--)
            {
                if (a[i] == '0' && b[i] == '0') {
                    if (verificaOF) {
                        this->result[i] = '1';
                        verificaOF = false;
                    }
                    else
                        this->result[i] = '0';         
                }
                else if (a[i] == '1' && b[i] == '1') {
                    if (verificaOF)
                        this->result[i] = '1';
                    
                    else {
                        this->result[i] = '0';
                        verificaOF = true;
                    }
                }
                else {
                    if (verificaOF)
                        this->result[i] = '0';
                    else
                        this->result[i] = '1';
                }
            }
            this->ocorreuOverflow = verificaOF;
        }

        void ALU::setOnLessThan(string a, string b) {
            
            if (a[0] == '0' && b[0] == '1') 
                this->result = "0000000000000000000000000000";

            else if (a[0] == '1' && b[0] == '0')
                this->result = "11111111111111111111111111111111";
            
            else {
                operacaoSub(a, b);
                if (this->result[0] == '1')
                    this->result = "11111111111111111111111111111111";
                
                else
                    this->result = "0000000000000000000000000000";
                
            }
        }
        void ALU::operacaoShiftLeftLogical(string a, string b) {
            int shiftAmount = stoi(b, 0, 2);
            cout << shiftAmount << endl;
            for (int i = 32; i > 0; i--) {
                this->result[i] = a[(i + shiftAmount) % 32];
            }
        }
void ALU::operacaoSub(string a, string b) {

}