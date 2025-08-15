// Treino utilizando a lista de exercicio dada pelo monitor da materia de Estrutura de Dados
// Programa que faz calculo de holerite com o antes e dps dos descontos

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

    double salarioHora, salarioValor, descontos, salarioInterio, IR,INSS, sindicato;

    cout << "Bem-vindo ao Seu Salario do Mes\n";
    cout << "Aqui iremos calcular o seu salario ja com os descontos! \n";

    cout << "Por favor insira quanto voce ganha por hora: \n";
    cin >> salarioValor;

    cout << "Por favor insira quantas horas voce trabalhou esse mes: \n";
    cin >> salarioHora;

    salarioInterio = salarioHora * salarioValor;


    cout<< "Salario bruto: R$"<< salarioInterio << "\n";

    IR = salarioInterio * 0.11;

    cout << "IR (11%): R$" << IR << "\n";

    INSS = salarioInterio * 0.08;

    cout << "INSS (8%): R$"<< INSS << "\n";

    sindicato = salarioInterio * 0.05;

    cout << "Sindicato (5%): R$"<< sindicato << "\n";

    descontos = salarioInterio - (IR + INSS + sindicato);

    cout << "Salario liquido: R$"<< descontos;
   


    system("pause");
    return 0;
}
