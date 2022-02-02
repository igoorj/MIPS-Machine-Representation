#ifndef ALU_H
#define ALU_H
#include <iostream>
#include <string>

using namespace std;

class ALU {
    
    private:
        string andf;
        string orf;
        string addf;
        string subf;
        string sltf;
        string norf;
        string result = "0000000000000000000000000000000";
        string zeroAlu;
        bool ocorreuOverflow;

        void operacaoAnd(string a, string b);
        void operacaoOr(string a, string b);
        void operacaoShiftLeftLogical(string a, string b);
        void setOnLessThan(string a, string b);
        void addOperation(string a, string b);
        void operacaoSub(string a, string b);

    public:
        ALU();
       ~ALU();        
        string getAnd() {
            return this->andf;
        };
        string getOr() {
            return this->orf;
        };
        string getAdd() {
            return this->addf;
        };
        string getSub() {
            return this->subf;
        };
        string getSlt() {
            return this->sltf;
        };
        string getNor() {
            return this->norf;
        };
        
        void entradaAlu(string controle, string dados1, string dados2);
        string saidaAlu();
        string getAluOut() { return this->result; };

};

#endif 

