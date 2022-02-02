
#include <iostream>
#include <string>
#include "Pipeline.h"

Pipeline::Pipeline() {

    this->memoriaInstrucoes = new MemoriaInstrucoes();
    this->pc = new PC();
    this->memoriaDados = new MemoriaDados();
    this->controle = new ControleALU();
    this->decodificador = new Decodificador();
    this->banco = new BancoRegistradores();
    this->alu = new ALU();
};

Pipeline::~Pipeline() {

    delete this->memoriaInstrucoes;
    delete this->pc;
    delete this->memoriaDados;
    delete this->controle;
    delete this->decodificador;
    delete this->banco;
    delete this->alu;
};

void Pipeline::IF() {
    // busca da instrução na memoria
    bool PCSrc = false;
    int posicao;
    // pc armazena endereço da instrução atual
    int endereco = this->pc->buscaInstrucaoMemoria(0, PCSrc); 
    // endereço é buscado na memoria de instrucao
    string instrucaoAtual = this->memoriaInstrucoes->buscaInstrucao(endereco);
    // instrucaoIF recebe instrucao buscada na memoria de instrucoes
    
    this->instrucaoIF = instrucaoAtual;
    cout << "Buscando instrucao(IF) " << instrucaoIF << endl;
}; 


string Pipeline::ID() {
    
    // decodificar instrucao vinda de IF
    decodificador->decodificaInstrucao(instrucaoIF);
    // fazendo leitura dos registradores apos a decodificação da instrucao
     this->regA = banco->leRegistrador(decodificador->getRs());
     this->regB = banco->leRegistrador(decodificador->getRt());

    cout << "Decodificando instrucao(ID) " << instrucaoIF << endl;
}

void Pipeline::EX() {

    string aluopsignal = decodificador->getALUOp();
    controle->sinalControle(aluopsignal); // recebe o opcode e retorna o tipo de operacao
    string sinalSaida = controle->getSaidaALU();
    // realizando operação na alu
    alu->entradaAlu(sinalSaida, regA, regB);
    // recuperando o resultado da alu
    saidaEX = alu->getAluOut();

    cout << "Executando instrucao(EX) " << instrucaoIF << endl;
}

void Pipeline::WB() {
    
        cout << "Acessando memoria(WB) " << instrucaoIF << endl;
    if (controle->getSinalControleALU()[1].ativo) { // verifica se RegWrit esta ativo

        banco->escreveRegistrador(decodificador->getRd(), saidaEX); // gravando em rd a saida da ALU        
    }
    else
        cout << "Instrucao não eh de escrita!" << endl;
}