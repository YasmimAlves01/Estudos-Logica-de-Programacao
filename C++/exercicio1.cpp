#include <iostream>
#include <locale.h>

using namespace std;

// Programa que pede nome e idade do usuario e retorna para a tela

int main(){

    string nome;
    int idade;

    cout<< "Por favor digite seu nome: ";
    cin >> nome;
    cout<< "Por favor digite sua idade: ";
    cin >> idade;

    cout<< "Seu nome: " << nome << "\n";
    cout<< "Sua idade: " << idade << "\n";

    system("pause");
    return 0;
}