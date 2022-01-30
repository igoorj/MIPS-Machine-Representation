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
        string result;
        string zeroAlu;

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
        
        void entradaAlu(string controle, string dados) {
            
           if(controle == "0010") {

           } else if (controle == "0110") {

           } else if (controle == "0000") {

           } else if (controle == "0001") {

           } else if (controle == "0111") {

           } else {
               cout << "Sinal de controle invalido." << endl;
               exit(1);
           }
        };
        string saidaAlu();
};

#endif 

