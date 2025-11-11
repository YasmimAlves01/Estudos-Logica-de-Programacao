#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

    void idadeUsuario(int idade=19);
    void nomeUsuario(string nome="Yasmim");

int main(){

    //trata os acentos
    setlocale(LC_ALL, "Portuguese");
    
    idadeUsuario();
    nomeUsuario();

    system("pause");
    return 0;
}

void idadeUsuario(int idade){
    cout << "Idade: " << idade << endl;
}

void nomeUsuario(string nome){
    cout << "Idade: " << nome << endl;
}
