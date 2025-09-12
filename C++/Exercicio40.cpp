// primeira aula utilizando array e vector e apresentando ela de 3 maneiras diferentes

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

    string comodaGavetas[4];
    int posicao;

    comodaGavetas[0] = "Camisas";
    comodaGavetas[1] = "Calças";
    comodaGavetas[2] = "Jaquetas";
    comodaGavetas[3] = "Meias";

    // maneira de uso 1º
    cout << "Gaveta 1: "<< comodaGavetas[0] << "\n";
    cout << "Gaveta 2: " << comodaGavetas[1] << "\n";

    // maneira de uso 2º
    for(posicao = 0; posicao < 4; posicao++){
        cout << posicao << " | " << comodaGavetas[posicao];
    }

    // maneira de uso 3º
    int tamanho = 4;
    int posicao2, contador;
    string alfabeto[4] = {"A", "B", "C", "D"};

    for(posicao2 = 0, contador = 1; posicao2 < tamanho; posicao2++, contador++){
        cout << "letra posicao "<< contador << " : " << alfabeto[posicao2] << "\n";
    }


   

    system("pause");
    return 0;
}
