#ifndef fichaAluno
#define fichaAluno
#include <string>
#include <iostream>

class FichaAluno{
    public:
    int codigo;
    std::string nome;

    FichaAluno(int codigoDoAluno);

    void exibirDados();


    private:
    int idade;
    std::string sexo;
};


void FichaAluno::exibirDados(){

        std::cout<<codigo;
        std::cout<<nome;

}


FichaAluno::FichaAluno(int codigoDoAluno){

    if(codigoDoAluno == 1){
        codigo = 1;
        nome = "Ana";
        idade = 10;
        sexo = "Feminino";
    }
}



#endif