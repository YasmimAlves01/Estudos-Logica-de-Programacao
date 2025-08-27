// exercicio não resolvido
// Treino utilizando a lista de exercicio dada pelo monitor da materia de Estrutura de Dados


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

    double metros,metrosPintar, gastoLata, gastoGalai;

    double lata = 18;
    double galao = 3.6;

    cout << "Bem-vindo ao Sua Pintura Feliz";

    cout << "Por favor digite o tamanho do lugar em metros quadrados: ";

    cin >> metros;

    metrosPintar = (metros * 0.11) + metros / 6; 

    gastoLata = (metrosPintar / lata) * 80;

    gastoGalai = (metrosPintar / galao) * 25;

    cout << "O valor em latas: "<< gastoLata << "\n";
    cout << "O valor em galoes: "<< gastoGalai << "\n";


    system("pause");
    return 0;
}