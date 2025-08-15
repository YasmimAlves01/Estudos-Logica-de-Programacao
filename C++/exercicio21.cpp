// Treino utilizando a lista de exercicio dada pelo monitor da materia de Estrutura de Dados
// Programa que calcula a hipotenusa, e utiliza a função sqrt para o calculo da raiz quadrada

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
    double numero1, numero2, raiz, resultado;

    cout << "Bem-vindo ao Hipotenusa Ajuda\n";

    cout << "Por favor digite o primeiro numero: \n";

    cin >> numero1;

    cout << "Por favor digite o segundo numero: \n";
    cin >> numero2;

    resultado = (numero1 * numero1) + (numero2 * numero2);

    raiz = sqrt(resultado);

    cout << "O resultado da hipotenusa e: " << raiz << "\n";

    system("pause");
    return 0;
}
