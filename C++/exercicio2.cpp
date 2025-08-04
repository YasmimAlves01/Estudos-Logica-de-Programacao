#include <iostream>
#include <locale.h>

using namespace std;

// Programa que soma 3 numeros e retorna o resultado para a tela

int main(){

int numero1, numero2, numero3, soma;

cout << "Bem-vindo ao Soma+ \n";
cout << "Por favor digite o primeiro numero: ";
cin >> numero1;

cout << "Por favor digite o segundo numero: ";
cin >> numero2;

cout << "Por favor digite o terceiro numero: ";
cin >> numero3;

soma = numero1 + numero2 + numero3;

cout << "A soma de todos numero é: \n" << soma << "\n";
}