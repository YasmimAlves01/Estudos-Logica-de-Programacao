// Aula sobre diferentes usos do system durante um programa

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

    // abre o notepad
    system("notepad");

    // abre o paint
    system("mspaint");

    // cria uma pasta dentro do diretorio que você esta executando o programa
    system("mkdir pastaSystem");

    // cria varias pastas graças a separação
    system("mkdir pasta System");

    // limpa o cmd utilizado
    system("cls");

    // para conferir a tabela de cores do cmd
    system("color/?");

    // muda a cor do cmd, primeiro o fundo dps a letra
    system("color 1F");

    // mostra o ping do site colocado
    system("ping www.google.com.br");

    // abre varias guias e reinicia o computador dentro de 10 segundos apos a abertuda de todasa as guias
    // system("start https://www.hopihari.com && start https://www.etec.sp.gov.br && start https://www.google.com && shutdown /r /t 10");



    // pausa o programa e espera uma interação do usuario para não fechar o programa
    system("pause");
    return 0;
}
