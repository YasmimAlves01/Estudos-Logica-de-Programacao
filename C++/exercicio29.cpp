// Exercicio de ordem descrecente onde o usuario digita 3 numeors e é retornado a ordem decrecente desses numeros, o usuario consegue reiniciar o programa caso queira

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

    double numero1, numero2, numero3;

    cout << "Bem-vindo ao ordem descrescente\n";
    recomecar:
    cout << "Por favor digite tres numeros\n";
    cout << "Primeiro numero: ";
    cin >> numero1;
    cout << "Segundo numero: ";
    cin >> numero2;
    cout << "Terceiro numero: ";
    cin >> numero3;

    if(numero1 > numero2 && numero2 > numero3){
        cout << "A ordem descrescente é: \n";
        cout << numero1 << " - " << numero2 << " - " << numero3 << "\n"; 
    }
    else if(numero1 > numero3 && numero3 > numero2){
        cout << "A ordem descrescente é: \n";
        cout << numero1 << " - " << numero3 << " - " << numero2 << "\n";
    } 
    else if(numero2 > numero1 && numero1 > numero3){
        cout << "A ordem descrescente é: \n";
        cout << numero2 << " - " << numero1 << " - " << numero3 << "\n";
    } 
    else if(numero2 > numero3 && numero3 > numero1){
        cout << "A ordem descrescente é: \n";
        cout << numero2 << " - " << numero3 << " - " << numero1 << "\n";
    } 
    else if(numero3 > numero1 && numero1 > numero2){
        cout << "A ordem descrescente é: \n";
        cout << numero3 << " - " << numero1 << " - " << numero2 << "\n";
    } 
    else if(numero3 > numero2 && numero2 > numero1){
        cout << "A ordem descrescente é: \n";
        cout << numero3 << " - " << numero2 << " - " << numero1 << "\n";
    } 
    else{
        cout << "Os numeros digitados são iguais\n";
    }


    cout << "Deseja reiniciar o programa? (S|N)";
    char decisao;
    cin >> decisao;
    if(decisao == 'S'){
        cout << "Que legal, vamos recomeçar então\n";
        goto recomecar;
    }else{
        cout << "Poxa :( tudo bem, o progrma ira finalizar";
        system("pause");
    }


    system("pause");
    return 0;
}

