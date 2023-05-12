#include <iostream>
#include <string>
#include "Dominios.h"
#include "Entidades.h"
#include "Testes.h"

using namespace std;

int main(){

    TUClasse testeA;

    if (testeA.run() == true) {
        cout << "Sucesso - Classe" << endl;
    } else {
        cout << "Falha - Classe" << endl;
    }

    TUCodigo testeB;

    if (testeB.run() == true) {
        cout << "Sucesso - Codigo" << endl;
    } else {
        cout << "Falha - Codigo" << endl;
    }

    TUData testeC;

    if (testeC.run() == true) {
        cout << "Sucesso - Data" << endl;
    } else {
        cout << "Falha - Data" << endl;
    }

    TUMatricula testeD;

    if (testeD.run() == true) {
        cout << "Sucesso - Matricula" << endl;
    } else {
        cout << "Falha - Matricula" << endl;
    }

    TUResultado testeE;

    if (testeE.run() == true) {
        cout << "Sucesso - Resultado" << endl;
    } else {
        cout << "Falha - Resultado" << endl;
    }

    TUSenha testeF;

    if (testeF.run() == true) {
        cout << "Sucesso - Senha" << endl;
    } else {
        cout << "Falha - Senha" << endl;
    }

    TUTelefone testeG;

    if (testeG.run() == true) {
        cout << "Sucesso - Telefone" << endl;
    } else {
        cout << "Falha - Telefone" << endl;
    }

    TUTexto testeH;

    if (testeH.run() == true) {
        cout << "Sucesso - Texto" << endl;
    } else {
        cout << "Falha - Texto" << endl;
    }

    TUDesenvolvedor testeI;

    if (testeI.run() == true) {
        cout << "Sucesso - Desenvolvedor" << endl;
    } else {
        cout << "Falha - Desenvolvedor" << endl;
    }

    TUTeste testeJ;

    if (testeJ.run() == true) {
        cout << "Sucesso - Teste" << endl;
    } else {
        cout << "Falha - Teste" << endl;
    }

    TUCasoDeTeste testeK;

    if (testeK.run() == true) {
        cout << "Sucesso - Caso de Teste" << endl;
    } else {
        cout << "Falha - Caso de Teste" << endl;
    }

    return 0;
}
