// programa em que dispara um while até que o usuario digite o numero zero, e apos o usuario digitar esse numero ele mostra quantos numeros o usuario digitou anteriormente e a media entre eles

#include <iostream>
#include <locale.h>


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

    double numeroDigite;

    double soma = 0;
    double total = 0;


    cout << "Digite um numero: ";
    cin >> numeroDigite;

    while(numeroDigite > 0){
        soma = soma + numeroDigite;
        total++;


    cout << "Digite um numero: ";
    cin >> numeroDigite;
    }

    cout << "O total de numeros é: "<< total << endl;

    cout << "A media é: " << (soma / total) << endl;
 

    system("pause");
    return 0;
}

