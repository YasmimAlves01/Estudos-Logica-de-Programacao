// Aula sobre como somas, subtrair, dividri e multiplicar um valor na variavel ou adicionar um valor na mesma

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
    
    int numero1;

    numero1 = 0;

    cout << numero1 << "\n";

    cout << "Por favor agora digite um numero: \n";

    cin >> numero1;

    cout << "numero escolhido: " << numero1 << "\n";

    // somando um na variavel
    numero1 = numero1 + 1;

    cout << "numero escolhido somado com 1: " << numero1 << "\n";

    // reconhece que assim tambem é somar mais um na variavel
    numero1++;

    cout << "numero escolhido somado com mais 1: " << numero1 << "\n";

    // reconhece que assim tambem é subtrair um numero da variavel
    numero1--;

    cout << "numero escolhido subtraindo 1: " << numero1 << "\n";

    // reconhece que assim tambem é subtrair um numero da variavel
    numero1 -= 1;

    cout << "numero escolhido subtraindo mais 1: " << numero1 << "\n";

    // reconhece que assim tambem é subtrair um numero da variavel
    numero1 = numero1 - 1;

    cout << "numero escolhido subtraindo mais 1: " << numero1 << "\n";


    // reconhece que assim tambem é somar um numero na variavel
    numero1 += 1;

    cout << "numero escolhido somado com 1: " << numero1 << "\n";


    system("pause");
    return 0;
}
