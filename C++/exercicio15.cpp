// programa que valida um ingresso e fala sua taxa de acordo com o sexo da pessoa
// TOTALMENTE ILUSTRATIVO PARA SOMENTE TESTAR O USO DE IF E ELSE

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

    string nome, sexo;
    int valorEntrada;

    cout << "Bem-vindo ao valida ingresso\n";

    cout << "Por favor digite seu nome: ";
    cin >> nome;

    cout << "Por favor digite seu sexo: ";
    cin >> sexo;

    cout << "Por favor digite o valor do ingresso: ";
    cin >> valorEntrada;



    if(sexo == "Masculino"){
        cout << "Nome: " << nome << endl; 
    
        cout << "Valor do Ingresso: " << valorEntrada << endl;
        valorEntrada = valorEntrada + (valorEntrada * 0.5);
        cout << "Valor do Ingresso com taxa: " << valorEntrada  << endl;

       cout << "Aproveite seu show!\n";

    }else if(sexo == "Feminino"){
        cout << "Nome: " << nome << endl; 
        cout << "Valor do Ingresso: " << valorEntrada << endl;
        valorEntrada = valorEntrada + (valorEntrada * 0.2);
        cout << "Valor do Ingresso com taxa: " << valorEntrada << endl;
       cout << "Aproveite seu show!\n";
    }else{
        cout << "Ops, algo deu errado no processo :( volte outra hora";
    }


    system("pause");
    return 0;
}