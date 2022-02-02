
#ifndef CONTROLEALU_H
#define CONTROLEALU_H
#include <iostream>
#include <string>

using namespace std;

class SinalControle {
    public:
        string sinal;
        bool ativo;
};

class ControleALU {

    private:
        string ALUop;
        string functField;
        string saidaALU;
        SinalControle *sinal;
    public:
        ControleALU() {
            this->sinal = new SinalControle[7];
            this->sinal[0].sinal = "RegDst";
            this->sinal[0].ativo = false;
            this->sinal[1].sinal = "RegWrite";
            this->sinal[1].ativo = false;
            this->sinal[2].sinal = "ALUSrc";
            this->sinal[2].ativo = false;
            this->sinal[3].sinal = "Branch";
            this->sinal[3].ativo = false;        
            this->sinal[4].sinal = "MemRead";
            this->sinal[4].ativo = false;       
            this->sinal[5].sinal = "MemWrite";
            this->sinal[5].ativo = false;        
            this->sinal[6].sinal = "MemtoReg";
            this->sinal[6].ativo = false;        
        };
        ~ControleALU() {
            
        };
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

        void sinalControle(string aluSignal) {

           if(aluSignal == "00") {
                this->saidaALU = "0010";
           } else if (aluSignal == "01") {           
               this->saidaALU = "0110";
           } else if (aluSignal == "10") {
               
               if(this->functField == "100000") {
                   this->saidaALU = "0010";
               } else if (this->functField == "100010") {
                    this->saidaALU = "0110";
               } else if (this->functField == "100100") {
                    this->saidaALU = "0000";
               } else if (this->functField == "100101") {
                    this->saidaALU = "0001";
               } else if (this->functField == "101010"){
                   this->saidaALU = "0111";
               }
           } else {

               cout << "Opcode invalido. " << endl;
               exit(1);
           }
        }

        string getSaidaALU() {
            return this->saidaALU;
        }

        SinalControle *getSinalControleALU() {
            return this->sinal;
        }

        void sinaisControleTipoR();
        void sinaisControleTipoLW();
        void sinaisControleTipoSW();
        void sinaisControleTipoBeq();

        void setALUop(string aluop) {
            this->ALUop = aluop;
        }   
};

#endif 
