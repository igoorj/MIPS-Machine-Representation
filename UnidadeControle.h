#ifndef UNIDADECONTROLE_H
#define UNIDADECONTROLE_H
#include <iostream>
#include <string>

using namespace std;

class UnidadeControle {

    public:
        string ALUOp;
        string ALUSrc;
        string Branch;
        string Jump;
        string MemRead;
        string MemWrite;
        string MemToReg;
        string NotZero;
        string RegWrite;
        string RegDst;
};

#endif
