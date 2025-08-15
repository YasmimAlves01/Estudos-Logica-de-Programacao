// Treino utilizando a lista de exercicio dada pelo monitor da materia de Estrutura de Dados
// Programa que calcula a multa que um pescador ira receber de acordo com o KG de peixe pescado no dia

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

    int peixeTotal, peixeExtra, multa;

    cout << "Bem-vindo ao calculo diario João\n";

    cout << "Por favor me diga quantos kilos de peixe temos hoje :) \n";
    cin >> peixeTotal;

    peixeExtra = peixeTotal - 50;

    multa = peixeExtra * 4.00;

    if(multa == 0){
        cout << "Que legal joão, hoje não teremos multa, a quantidade dada esta dentro do limite\n";
    }else{
        cout << "Poxa, teremos multa hoje :( \n";
        cout << "A multa total será de: R$" << multa << "\n";
    }

    system("pause");
    return 0;
}