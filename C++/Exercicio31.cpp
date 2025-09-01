// Programa em que o usuario digita dois numeros e escolhe a operação que será feita com esses numeros

#include <iostream>
#include <locale.h>



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

    int numeroOpcao, numero1, numero2;

    // Menu de opções

    cout << "Bem-vindo ao Calcula selecionada "<< endl;
    cout << "Por favor digite o primeiro numero que vamo utilizar no calculo: \n";
    cin >> numero1;

    cout << "Por favor digite o segundo numero que vamos utilizar no calculo: \n";
    cin >> numero2;

    cout << "Por favor digite o tipo de operação: \n";
    cout << "1 - Soma" << endl;
    cout << "2 - Substração" << endl;
    cout << "3 - Multiplicação" << endl;
    cout << "4 - Divisão" << endl;
    cin >> numeroOpcao;


    switch (numeroOpcao)
    {
        // case = caso
        case 1:
        cout << "A soma de "<< numero1 << " + " << numero2 << " = "<< numero1 + numero2;

        // break = para
        break;

        case 2:
        cout << "A subtração de "<< numero1 << " + " << numero2 << " = "<< numero1 - numero2;

        break;

        case 3:
        cout << "A multiplicação de "<< numero1 << " + " << numero2 << " = "<< numero1 * numero2;

        break;

        case 4:
        cout << "A divisão de "<< numero1 << " + " << numero2 << " = "<< numero1 / numero2;
        break;

        // default =  outro caso
        default:
            cout << "Nenhuma escolha digitada\n";
        break;

    }


    system("pause");
    return 0;
}

