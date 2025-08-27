// Aula utilizando IF - Operador Ternário
// Outras maneiras de usar o operador ternarrio e outras caracteristicas


#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>

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

    string letra, mensagem;
 
    cout << "Bem-vindo ao Compra Ingresso BTN";
    cout << "Digite uma letra";
    cin >> letra;

    letra=="a" ? mensagem="voce digitou a letra a" : mensagem="perdao, você não digitou a letra a";


    cout << "Letra digitada: " << letra << endl;
    cout << "Resultado: " << mensagem << endl;

    string sexo;
    int preco;

    cout << "Digite o sexo (M/F): ";

    cin >> sexo;

    sexo == "F" ? preco = 35 : preco = 80;

    cout << "O Preço do seu ingresso sem as taxas é de R$"<< preco << endl;

    cout << "-----------------------------------";

    cout << "Digite seu sexo novamente: ";
    cin >> sexo;

    int precinho = 10;

    (sexo == "M") ? precinho++ : precinho -=3;

    cout << "O preco do seu ingresso: " << precinho;

    cout << "Sexo: " << sexo;

    cout<<"___________________________";
    
    (sexo == "M") ?  cout << "Sexo: Masculino: " << preco + 10 : cout << "Sexo: Feminino: " << preco++ << endl;

    system("pause");
    return 0;
}
