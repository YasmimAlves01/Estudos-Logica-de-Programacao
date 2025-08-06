// Exercicio de criar um algoritimo que solicite o valor da hora trabalhada e quantas horas o usuario trabalhou e assim calcular quanto ele ira receber no mês

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
    
    int horas, valorH, salario;
    
    cout << "Bem vindo ao Salario Simplificado\n";
    cout << "Por favor digite o valor que o senhor ganha por hora: ";
    cin >> valorH;
    cout << "\n";

    cout << "Por favor digite agora quantas horas você trabalhou esse mes";
    cin >> horas;

    salario = horas * valorH;

    cout << "Seu salario esse mes sera de: " << salario << "\n";


    system("pause");
    return 0;
}
