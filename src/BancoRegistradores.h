

#ifndef TRABALHO_BANCOREGISTRADORES_H
#define TRABALHO_BANCOREGISTRADORES_H
#include <iostream>
#include <string>

using namespace std;

class BancoRegistradores {

private:
    string $zero;
    string $at;
    string $v0;
    string $v1;
    string $a0;
    string $a1;
    string $a2;
    string $a3; 
    string $t0;
    string $t1;
    string $t2;
    string $t3;
    string $t4;
    string $t5;
    string $t6;
    string $t7;
    string $t8;
    string $t9;
    string $s0;
    string $s1;
    string $s2;
    string $s3;
    string $s4;
    string $s5;
    string $s6;
    string $s7;
    string $k0;
    string $k1;
    string $gp;
    string $sp;
    string $fp;
    string $ra;

public:

    BancoRegistradores();
    ~BancoRegistradores();
    string leRegistrador(string reg);
    void escreveRegistrador(string reg, string conteudo);

};

#endif
