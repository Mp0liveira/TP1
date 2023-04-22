#include "Dominios.h"
#include <iostream>
#include <string>
#include <unordered_set>

bool Classe::verificarClasse(std::string classe){

    // Array que contem os formatos validos para o valor do objeto tipo "Classe"

    std::string formatos[6] = {"UNIDADE", "INTEGRACAO",
     "FUMACA", "SISTEMA", "REGRESSAO", "ACEITACAO"};

    // Loop com comparacoes entre cada um dos valores validos e o valor inserido
    // &formato foi utilizado para evitar copias desnecessarias, ja que o valor nao sera alterado

    for(const std::string &formato : formatos){
        if(formato == classe){
            return true;
        }
    }

    return false;
}

void Classe::setClasse(std::string classe){
    if(verificarClasse(classe)){
        this->classe = classe;
    }

}


bool Codigo::verificarCodigo(std::string codigo){
    const int tamanho = 6;
    // verifica se o valor inserido para o objeto "codigo" possui a quantidade correta de caracteres

    if(codigo.length() != tamanho){
        return false;
    }

    // separa os caracteres de tipo alpha dos digitos, para facilitar a comparacao

    std::string letras = codigo.substr(0,3);
    std::string numeros = codigo.substr(3);

    for(char c : letras){
        if(!isalpha(c)){
            return false;
        }
    }

    for(char c : numeros){
        if(!isdigit(c)){
            return false;
        }
    }

    return true;
}

void Codigo::setCodigo(std::string codigo){
    if(verificarCodigo(codigo)){
        this->codigo = codigo;
    }

}

bool Matricula::verificarMatricula(std::string matricula){
    int soma = 0, verificador;
    const int tamanho = 7;
    if(matricula.length() != tamanho){
        return false;
    }

    for(char c : matricula){
        if(!isdigit(c)){
            return false;
        }
    }

    for(int i=0; i < tamanho - 1; i++){
        if(i % 2 == 0){
            soma += std::stoi(matricula.substr(i, 1));
        }else{
            soma += 2 * (std::stoi(matricula.substr(i, 1)));
        }
    }

    verificador = soma % 10;
    if(verificador != std::stoi(matricula.substr(6, 1))){
        return false;
    }

    return true;
}

void Matricula::setMatricula(std::string matricula){
    if(verificarMatricula(matricula)){
        this->matricula = matricula;
    }

}

bool Resultado::verificarResultado(std::string resultado){
    if(resultado != "APROVADO" && resultado != "REPROVADO"){
        return false;
    }

    return true;
}

void Resultado::setResultado(std::string resultado){
    if(verificarResultado(resultado)){
        this->resultado = resultado;
    }

}

bool Senha::verificarSenha(std::string senha){
    std::unordered_set<char> caracteres;

    if(senha.length() != 6){
        return false;
    }

    for(char c : senha){

        if(!isalnum(c) && c !='@' && c != '#' &&
        c != '$' && c != '%' && c != '&'){
            return false;
        }
        if(caracteres.find(c) != caracteres.end()){
            return false;
        }
        caracteres.insert(c);
    }

    return true;
}


void Senha::setSenha(std::string senha){
    if(verificarSenha(senha)){
        this->senha = senha;
    }
}
