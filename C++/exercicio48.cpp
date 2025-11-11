#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

// feito em função


int main(){

    // Exemplos que retornam apenas a posição numerica
    enum roupas{meia,camisa,jaqueta,pijama};

    roupas minhaRoupa;

    minhaRoupa = pijama;

    cout << minhaRoupa << endl;

    // ----------------------------

    enum calçados{sandalia=10, chinelo, tenis, salto};

    calçados meusCalçados = chinelo;
    calçados meuCalçado = sandalia;

    cout << meusCalçados << endl;
    cout << meuCalçado << endl;

    system("pause");
    return 0;
}


