
#include <iostream>
#include <string>
#include "Registrador.h"

using namespace std;

Registrador::Registrador() {

    this->registradores = new string*[this->bitsPorRegistrador];
    // inicializando os registradores
    for(int i=0; i<this->bitsPorRegistrador; i++) {
        this->registradores[i] = new string[bitsPorRegistrador];
        for(int j=0; j<this->bitsPorRegistrador; j++)
            this->registradores[i][j] = "0";
    }

    this->regWrite    = 0;
    this->controlRegW = 0;
}

Registrador::~Registrador() {

    for(int i=0; i<this->bitsPorRegistrador; i++)
        delete [] this->registradores[i];
    
    delete [] this->registradores;
}

void Registrador::busca(int i, int j, int write, int controlData) {

    this->dado1 = this->registradores[i];
    this->dado2 = this->registradores[j];
    this->regWrite = write;
    this->controlRegW = controlData;
}

void Registrador::writeBack(string *dataW) {
    if (controlRegW == 1) {
        for (int i = 0; i < this->bitsPorRegistrador; i++)
            this->registradores[regWrite][i] = dataW[i];
    }
}

string Registrador::mapeia(string reg)
{

    if (reg == "$zero")
        return "00000";
    
    else if (reg == "$at")
        return "00001";

    else if (reg == "$v0")
        return "00010";

    else if (reg == "$v1")
        return "00011";
    
    else if (reg == "$a0")
        return "00100";
    
    else if (reg == "$a1")
        return "00101";
    
    else if (reg == "$a2")
        return "00110";
    
    else if (reg == "$a3")
        return "00111";
    
    else if (reg == "$t0")
        return "01000";
    
    else if (reg == "$t1")
        return "01001";
    
    else if (reg == "$t2")
        return "01010";
    
    else if (reg == "$t3")
        return "01011";
    
    else if (reg == "$t4")
        return "01100";
    
    else if (reg == "$t5")
        return "01101";
    
    else if (reg == "$t6")
        return "01110";
    
    else if (reg == "$t7")
        return "01111";
    
    else if (reg == "$s0")
        return "10000";
    
    else if (reg == "$s1")
        return "10001";
    
    else if (reg == "$s2")
        return "10010";
    
    else if (reg == "$s3")
        return "10011";
    
    else if (reg == "$s4")
        return "10100";
    
    else if (reg == "$s5")
        return "10101";
    
    else if (reg == "$s6")
        return "10110";
    
    else if (reg == "$s7")
        return "10111";
    
    else if (reg == "$t8")
        return "11000";
    
    else if (reg == "$t9")
        return "11001";
    
    else if (reg == "$k0")
        return "";
    
    else if (reg == "$k1")
        return "";
    
    else if (reg == "$gp")
        return "11100";
    
    else if (reg == "$sp")
        return "11101";
    
    else if (reg == "$fp")
        return "11110";
    
    else if (reg == "$ra")
        return "11111";
    
    else
        cout << "Erro na busca do registrador " << reg << endl;
    
    return "";
}

void Registrador::escreveRegistrador(int posicao, string valor) {

    for(int i=0; i<this->bitsPorRegistrador; i++)
        registradores[posicao][i] = valor[i];
}

string **Registrador::getRegistradores() {
    return this->registradores;
}

string *Registrador::getDado1() {
    return this->dado1;
}

string *Registrador::getDado2() {
    return this->dado2;
}

string Registrador::getRegistrador(int posicao) {
    
    string saida = "";
    for(int i=0; i<this->bitsPorRegistrador; i++) {
        saida += this->registradores[posicao][i];
    }
    return saida;
}

void Registrador::imprimeRegistradores() {

    string saida = "";
    cout << "Imprimindo registradores" << endl;
    for(int i=0; i<this->bitsPorRegistrador; i++) {

        switch (i)
            {
            case 0:
                saida += "$zero: ";
                break;
            case 1:
                saida += "$at: ";
                break;
            case 2:
                saida += "$v0: ";
                break;
            case 3:
                saida += "$v1: ";
                break;
            case 4:
                saida += "$a0: ";
                break;
            case 5:
                saida += "$a1: ";
                break;
            case 6:
                saida += "$a2: ";
                break;
            case 7:
                saida += "$a3: ";
                break;
            case 8:
                saida += "$t0: ";
                break;
            case 9:
                saida += "$t1: ";
                break;
            case 10:
                saida += "$t2: ";
                break;
            case 11:
                saida += "$t3: ";
                break;
            case 12:
                saida += "$t4: ";
                break;
            case 13:
                saida += "$t5: ";
                break;
            case 14:
                saida += "$t6: ";
                break;
            case 15:
                saida += "$t7: ";
                break;
            case 16:
                saida += "$s0: ";
                break;
            case 17:
                saida += "$s1: ";
                break;
            case 18:
                saida += "$s2: ";
                break;
            case 19:
                saida += "$s3: ";
                break;
            case 20:
                saida += "$s4: ";
                break;
            case 21:
                saida += "$s5: ";
                break;
            case 22:
                saida += "$s6: ";
                break;
            case 23:
                saida += "$s7: ";
                break;
            case 24:
                saida += "$t8: ";
                break;
            case 25:
                saida += "$t9: ";
                break;
            case 26:
                saida += "$k0: ";
                break;
            case 27:
                saida += "$k1: ";
                break;
            case 28:
                saida += "$gp: ";
                break;
            case 29:
                saida += "$sp: ";
                break;
            case 30:
                saida += "$fp: ";
                break;
            case 31:
                saida += "$ra: ";
                break;

            default:
                break;
            }
            
            for (int j = 0; j < 32; j++)
                saida += registradores[i][j];
            //Log::getInstance().line(line);
    }
}