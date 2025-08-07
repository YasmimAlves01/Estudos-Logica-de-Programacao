// Aula com primeiro uso de if e else em c++

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

    int numero1, numero2;

    numero1 = 20;

    if(numero1 > 50){
        cout << "O numero e maior que 50\n";
    }else{
        cout << "O numero nao e maior que 50\n";
    }

    numero2 = 10;

    if(numero1 > numero2){
        cout << "O numero 1 e maior que o numero 2\n";
    }else{
        cout << "o numero 1 nao e maior que o numero 2\n";
    }

    string fruta;

    fruta = "Maça";

    if(fruta == "Maça"){
        cout << "A fruta e Maca\n";
    }else{
        cout << "A fruta nao e maca\n";
    }

    string fruta2;

    fruta2 = "Laranja";

    if(fruta2 == "Maça"){
        cout << "A fruta e Maca\n";
    }else{
        cout << "A fruta nao e maca\n";
    }

    system("pause");
    return 0;
}
