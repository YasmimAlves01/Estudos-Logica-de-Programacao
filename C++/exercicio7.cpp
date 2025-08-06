// Aula onde mexemos com pré e pos fixados na variavel 


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

    numero = 10;

    cout << "--------- Valor Inicial --------- \n";
    cout << "Numero: " << numero << "\n";

    // multiplica o valor por dois (igual aula 6)
    numero *= 2;

    cout << "Numero: " << numero << "\n";

    // divide o valor por dois (igual aula 6)
    numero /= 2;

    cout << "Numero: " << numero << "\n";

    // POS FIXADO

    // ignora o colocado anterior e esse valor passa a ser o valor da variavel
    numero = 100;

    cout << "--------- POS FIXADO --------- \n";
    cout << "Numero = " << numero << "\n";
    // adicionando depois da variavel, porem não vai mostrar na hora o novo valor depois da adição
    cout << "Numero = " << numero++ << "\n";
    // agora vai mostrar o valor com a adição do outro numero
    cout << "Numero = " << numero << "\n";

    // PRE FIXADO

    numero = 100;

    cout << "--------- PRE FIXADO --------- \n";
    cout << "Numero = " << numero << "\n";
    // adicionando mais uma unidade na variavel e ja mostra
    cout << "Numero = " << ++numero << "\n";
   

    // DIFERENÇA ENTRE PÓS E PRÉ

    // POS FIXADO ELE IMPRIMI PRIMEIRO E DEPOIS SOMA, E POR ISSO É NECESSARIO CHAMAR A VARIAVEL DNV PARA MOSTRAR O VALOR COM A SOMA

    // O PRÉ FIXADO ELE SOMA E DEPOIS IMPRIMI, ANTES DE MOSTRAR A VARIAVEL ELE JA FAZ A SOMA E JA MOSTRA O VALOR DA VARIAVEL COM A SOMA
    

    system("pause");
    return 0;
}