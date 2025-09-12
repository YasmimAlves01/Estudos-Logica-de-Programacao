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


    int numero, contador, impar;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    contador = 0;
    impar = 1;
    
    while(contador <= numero){
        cout << impar;
        impar = impar + 2;
        contador++;
    }

    system("pause");
    return 0;
}