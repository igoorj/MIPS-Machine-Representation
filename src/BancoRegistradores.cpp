
#include <iostream>
#include <string>
#include "BancoRegistradores.h"

using namespace std;

BancoRegistradores::BancoRegistradores()
{
    this->$zero = "00000";
    this->$at = "00001";
    this->$v0 = "00010";
    this->$v1 = "00011";
    this->$a0 = "00100";
    this->$a1 = "00101";
    this->$a2 = "00110";
    this->$a3 = "00111";
    this->$t0 = "01000";
    this->$t1 = "01001";
    this->$t2 = "01010";
    this->$t3 = "01011";
    this->$t4 = "01100";
    this->$t5 = "01101";
    this->$t6 = "01110";
    this->$t7 = "01111";
    this->$t8 = "11000";
    this->$t9 = "11001";
    this->$s0 = "10000";
    this->$s1 = "10001";
    this->$s2 = "10010";
    this->$s3 = "10011";
    this->$s4 = "10100";
    this->$s5 = "10101";
    this->$s6 = "10110";
    this->$s7 = "10111";
    this->$k0 = "";
    this->$k1 = "";
    this->$gp = "11100";
    this->$sp = "11101";
    this->$fp = "11110";
    this->$ra = "11111";
}

BancoRegistradores::~BancoRegistradores()
{
}

void BancoRegistradores::escreveRegistrador(string reg, string conteudo)
{
    if (reg == "$zero")
        this->$zero = conteudo;
    else if (reg == "$at")
        this->$at = conteudo;
    else if (reg == "$v0")
        this->$v0 = conteudo;
    else if (reg == "$v1")
        this->$v1 = conteudo;
    else if (reg == "$a0")
        this->$a0 = conteudo;
    else if (reg == "$a1")
        this->$a1 = conteudo;
    else if (reg == "$a2")
        this->$a2 = conteudo;
    else if (reg == "$a3")
        this->$a3 = conteudo;
    else if (reg == "$t0")
        this->$t0 = conteudo;
    else if (reg == "$t1")
        this->$t1 = conteudo;
    else if (reg == "$t2")
        this->$t2 = conteudo;
    else if (reg == "$t3")
        this->$t3 = conteudo;
    else if (reg == "$t4")
        this->$t4 = conteudo;
    else if (reg == "$t5")
        this->$t5 = conteudo;
    else if (reg == "$t6")
        this->$t6 = conteudo;
    else if (reg == "$t7")
        this->$t7 = conteudo;
    else if (reg == "$s0")
        this->$s0 = conteudo;
    else if (reg == "$s1")
        this->$s1 = conteudo;
    else if (reg == "$s2")
        this->$s2 = conteudo;
    else if (reg == "$s3")
        this->$s3 = conteudo;
    else if (reg == "$s4")
        this->$s4 = conteudo;
    else if (reg == "$s5")
        this->$s5 = conteudo;
    else if (reg == "$s6")
        this->$s6 = conteudo;
    else if (reg == "$s7")
        this->$s7 = conteudo;
    else if (reg == "$t8")
        this->$t8 = conteudo;
    else if (reg == "$t9")
        this->$t9 = conteudo;
    else if (reg == "$k0")
        this->$k0 = conteudo;
    else if (reg == "$k1")
        this->$k1 = conteudo;
    else if (reg == "$gp")
        this->$gp = conteudo;
    else if (reg == "$sp")
        this->$sp = conteudo;
    else if (reg == "$fp")
        this->$fp = conteudo;
    else if (reg == "$ra")
        this->$ra = conteudo;
    else
    {
        cout << "Erro na busca do registrador " << reg << endl;
        exit(1);
    }
}

string BancoRegistradores::leRegistrador(string reg)
{
    if (reg == "$zero")
        return this->$zero;
    else if (reg == "$at")
        return this->$at;
    else if (reg == "$v0")
        return this->$v0;
    else if (reg == "$v1")
        return this->$v1;
    else if (reg == "$a0")
        return this->$a0;
    else if (reg == "$a1")
        return this->$a1;
    else if (reg == "$a2")
        return this->$a2;
    else if (reg == "$a3")
        return this->$a3;
    else if (reg == "$t0")
        return this->$t0;
    else if (reg == "$t1")
        return this->$t1;
    else if (reg == "$t2")
        return this->$t2;
    else if (reg == "$t3")
        return this->$t3;
    else if (reg == "$t4")
        return this->$t4;
    else if (reg == "$t5")
        return this->$t5;
    else if (reg == "$t6")
        return this->$t6;
    else if (reg == "$t7")
        return this->$t7;
    else if (reg == "$s0")
        return this->$s0;
    else if (reg == "$s1")
        return this->$s1;
    else if (reg == "$s2")
        return this->$s2;
    else if (reg == "$s3")
        return this->$s3;
    else if (reg == "$s4")
        return this->$s4;
    else if (reg == "$s5")
        return this->$s5;
    else if (reg == "$s6")
        return this->$s6;
    else if (reg == "$s7")
        return this->$s7;
    else if (reg == "$t8")
        return this->$t8;
    else if (reg == "$t9")
        return this->$t9;
    else if (reg == "$k0")
        return this->$k0;
    else if (reg == "$k1")
        return this->$k1;
    else if (reg == "$gp")
        return this->$gp;
    else if (reg == "$sp")
        return this->$sp;
    else if (reg == "$fp")
        return this->$fp;
    else if (reg == "$ra")
        return this->$ra;
    else
        cout << "Erro na busca do registrador " << reg << endl;
    return nullptr;
}
