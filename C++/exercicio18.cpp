// Treino utilizando a lista de exercicio dada pelo monitor da materia de Estrutura de Dados
// Programa pega nome e notas de um determinado aluno de todos os bimestre e calcula qual foi a media dele, retornando se ele foi aprovado ou reprovado

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

    int nota1, nota2, nota3, nota4, media;
    string nome;


    cout << "Bem-vindo ao Nota Final \n A aplicação para te ajudar no dia a dia\n";

    cout << "Por favor comece digitando o nome do aluno: ";
    cin >> nome;

    cout << "Por favor digite a nota do Primeiro Bimestre: \n";
    cin >> nota1;

    cout << "Por favor digite a nota do Segundo Bimestre: \n";
    cin >> nota2;

    cout << "Por favor digite a nota do Terceiro Bimestre: \n";
    cin >> nota3;

    cout << "Por favor digite a nota do Quarto Bimestre: \n";
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 6){
        cout << "Parabens, o aluno "<< nome << " foi aprovado com media: " << media << "\n";
    }else{
        cout << "Infelizmente o aluno " << nome << " não foi aprovado, sua media foi de: " << media << "\n";
    }


    system("pause");
    return 0;
}