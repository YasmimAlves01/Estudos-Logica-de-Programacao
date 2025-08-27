// Exercicio onde o usuario digita um numero e devolvemos se aquele numero é negativo ou positivo

#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>

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

    int numero;

    cout << "Por favor digite um numero inteiro";
    cin >> numero;

    if(numero > 0){
        cout << "O numero digitado por você foi: "<< numero << endl;

        cout << "Ele é um numero positivo";
    }else{
        cout << "O numero digitado por você foi: " << numero << endl;
        cout << "Ele é um numero negativo";
    }

    system("pause");
    return 0;
}
