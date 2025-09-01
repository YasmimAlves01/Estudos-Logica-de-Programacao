// Programa de marcadinho onde o usuario digita o valor da sua compra, que tipo de cliente ele é e logo apos recebe se tem algum tipo de desconto ou não

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

    int numeroOpcao, valorCompra;

    // Menu de opções

    cout << "Bem-vindo ao Mercado da Bia"<< endl;
    cout << "Por favor digite o valor da sua compra: \n";
    cin >> valorCompra;

    cout << "Por favor digite o  tipo de cliente que você é: \n";
    cout << "1 - Cliente comum" << endl;
    cout << "2 - Funcionario" << endl;
    cout << "3 - Cliente VIP" << endl;
    cin >> numeroOpcao;


    switch (numeroOpcao)
    {
        // case = caso
        case 1:
        cout << "Cliente comum "<< endl;
        cout << "O valor da sua compra é de: "<< valorCompra << endl;
        cout << "O valor com Desconto fica: " << valorCompra << endl;

        // break = para
        break;

        case 2:
        cout << "Funcionario "<< endl;
        cout << "O valor da sua compra é de: "<< valorCompra << endl;
        cout << "O valor com Desconto fica: " << valorCompra - (valorCompra * 0.10) << endl;

        break;

        case 3:
        cout << "Cliente VIP "<< endl;
        cout << "O valor da sua compra é de: "<< valorCompra << endl;
        cout << "O valor com Desconto fica: " << valorCompra - (valorCompra * 0.05) << endl;

        break;

        // default =  outro caso
        default:
            cout << "Nenhuma escolha digitada\n";
        break;

    }


    system("pause");
    return 0;
}
