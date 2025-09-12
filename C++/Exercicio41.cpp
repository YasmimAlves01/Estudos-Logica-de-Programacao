// Aula Utilizando array bidimensional ou matriz, onde o usuario digita 6 numeros e o mesmos são realocados dentro da matriz

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

    // Array bidimensional
    string matriz[2][3];
    int linha, coluna;
    //matriz/array começam sempre em 0

    cout << "Por favor digite um numero: ";
    string n1,n2,n3,n4,n5,n6;

    cin >> n1;cin >> n2;cin >> n3;cin >> n4;cin >> n5;cin >> n6;

    matriz[0][0] = n1; // indicando qual a poição que o numero ficara
    matriz[0][1] = n2; // indicando qual a poição que o numero ficara
    matriz[0][2] = n3; // indicando qual a poição que o numero ficara
    matriz[1][0] = n4; // indicando qual a poição que o numero ficara
    matriz[1][1] = n5; // indicando qual a poição que o numero ficara
    matriz[1][2] = n6; // indicando qual a poição que o numero ficara

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            cout << matriz[linha][coluna] << " ";
        }
        cout << "\n";
    }

    


    system("pause");
    return 0;
}