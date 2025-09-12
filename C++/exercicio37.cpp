// Aula de primeiro uso de Do While

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

    int contador;
    contador = 1;

    // do= faça
    // while = enquanto
    // diferente do while e do while smepre vai executar o codigo pelo menos uma vez
    do{
        cout << "numero: " << "\n";
        contador++;
    }
    while(contador < 101);

    system("pause");
    return 0;
}