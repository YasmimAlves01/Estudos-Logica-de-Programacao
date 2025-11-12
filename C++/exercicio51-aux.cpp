#ifndef Aluno_Included
#define Aluno_Included
#include <string>
#include <iostream>

class Aluno{

    public:
        // objetos da class
        int codigo;
        std::string nome;
        int idade;
        std::string sexo;

        Aluno(int codigoAluno);

        void exibirDados();
};

void Aluno::exibirDados(){
    std::cout << codigo;
    std::cout << nome;
    std::cout << idade;
    std::cout << sexo;
}

Aluno::Aluno(int codigoAluno){

    if(codigoAluno == 1){
        codigo = 1;
        nome = "Ana";
        idade = 32;
        sexo = "Feminino";
    }
}

#endif





