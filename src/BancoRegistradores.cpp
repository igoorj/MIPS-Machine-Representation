
#include <iostream>
#include <string>
#include "BancoRegistradores.h"

using namespace std;

BancoRegistradores::BancoRegistradores()
{
    this->$zero = this->zero;
    this->$at = this->zero;
    this->$v0 = this->zero;
    this->$v1 = this->zero;
    this->$a0 = this->zero;
    this->$a1 = this->zero;
    this->$a2 = this->zero;
    this->$a3 = this->zero;
    this->$t0 = this->zero;
    this->$t1 = this->zero;
    this->$t2 = this->zero;
    this->$t3 = this->zero;
    this->$t4 = this->zero;
    this->$t5 = this->zero;
    this->$t6 = this->zero;
    this->$t7 = this->zero;
    this->$t8 = this->zero;
    this->$t9 = this->zero;
    this->$s0 = this->zero;
    this->$s1 = this->zero;
    this->$s2 = this->zero;
    this->$s3 = this->zero;
    this->$s4 = this->zero;
    this->$s5 = this->zero;
    this->$s6 = this->zero;
    this->$s7 = this->zero;
    this->$k0 = this->zero;
    this->$k1 = this->zero;
    this->$gp = this->zero;
    this->$sp = this->zero;
    this->$fp = this->zero;
    this->$ra = this->zero;
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


int BancoRegistradores::buscaRegistrador(string conteudo) {

     if(conteudo == "00000") {
        this->$zero == "00000";
        return stoi(this->$zero);
    
    }  else if(conteudo == "00001") {
        this->$at == "00001";
        return stoi(this->$at);
    
    }  else if(conteudo == "00010") {
        this->$v0 == "00010";
        return stoi(this->$v0);
    
    }  else if(conteudo == "00011") {
        this->$v1 == "00011";
        return stoi(this->$v1);
    
    }  else if(conteudo == "00100") {
        this->$a0 == "00100";
        return stoi(this->$a0);
    
    }  else if(conteudo == "00101") {
        this->$a1 == "00101";
        return stoi(this->$a1);
    
    }  else if(conteudo == "00110") {
        this->$a2 == "00110";
        return stoi(this->$a2);
    
    }  else if(conteudo == "00111") {
        this->$a3 == "00111";
        return stoi(this->$a3);
    
    }  else if(conteudo == "01000") {
        this->$t0 == "01000";
        return stoi(this->$t0);
    
    }  else if(conteudo == "01001") {
        this->$t1 == "01001";
        return stoi(this->$t1);
    
    }  else if(conteudo == "01010") {
        this->$t2 == "01010";
        return stoi(this->$t2);
    
    }  else if(conteudo == "01011") {
        this->$t3 == "01011";
        return stoi(this->$t3);
    
    }  else if(conteudo == "01100") {
        this->$t4 == "01100";
        return stoi(this->$t4);
    
    }  else if(conteudo == "01101") {
        this->$t5 == "01101";
        return stoi(this->$t5);
    
    }  else if(conteudo == "01110") {
        this->$t6 == "01110";
        return stoi(this->$t6);
    
    }  else if(conteudo == "011111") {
        this->$t7 == "011111";
        return stoi(this->$t7);
    
    }  else if(conteudo == "10000") {
        this->$s0 == "10000";
        return stoi(this->$s0);
    
    }  else if(conteudo == "10001") {
        this->$s1 == "10001";
        return stoi(this->$s1);
    
    }  else if(conteudo == "10010") {
        this->$s2 == "10010";
        return stoi(this->$s2);
    
    }  else if(conteudo == "10011") {
        this->$s3 == "10011";
        return stoi(this->$s3);
    
    }  else if(conteudo == "10100") {
        this->$s4 == "10100";
        return stoi(this->$s4);
    
    }  else if(conteudo == "10101") {
        this->$s5 == "10101";
        return stoi(this->$s5);
    
    }  else if(conteudo == "10110") {
        this->$s6 == "10110";
        return stoi(this->$s6);
    
    }  else if(conteudo == "10111") {
        this->$s7 == "10111";
        return stoi(this->$s7);
    
    }  else if(conteudo == "11000") {
        this->$t8 == "11000";
        return stoi(this->$t8);
    
    }  else if(conteudo == "11001") {
        this->$t9 == "11001";
        return stoi(this->$t9);
    
    }  else if(conteudo == "11010") {
        this->$k0 == "11010";
        return stoi(this->$k0);
    
    }  else if(conteudo == "11011") {
        this->$k1 == "11011";
        return stoi(this->$k1);
    
    }  else if(conteudo == "11100") {
        this->$gp == "11100";
        return stoi(this->$gp);
    
    }  else if(conteudo == "11101") {
        this->$sp == "11101";
        return stoi(this->$sp);
    
    }  else if(conteudo == "11110") {
        this->$fp == "11110";
        return stoi(this->$fp);
    
    }  else if(conteudo == "11111") {
        this->$ra == "11111";
        return stoi(this->$ra);
    } 
}

void BancoRegistradores::imprime() {
    if ($zero != this->zero)
        cout << this->$zero << endl;
    else if ($at != this->zero)
        cout << this->$at << endl;
    else if ($v0 != this->zero)
        cout << this->$v0 << endl;
    else if ($v1 != this->zero)
        cout << this->$v1 << endl;
    else if ($a0 != this->zero)
        cout << this->$a0 << endl;
    else if ($a1 != this->zero)
        cout << this->$a1 << endl;
    else if ($a2 != this->zero)
        cout << this->$a2 << endl;
    else if ($a3 != this->zero)
        cout << this->$a3 << endl;
    else if ($t0 != this->zero)
        cout << this->$t0 << endl;
    else if ($t1 != this->zero)
        cout << this->$t1 << endl;
    else if ($t2 != this->zero)
        cout << this->$t2 << endl;
    else if ($t3 != this->zero)
        cout << this->$t3 << endl;
    else if ($t4 != this->zero)
        cout << this->$t4 << endl;
    else if ($t5 != this->zero)
        cout << this->$t5 << endl;
    else if ($t6 != this->zero)
        cout << this->$t6 << endl;
    else if ($t7 != this->zero)
        cout << this->$t7 << endl;
    else if ($s0 != this->zero)
        cout << this->$s0 << endl;
    else if ($s1 != this->zero)
        cout << this->$s1 << endl;
    else if ($s2 != this->zero)
        cout << this->$s2 << endl;
    else if ($s3 != this->zero)
        cout << this->$s3 << endl;
    else if ($s4 != this->zero)
        cout << this->$s4 << endl;
    else if ($s5 != this->zero)
        cout << this->$s5 << endl;
    else if ($s6 != this->zero)
        cout << this->$s6 << endl;
    else if ($s7 != this->zero)
        cout << this->$s7 << endl;
    else if ($t8 != this->zero)
        cout << this->$t8 << endl;
    else if ($t9 != this->zero)
        cout << this->$t9 << endl;
    else if ($k0 != this->zero)
        cout << this->$k0 << endl;
    else if ($k1 != this->zero)
        cout << this->$k1 << endl;
    else if ($gp != this->zero)
        cout << this->$gp << endl;
    else if ($sp != this->zero)
        cout << this->$sp << endl;
    else if ($fp != this->zero)
        cout << this->$fp << endl;
    else if ($ra != this->zero)
        cout << this->$ra << endl;
}