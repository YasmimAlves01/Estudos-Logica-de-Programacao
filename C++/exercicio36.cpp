// Programa que pede para o ususario digitar um numero e só para de rodar o loop quando o numero digitado for negativo, enquanto não for continuara rodando. Apos acabar de rodar o loop aparece quantas vezes um numero dentro de um determinado espaço foi digitado


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

    int numeroDigite, 
    i=0, 
    i2=0, 
    i3=0, 
    i4=0;

    // é usada para criar um laço infinito. Em outras palavras, significa que o loop continuará sendo executado até que haja uma instrução para interrompê-lo, geralmente um break
    while(true){
        cout << "Por favor digite um numero inteiro entre o e 40: ";
        cin >> numeroDigite;

        if(numeroDigite < 0){
            cout << "Você digitou um numero negativo" << endl;
            break;
        }
        else if( numeroDigite <= 10){
            i++;
        }
        else if(numeroDigite <=20){
            i2++;
        }
        else if( numeroDigite <= 30){
            i3++;
        }
        else if( numeroDigite  <= 40){
            i4++;
        }
    }

    cout << "Você digitou " << i4 << " numeros entre 31 e 40" << endl;

    cout << "Você digitou " << i3 << " numeros entre 21 e 30" << endl;

    cout << "Você digitou " << i2 << " numeros entre 11 e 20" << endl;

    cout << "Você digitou " << i << " numeros entre 0 e 10" << endl;
 

    system("pause");
    return 0;
}
