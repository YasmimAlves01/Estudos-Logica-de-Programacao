// Exercicio onde o while vai adicionando +1 até chegar no numero 10

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

    int numero = 0;

    cout << "Bem-vindo ao de 0 a 10" << endl;

    while (numero <= 10){
        cout << numero << endl;
        numero++;
    }

   


    system("pause");
    return 0;
}
