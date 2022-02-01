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
        string result = "0000000000000000000000000000000";
        string zeroAlu;
        bool ocorreuOverflow;

        void operacaoAnd(string a, string b);
        void operacaoOr(string a, string b);
        void operacaoShiftLeftLogical(string a, string b) {
            int shiftAmount = stoi(b, 0, 2);
            cout << shiftAmount << endl;
            for (int i = 32; i > 0; i--) {
                this->result[i] = a[(i + shiftAmount) % 32];
            }
        }

        void setOnLessThan(string a, string b) {
            
            if (a[0] == '0' && b[0] == '1') 
                this->result = "0000000000000000000000000000";

            else if (a[0] == '1' && b[0] == '0')
                this->result = "11111111111111111111111111111111";
            
            else {
                operacaoSub(a, b);
                if (this->result[0] == '1')
                    this->result = "11111111111111111111111111111111";
                
                else
                    this->result = "0000000000000000000000000000";
                
            }
        }

        void addOperation(string a, string b)
        {
            //cout << "\nA: " << a << "\nB: " << b << endl;
            bool carry = false;
            for (int i = 32; i > 0; i--)
            {
                if (a[i] == '0' && b[i] == '0') {
                    if (carry) {
                        this->result[i] = '1';
                        carry = false;
                    }
                    else
                        this->result[i] = '0';         
                }
                else if (a[i] == '1' && b[i] == '1') {
                    if (carry)
                        this->result[i] = '1';
                    
                    else {
                        this->result[i] = '0';
                        carry = true;
                    }
                }
                else {
                    if (carry)
                        this->result[i] = '0';
                    else
                        this->result[i] = '1';
                }
                //cout << "\nALURESULT: " << aluResult;
                //cout << "\nCARRY: " << carry << endl;
            }
            this->ocorreuOverflow = carry;
        }

        string turnInTheSymmetrical(string number) {
            int primeiroUm = 31;
            while (number[primeiroUm] != '1') {
                primeiroUm--;
            }
            for (int i = primeiroUm - 1; i >= 0; i--) {
                number[i] = (number[i] == '0') ? '1' : '0';
            }
            return number;
        }

        void operacaoSub(string a, string b) {

        }

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
        
        void entradaAlu(string controle, string dados1, string dados2) {
        
        
           if(controle == "0010") { // add
                addOperation(dados1, dados2);
                return;
           } else if (controle == "0110") { // sub
                operacaoSub(dados1, dados2);
                return;
           } else if (controle == "0000") { // and
                operacaoAnd(dados1, dados2);
                return;
           } else if (controle == "0001") { // or 
                operacaoOr(dados1, dados2);
                return;
           } else if (controle == "0111") { // slt
                setOnLessThan(dados1, dados2);
                return;
           } else {
               cout << "Sinal de controle invalido." << endl;
               exit(1);
           } 

        };
        string saidaAlu();
        

};

#endif 

