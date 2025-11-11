#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

void mensagemInicial();
int somadois(int number1, int number2);
int somatres(int number1, int number2, int number3);

int main(){

    //trata os acentos
    setlocale(LC_ALL, "Portuguese");
    int n1,n2,n3,soma;
    
    mensagemInicial();


    cout<<"Digite os numeros que deseja somar\n";

    cout << "Number 1: \n";
    cin>> n1;

    cout << "Number 2: \n";
    cin>> n2;
    
    cout << "Number 3: \n";
    cin>> n3;

    soma = somadois(n1,n2);
    cout << "A soma dos dois primeiro numeros é: " << soma << endl;
 
    soma = somatres(n1,n2,n3);
    cout << "A soma dos três numeros é: "<< soma << endl;

    system("pause");
    return 0;
}

void mensagemInicial(){
    cout << "Bem-vindo ao contadinho" << endl;
}

int somatres(int number1, int number2, int number3){
   return number1 + number2 + number3;
}

int somadois(int number1, int number2){
    return number1 + number2;
}