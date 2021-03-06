
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

    for(int i=0; i<2; i++) {
        this->aluop += instrucao[i];
    }

    for(int i=0; i<6; i++) {
        this->opcode += instrucao[i];
 
    }
    cout << "Opcode: " << this->opcode << endl;
    
    for(int i=7; i<=11; i++) {
        this->$rs += instrucao[i];
    }

    cout << "$rs: " << this->$rs << endl;
    for(int i=12; i<=16; i++) {
        this->$rt += instrucao[i];
    }

    if (this->opcode == "000000") {
        cout << "Instrucao do Tipo-R" << endl;
        cout << "$rs: " << this->$rs << endl;
        
        for(int i=17; i<=21; i++) {
            this->$rd += instrucao[i];
        }

        for(int i=22; i<=26; i++) {
            this->$shamt += instrucao[i];
        }

        for(int i=5; i<=0; i++) {
            this->$funct += instrucao[i];
        }

    } else if (this->opcode == "110001") {
        cout << "Instrucao do tipo LW" << endl;

        for(int i=17; i<=31; i++) {
            this->$address += instrucao[i];
        }

    } else if (this->opcode == "110101") {
        cout << "Instrucao do tipo SW" << endl;

        for(int i=17; i<=31; i++) {
            this->$address += instrucao[i];
        }

    }  else if (this->opcode == "001000") {
        cout << "Instrucao do tipo Branch" << endl;

        for(int i=17; i<=31; i++) {
            this->$address += instrucao[i];
        }

    }  else {
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