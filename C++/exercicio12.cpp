// aula sobre a utilização da porcentagem(%) utilizada para devolver o resto de uma divisão na tela


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

 
     int numero, resto;

     numero = 10;

    //  % é utilizado para pegar o resto da divisão
     resto = numero % 2;

     cout << "O resto da divisão é " << resto << "\n";

     //  % é utilizado para pegar o resto da divisão
     resto = numero % 3;

     cout << "O resto da divisão é " << resto << "\n";



    system("pause");
    return 0;
}
