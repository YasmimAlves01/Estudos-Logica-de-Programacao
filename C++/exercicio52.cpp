#include <iostream>
#include <locale.h>
#include <string>
#include "exercicio52-aux.cpp"


using namespace std;

int main(){

    //trata os acentos
    setlocale(LC_ALL, "Portuguese");

    Aluno *infoAluno = new Aluno(1);

    infoAluno->mostrarDados();


    infoAluno->nome = "Fernanda";
    infoAluno->mostrarDados();

    string nomeAluno;
    cout << "\n\n Digite o nome do aluno: ";
    cin >> nomeAluno;
    infoAluno->nome = nomeAluno;
    infoAluno->mostrarDados();

    




    system("pause");
    return 0;
}
