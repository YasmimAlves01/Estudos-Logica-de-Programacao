#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

// feito em função
void maiorMenor();
int numero1, numero2, resultado;

int main(){

    cout << "Digite o primeiro numero: \n";
    cin >> numero1;

    cout << "Digite o segundo numero: \n";
    cin >> numero2;

    maiorMenor();


    system("pause");
    return 0;
}

void maiorMenor(){
    if(numero1 < numero2){
       cout << "O menor numero é: " << numero1;
    }else{
        cout << "O menor numero é: " << numero2;
    }
}

