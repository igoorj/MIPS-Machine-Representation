#ifndef PIPELINE_H
#define PIPELINE_H
#include <iostream>
#include <string>
#include "BancoRegistradores.h"
#include "MemoriaDados.h"
#include "MemoriaInstrucoes.h"
#include "MemoriaDados.h"
#include "PC.h"
#include "ALU.h"
#include "Decodificador.h"
#include "ControleALU.h"

using namespace std;

class Pipeline {
    
    private:
        string regA;
        string regB;
        MemoriaInstrucoes *memoriaInstrucoes;
        PC *pc;
        MemoriaDados *memoriaDados;
        ControleALU *controle;
        Decodificador *decodificador;
        BancoRegistradores *banco;
        ALU *alu;
        string saidaEX;
        // atributos
        string instrucaoIF;
    public:
        Pipeline();
        ~Pipeline();
        void IF();
        string ID();
        void EX();
        void MEM();
        void WB();        
};

#endif