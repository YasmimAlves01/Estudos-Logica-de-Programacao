// Aula utilizando IF - Operador Ternário

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

    string letra, mensagem;
 
    cout << "Bem-vindo ao Compra Ingresso BTN";
    cout << "Digite uma letra";
    cin >> letra;

    (letra=="a") ? mensagem="voce digitou a letra a" : mensagem="perdao, você não digitou a letra a";


    cout << "Letra digitada: " << letra << endl;
    cout << "Resultado: " << mensagem << endl;

    string vogal, resultado2;

    cout << "Digite uma vogal: ";
    cin >> vogal;

    (vogal == "a") ? resultado2 = "Vogal A" : (vogal == "e") ? resultado2 = "vogal e" : (vogal == "i") ? resultado2 = "vogal i" : (vogal == "o") ? resultado2 = "vogal o" : (vogal == "u") ? resultado2 = "vogal u" : resultado2 = "não é uma vogal";

    system("pause");
    return 0;
}
