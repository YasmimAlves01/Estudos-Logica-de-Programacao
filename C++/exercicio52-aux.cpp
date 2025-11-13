#ifndef Aluno_Includ
#define Aluno_Includ
#include <string>
#include <iostream>

class Aluno{
public:

int codigo;
std::string nome;
int idade;
std::string sexo;


Aluno(int codigoAlunos);

void mostrarDados();

};

void Aluno::mostrarDados()
{

    std::cout << codigo << std::endl;
    std::cout << nome << std::endl;
    std::cout << idade << std::endl;
    std::cout << sexo << std::endl;
   

}

Aluno::Aluno(int codigoAlunos){
    if( codigoAlunos == 1 ){
        codigo = 1;
        nome = "Nicole";
        idade = 28;
        sexo = "Feminino";
    }
    else if( codigoAlunos == 2 ){
        codigo = 2;
        nome= "Yuri";
        idade = 23;
        sexo = "Masculino";
    }
}



#endif





