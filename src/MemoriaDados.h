
#ifndef MEMORIADADOS_H
#define MEMORIADADOS_H
#include <iostream>
#include <string>

using namespace std;

class MemoriaDados {

    private:
        const string ZERO = "00000000000000000000000000000000";
        char **memory;
        string memoryData;
    public:
        MemoriaDados();
        ~MemoriaDados();
        string getMemoryData();
        void executaOperacao(string address, string writeData, string memRead, string memWrite);
};

#endif 