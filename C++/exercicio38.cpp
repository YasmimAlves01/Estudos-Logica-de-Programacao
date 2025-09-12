// Exercicio onde o usuario digita um numero e mostramos aquele numero ao quadrado, o loop continua até o usuario digitar zero

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

    int numero, calculo;
    numero = 0;
    
    do{
        cout << "por favor digite um numero: ";
        cin >> numero;
        calculo = numero * numero;
        cout << "O quadrado desse numero é: "<< calculo << endl;
    }while(numero != 0);

    system("pause");
    return 0;
}
