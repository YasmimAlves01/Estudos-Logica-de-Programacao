#include <iostream>
#include <locale.h>

// Programa que converte Metros em centimetros

using namespace std;
int main(){

    //trata os acentos
    setlocale(LC_ALL, "Portuguese");

    int metros, centimetros;

    cout << "Bem vindo ao Converte-Space \n";
    cout << "Por favor digite quantos metros voce deseja converter para centimetros: ";

    cin >> metros;

    centimetros = metros * 100;

    cout << metros << " metros sao " << centimetros << " centimetros no total \n";

    system("pause");
    return 0;
}