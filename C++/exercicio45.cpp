#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

// feito em função
int contaAte(int numeroConta);

int main(){

    int numeroConta, soma;
    
    cout << "Digite um numero: \n";
    cin >> numeroConta;


    soma = contaAte(numeroConta);

    cout << "A soma é: "<< soma<< endl;


    system("pause");
    return 0;
}

int contaAte(int numeroConta){
    int resultado;

    cout << "A soma do seu numero até chegar nele é: " << numeroConta << endl;

    if(numeroConta == 1){
        return(1);
    }
    else{
        resultado = numeroConta + contaAte(numeroConta -1);

        return(resultado);
    }
}


