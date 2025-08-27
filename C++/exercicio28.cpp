// exercicio onde o usuario digita três numeros e mostra o menor e o maior dentre os numeros digitados

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

    recomecar:
    cout << "Bem-vindo ao numeral basic" << endl;

    cout << "Por favor digite o primeiro numero: ";
    cin >> numero1;

    cout << "Por favor digite o segundo numero: ";
    cin >> numero2;

    cout << "Por favor digite o terceiro numero: ";
    cin >> numero3;

    if(numero1 >= numero2 && numero1 >= numero3){
        cout << "O maior numero digitado foi: " << numero1 << endl;
    }
    else if(numero2 >= numero1 && numero2 >= numero3){
        cout << "O maior numero digitado foi: " << numero2 << endl;
    }
    else if(numero3 >= numero1 && numero3 >= numero2){
        cout << "O maior numero digitado foi: " << numero3 << endl;
    }
    
    if (numero1 <= numero2 && numero1 <= numero3){
        cout << "O menor numero digitado foi: " << numero1 << endl;
    }
    else if(numero2 <= numero1 && numero2 <= numero3){
        cout << "O menor numero digitado foi: " << numero2 << endl;
    }
    else if(numero3 <= numero1 && numero3 <= numero2){
        cout << "O menor numero digitado foi: " << numero3 << endl;
    }

    cout << "Deseja reiniciar o programa?(S|N)\n";
    char decisao;
    cin >> decisao; 
    if(decisao == 'S'){
        cout << "Vamos retornar o programa então!";
        goto recomecar;
    }else{
        cout << "Muito obrigado por usar o numeral basic";
        system("pause");
    }

    system("pause");
    return 0;
}