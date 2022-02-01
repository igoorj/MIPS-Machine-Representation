
#include <iostream>
#include <string>
#include "MemoriaDados.h"

using namespace std;

MemoriaDados::MemoriaDados() {
    
    this->memory = new char *[128];
    for (int i = 0; i < 128; i++) {
        this->memory[i] = new char[32];
    }
    
    this->memoryData = ZERO;

    for(int i = 0; i < 128; i++) {
        for(int j = 0; j < 32;j++) {
            memory[i][j] = '0';
        }
    }
};

MemoriaDados::~MemoriaDados() {
    for (int i = 0; i < 128; i++) {
        delete[] memory[i];
    }
    
    delete[] memory;
};

string MemoriaDados::getMemoryData() {
    return this->memoryData;
};

void MemoriaDados::executaOperacao(string address, string writeData, string memRead, string memWrite) { 
    if (memRead == "1" || memWrite == "1") {
        
        int intAddress = stoi(address, 0, 2);
        if (intAddress > 128) {
            cout << "This address don't exist!" << endl;
            exit(1);
        }
        else {
            //cout << "INT ADDRESS: " << intAddress << endl;
            //cout << "\n" << memory[intAddress][0] << endl;
            for (int i = 0; i < 32; i++) {
                //cout << "I: " << i << endl;
                if (memRead == "1") {
                    //cout << "Entra no if" << endl;
                    //cout << "MEM DATA SIZE " << this->memoryData.size() << endl;
                    //cout << "memoryData " << this->memoryData << endl;
                    this->memoryData[i] = this->memory[intAddress][i];
                }
                else {
                    this->memory[intAddress][i] = writeData[i];
                }
            }
        }
    }
};