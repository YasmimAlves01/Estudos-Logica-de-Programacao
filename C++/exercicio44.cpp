#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

// feito em função
void contacontas(int numero, int contador=1);

int main(){

    // função com While - maneira "tradicional"
    int contaconta;
    contaconta = 1;

    while(contaconta < 11){
        cout << "Sua contaconta: " << contaconta << endl;
        contaconta++;
    }

    cout << "\nContaConta" << endl;
    contacontas(10);

    system("pause");
    return 0;
}

void contacontas(int numero, int contador){

    cout << "Sua contaconta: " << contador << endl;

    if(numero > contador){
       contacontas(numero, ++contador); 
    }

}


