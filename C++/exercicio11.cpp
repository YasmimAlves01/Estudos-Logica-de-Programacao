// Exercicio que calcula um salario e seus descontos


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

    double hora, valorH, IR, INSS, Sindicato, salario, descontos;
    
     cout << "Bem-vindo ao calcula salario\n";
     cout << "Por favor digite quanto você ganha por hora";

     cin >> valorH;

     cout << "Por favor digite quantas horas você trabalhou esse mes: ";

     cin >> hora;

     salario = hora * valorH;

     cout << "Salario Bruto: R$ " << salario << "\n";

     IR = salario * 0.11;

     cout << "IR (11%): R$ " << IR << "\n";

     INSS = salario * 0.08;

     cout << "INSS (8%): R$ " << INSS << "\n";

     Sindicato = salario * 0.05;

     cout << "Sindicato (5%): R$ " << Sindicato << "\n";

     descontos = salario - (IR + INSS +  Sindicato);

     cout << " Salario Liquido: R$ " << descontos << "\n";


    system("pause");
    return 0;
}