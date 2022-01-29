#include <iostream>
#include <string>
#include <fstream>
#include "MemoriaInstrucoes.h"
#include "Decodificador.h"
#include "BancoRegistradores.h"

using namespace std;

int menu() {

    int opcao = -1;
    cout << " ========= Opcoes =========" << endl;
    cout << "[1] - Informar caminho do arquivo " << endl;
    cout << "[2] - Escrever manualmente a instrucao " << endl;
    cout << "[0] - Sair" << endl;
    cout << "Escolha: " << endl;
    cin >> opcao;
    return opcao;
}

int main(int argc, char const *argv[]) {

    int totalInstrucoes = 0, opcaoEscolha = 0;
    ifstream inFile;
    string linha;
    
    /*inFile.open ("entrada.txt", ios::in);
    if(!inFile)
        return 0; */

    do {    
        opcaoEscolha = menu();
        switch (opcaoEscolha) {

        case 1: {
            cout << "Falta implementar..." << endl;
            /*
            //memoria->imprimeInstrucoes(); // deve imprimir memoria vazia
            cout << "Lendo arquivo binario..." << endl;
            int counter = 0;
            while (! inFile.eof() && counter < totalInstrucoes) {
                getline (inFile, linha);
                memoria->insereInstrucao(linha);
                counter++;
            }

            memoria->imprimeInstrucoes(); // deve imprimir instrucoes inseridas
            inFile.close();     // fechando conexão
            delete [] memoria;  // deletando instancia da memoria
            */
            break;
        }
        case 2: {
            int qtdInstrucoes = 0;
            string instrucao;
            string conteudo;

            BancoRegistradores *banco = new BancoRegistradores();
            Decodificador *dec = new Decodificador();
            cout << "Quantas intrucoes deseja informar?" << endl;
            cin >> qtdInstrucoes;

            MemoriaInstrucoes *memoria = new MemoriaInstrucoes();

            for(int i=0; i<qtdInstrucoes; i++) {
                cout << "Instrucao numero " << i << ":" << endl;
                cin >> instrucao;
                //memoria->insereInstrucao(instrucao);
                memoria->insereComando(instrucao);
            }
            //memoria->imprimeInstrucoes();]
            cout << endl;
            cout << "Imprimindo Opcode: " << endl;
            conteudo = memoria->buscaInstrucao(8);
            dec->decodificaInstrucao(conteudo);

            cout << "\nImprimindo Retorno BancoRegistradores: " << endl;
            cout << "$rs: " << banco->buscaRegistrador(dec->getRs()) << "\n$rt: " << banco->buscaRegistrador(dec->getRt()) << endl;
            cout << endl;
            cout << endl;
            dec->BinaryToDecimal(10101);
            break;

            delete [] memoria;
        }
        case 0: {
            cout << "Encerrando programa..." << endl;
            return 0;
        }
         default:
            cout << "Opcao Invalida! Digite Novamente: ";
            break;
        }
        } while(opcaoEscolha != 0);

    return 0;
}