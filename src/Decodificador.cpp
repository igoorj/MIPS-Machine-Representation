
#include <iostream>
#include <string>
#include "Decodificador.h"

using namespace std;

Decodificador::Decodificador() {
    
    this->$rs = "";
    this->$rt = "";
    this->opcode = "";
}

Decodificador::~Decodificador() {
    
    this->$rs.clear();
    this->$rt.clear();
    this->opcode.clear();
}


void Decodificador::decodificaInstrucao(string instrucao) {

    for(int i=0; i<6; i++) {
        this->opcode += instrucao[i];
 
    }
    cout << "Opcode: " << this->opcode << endl;
    
    for(int i=6; i<11; i++) {
        this->$rs += instrucao[i];
    }

    cout << "$rs: " << this->$rs << endl;
    for(int i=11; i<16; i++) {
        this->$rt += instrucao[i];
    }

    if (this->opcode == "") {
        cout << "Instrucao do Tipo-R"
    } else if (this->opcode == "") {
        cout << "Instrucao do LW/SW"
    } else if (this->opcode == "") {
        cout << "Instrucao do beq"
    } else {
        cout << "Instrucao invalida." << endl;
        exit(2);
    }

}

string Decodificador::getRs() {
    return this->$rs;
}

string Decodificador::getRt() {
    return this->$rt;
}

void Decodificador::DecimalToBinary(int n) {
    
    int binaryNumber[32], num=n;
    int i = 0;
    while (n > 0) {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout<<"Binary form of "<<num<<" is ";
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNumber[j];
    cout<<endl;
}

int Decodificador::BinaryToDecimal(int n) {
    int decimalNumber = 0;
    int base = 1;
    int temp = n;
    while (temp) {
        int lastDigit = temp % 10;
        temp = temp/10;
        decimalNumber += lastDigit*base;
        base = base*2;
    }
   cout<<"Decimal form of "<<n<<" is "<<decimalNumber<<endl;;
} 