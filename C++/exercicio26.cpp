// Atividade que pede para o usuario digitar o seu sexo
// Coisas feitas diferentes: perguntar nome e falar pronome do usuario de acordo com o sexo, e caso estja errado pedir para corrigir

#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>

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

    string sexo, nome;
    string pronome, decisao;

    cout << "Por favor digite o seu sexo(F|M): \n";
    cin >> sexo;

    if(sexo == "F" || sexo == "f"){
        cout << "Você é do sexo feminino\n";
        cout << "Qual seu nome? \n";
        cin >> nome;
        cout << "Olá "<< nome << "\n" << "Seus Pronomes são ela e dela? (S|N)\n";
        cin >> decisao;
        if(decisao == "S" || decisao == "s"){
            cout << "Fico feliz que eu tenha acertado\n";
        }else{
            cout << "Perdão por ter errado :(\n";
            cout << "Poderia me falar quais seus pronomes?\n";
            cin >> pronome;
            cout << "Seus pronomes são: "<< pronome;
        }

    }else if (sexo == "M" || sexo == "m"){
        cout << "Você é do sexo masculina\n";
        cout << "Qual seu nome? \n";
        cin >> nome;
        cout << "Olá "<< nome << "Seus Pronomes são ela e dela? (S|N)\n";
        cin >> decisao;
        if(decisao == "S" || decisao == "s"){
            cout << "Fico feliz que eu tenha acertado\n";
        }else{
            cout << "Perdão por ter errado :(\n";
            cout << "Poderia me falar quais seus pronomes?\n";
            cin >> pronome;
            cout << "Seus pronomes são: "<< pronome;
        }
    }else{
        cout << "Ops, não consegui entender";
    }

    system("pause");
    return 0;
}