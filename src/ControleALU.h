
#ifndef CONTROLEALU_H
#define CONTROLEALU_H
#include <iostream>
#include <string>

using namespace std;

class ControleALU {

    private:
        string ALUop;
        string functField;
        string saidaALU;
    public:
        ControleALU();
        ~ControleALU();
        void controlaSinalLW(string aluop) {
            this->ALUop = aluop;
        };

        void controlaSinalR(string aluop, string funct) {
            this->ALUop = aluop;
            this->functField = funct;
        };

        void controlaSinalBranch(string aluop) {
            this->ALUop = aluop;
        };

        string getALUOp() {
            return this->ALUop;
        };
        string getFunctField() {
            return this->functField;
        };

        void sinalControle() {

           if(this->ALUop == "00") {
                this->saidaALU = "0010";
           } else if (this->ALUop == "01") {           
               this->saidaALU = "0010";
           } else if (this->ALUop == "10") {
               
               if(this->functField == "100000") {
                   this->saidaALU = "100000";
               } else if (this->functField == "100010") {
                    this->saidaALU = "100010";
               } else if (this->functField == "100100") {
                    this->saidaALU = "100100";
               } else if (this->functField == "100101") {
                    this->saidaALU = "100101";
               } else if (this->functField == "101010"){
                   this->saidaALU = "101010";
               }
           } else {

               cout << "Opcode invalido. " << endl;
               exit(1);
           }
        }

        string getSaidaALU() {
            return this->saidaALU;
        }  
};

#endif 
