// Aula sobre como alterar o valor das variaveis de possitivo para negativo e vice e versa

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
    
    int numero;

    // Primeira maneira de inverter valor de variavel

    numero = 10;

    cout << "Numero: " << numero << "\n";

    numero = numero * -1;

    cout << "Numero: " << numero << "\n";

    // Segunda maneira de inverter valor de variavel

    numero = 20;

    cout << "Numero: " << numero << "\n";
    cout << "Numero: " << -numero << "\n";

    // Terceira maneira de inverter valor de variavel 

    numero = 30;

    cout << "Numero: " << numero << "\n";

    numero =- numero;

    cout << "Numero: " << numero << "\n";

    system("pause");
    return 0;
}