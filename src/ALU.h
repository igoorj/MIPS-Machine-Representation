#ifndef ALU_H
#define ALU_H
#include <iostream>
#include <string>

using namespace std;

class ALU {
    
    string andf = "0000";
    string orf = "0001";
    string addf = "0010";
    string subf = "0110";
    string sltf = "0111";
    string nor = "1100";

    private:

    public:
        ALU() {
        
            this->andf = "0000";
            this->orf = "0001";
            this->addf = "0010";
            this->subf = "0110";
            this->sltf = "0111";
            this->nor = "1100";
        };

       ~ALU() {

            this->andf.clear();
            this->orf.clear();
            this->addf.clear();
            this->subf.clear();
            this->sltf.clear();
            this->nor.clear();
       };

        
};

#endif 

