// programa que usa if e else junto com a função goto, que é similiar ao continue do C#, que faz o porgrama rodar novamente

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

    int numero;

    

    cout << "Bem-vindo ao adivinhe meu numero, um novo numero toda semana para voce adivinhar!" << endl;

    recomecar:

    cout << "Por favor digite o numero do seu palpite: \n";
    cin >> numero;

    if(numero == 8){
        cout << "Parabens vc acertou o numero!\n";
        cout << "Volte semana que vem para mais!";
    }else if(numero < 8){
        cout<<"Ops, o numero da semana e um pouco maior\n";
        goto recomecar;
    }else if (numero > 8){
        cout << "Ops, o numero da semana e menor que esse!\n";
        goto recomecar;
    }else{
        cout << "O nao, voce digitou algo que nao e valido!\n";
        goto recomecar;
    }


    system("pause");
    return 0;
}