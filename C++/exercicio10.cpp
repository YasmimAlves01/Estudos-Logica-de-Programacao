// Exercicio que pede 3 numeros a um usuario e então executa um calculo

#include <iostream>
#include <locale.h>
#include <string>

/* I - vem de Input - entrada
   O - vem de output - saida */

/* #include <locale.h>
    setlocale(LC_ALL< "portuguese");
*/

/* << endl = pula para linha de baixo*/

using namespace std;



int main(){

    //trata os acentos
    setlocale(LC_ALL, "Portuguese");
    
    double numero1, numero2, numero3, calc;

    cout << "Bem-vindo a calcula 3, sua calculadora de 3 numeros\n";

    cout << "Por favor digite o primeiro numero: ";
    cin >> numero1;

    cout << "Por favor digite o segundo numero: ";
    cin >> numero2;

    cout << "Por favor digite o terceiro numero: ";
    cin >> numero3;

    calc = (numero1 * 2) + (numero2 / 2);

    cout << "O Primeiro numero vezes dois mais a metade do Segundo numero é: " << calc << "\n";
    
    calc = (numero1 * 3) + numero3;

    cout << "O triplo do primeiro mais o terceiro numero é: " << calc << "\n";

    cout << "O terceiro numero multiplicado por 2 é: " << numero3*2 << "\n";


    system("pause");
    return 0;
}