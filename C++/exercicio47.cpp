#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

// feito em função
void nomeSobrenome();
string nome, sobrenome;

int main(){

    cout << "Junte seu nome e sobrenome\n";

    cout << "digite seu nome: \n";
    cin >> nome;

    cout << "Digite seu sobrenome: \n";
    cin >> sobrenome;

    nomeSobrenome();

    system("pause");
    return 0;
}

void nomeSobrenome(){
    cout << "seu nome completo: " << nome << " "<< sobrenome << endl;
}



