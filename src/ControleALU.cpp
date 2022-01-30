
#include <iostream>
#include "ControleALU.h"
#include <string>

using namespace std;

void ControleALU::sinaisControleTipoR() {

            this->sinal[0].ativo = true;
            this->sinal[1].ativo = true;
            this->sinal[2].ativo = false;
            this->sinal[3].ativo = false;        
            this->sinal[4].ativo = false;       
            this->sinal[5].ativo = false;        
            this->sinal[6].ativo = false; 
};

void ControleALU::sinaisControleTipoLW() {

            this->sinal[0].ativo = false;
            this->sinal[1].ativo = true;
            this->sinal[2].ativo = true;
            this->sinal[3].ativo = false;        
            this->sinal[4].ativo = true;       
            this->sinal[5].ativo = false;        
            this->sinal[6].ativo = true; 
};

void ControleALU::sinaisControleTipoBeq() {

            this->sinal[0].ativo = false;
            this->sinal[1].ativo = false;
            this->sinal[2].ativo = false;
            this->sinal[3].ativo = true;        
            this->sinal[4].ativo = false;       
            this->sinal[5].ativo = false;        
            this->sinal[6].ativo = false; 

};

void ControleALU::sinaisControleTipoSW() {

            this->sinal[0].ativo = false;
            this->sinal[1].ativo = false;
            this->sinal[2].ativo = true;
            this->sinal[3].ativo = true;        
            this->sinal[4].ativo = false;       
            this->sinal[5].ativo = true;        
            this->sinal[6].ativo = false; 
} 
