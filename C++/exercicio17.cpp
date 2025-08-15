// Treino utilizando a lista de exercicio dada pelo monitor da materia de Estrutura de Dados

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

    int numero1, numero2, divisao;

    cout << "Bem-vindo ao divide numero \n";
    cout << "Por favor digite o primeiro numero: \n";

    cin >> numero1;

    cout << "Por favor digite o segundo numero: \n";

    cin >> numero2;

    divisao = numero1 / numero2;

    cout << "O resultado da divisão do numero " << numero1 << " e do numero " << numero2 << " é: " << divisao << "\n";


    system("pause");
    return 0;
}

