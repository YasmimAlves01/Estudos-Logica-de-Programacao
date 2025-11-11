#include <iostream>
#include <locale.h>
#include <string>


using namespace std;



int main(){

    enum alfabeto{A,B,C,D,E,F,G,H,I,J,K};

    int contador;
    for(contador = A; contador <= K; contador++){
        cout << contador << endl;
    }

    system("pause");
    return 0;
}


