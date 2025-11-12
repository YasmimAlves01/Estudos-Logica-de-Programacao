#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

class Aluno{
    public:
    string nome = "Yasmim";
    int idade = 29;
    string sexo = "Feminino";

    string estado;

    void seuEstado(string estadoAluno);

};

void Aluno::seuEstado(string estadoAluno){
    if(estadoAluno == "SP"){
        this -> estado = "São Paulo";
    }else if(estadoAluno == "SC"){
        this -> estado = "Santa Catarina";
    }else if(estadoAluno == "RJ"){
        this -> estado = "Rio de janeiro";
    }
}

int main(){

    Aluno *dadosAluno = new Aluno();

    cout << dadosAluno->nome <<"\n";
    cout << dadosAluno->idade <<"\n";
    dadosAluno->seuEstado("SP");
    cout << dadosAluno->estado <<"\n";

    system("pause");
    return 0;
}


