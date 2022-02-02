
#ifndef TRABALHO_DECODIFICADOR_H
#define TRABALHO_DECODIFICADOR_H
#include <iostream>
#include <string>

using namespace std;

class Decodificador {

    private:
        string aluop;
        string $rs;
        string $rt;
        string $rd;
        string opcode;
        string $address;
        string $funct;
        string $shamt;

    public:
        Decodificador();
        ~Decodificador();
        void decodificaInstrucao(string instrucao);
        string getRs();
        string getRt();
        string getRd() { return this->$rd; };
        void DecimalToBinary(int n);
        int BinaryToDecimal(int n); 
        string getALUOp() { return this->aluop; };
};

#endif 