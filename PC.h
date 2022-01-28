
#ifndef PC_H
#define PC_H
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class PC {
    
    private:
        int valor;
    public:
        PC();
        ~PC();
        int converteBin(string numero);
        void getJump(string valor);
        void zeraValor();
        int getPC();
        void incrementaPC();
        void setPC(string valor);
        void setPCint(int valor);
};

#endif