// Primeiro exercio utilizando While, onde o usuario digita um numero e se ele não estiver entre 5 e 1 o usuario terá que digitar o numero até sai do loop

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

    int numeroDigitado;

    cout << "Bem-vindo ao acerte o numero" << endl;
    cout << "Por favor digite um numero: ";
    cin >> numeroDigitado;

    while(numeroDigitado > 5 || numeroDigitado < 1){
        cout << "Por favor digite um numero: ";
        cin >> numeroDigitado;
    }

    cout << "Você acertou!";
   


    system("pause");
    return 0;
}
