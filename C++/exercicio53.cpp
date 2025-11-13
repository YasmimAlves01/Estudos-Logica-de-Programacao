#include <iostream>
#include <locale.h>
#include <string>
#include "exercicio53-aux.cpp"

using namespace std;

int main(){

    
    setlocale(LC_ALL, "Portuguese");

    FichaAluno *infoAluno = new FichaAluno(1);

    infoAluno->exibirDados();


    system("pause");
    return 0;
}