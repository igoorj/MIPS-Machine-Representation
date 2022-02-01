#include <iostream>
#include <string>
#include "PC.h"

PC::PC() {

}

PC::~PC() {

}

int PC::getNovoEndereco() {
    return this->novoEndereco;
}

int PC::getEnderecoAtual() {
    return this->enderecoAtual;
}

int PC::buscaInstrucaoMemoria(int end, bool PCSrc) {

    if(!PCSrc) 
        this->novoEndereco += 4;
    else 
        this->novoEndereco = this->novoEndereco + 4 * end; // desvio
    
    this->enderecoAtual = this->novoEndereco;
    return this->novoEndereco;
}