// Aula utilizando switch, onde mostramos um resultado de acordo com o escolhido pelo usuario

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

    int numeroOpcao;

    // Menu de opções


    cout << "Digite o animal que deseja ver sobre: \n";
    cout << "1 - Cavalo" << endl;
    cout << "2 - Abelha" << endl;
    cout << "3 - Ovelha" << endl;
    cout << "4 - Panda" << endl;
    cout << "5 - Anta" << endl;
    cin >> numeroOpcao;


    switch (numeroOpcao)
    {
        // case = caso
        case 1:
        cout << "O cavalo é um mamífero forte e veloz, domesticado há milhares de anos. Usado para transporte, trabalho e esporte, ele tem grande sensibilidade e memória. Vive em grupos e se comunica com relinchos e movimentos corporais. \n";
        // break = para
        break;

        case 2:
        cout << "Pequena, mas poderosa, a abelha é essencial para a polinização das plantas. Vive em colmeias organizadas, produz mel e cera, e tem uma sociedade com funções bem definidas: rainha, operárias e zangões. Sem elas, muitos ecossistemas colapsariam. \n";
        break;

        case 3:
        cout << "A ovelha é um animal dócil, criado principalmente por sua lã e carne. Vive em rebanhos e tem forte instinto de seguir o grupo. Sua lã é usada há séculos para aquecer pessoas ao redor do mundo.\n";
        break;

        case 4:
        cout << "O panda é um símbolo de fofura e conservação. Originário da China, ele se alimenta quase exclusivamente de bambu. Apesar de ser um urso, tem comportamento tranquilo e está ameaçado de extinção, sendo protegido em reservas especiais.\n";
        break;


        case 5:
        cout << "A anta é o maior mamífero terrestre da América do Sul. Tem corpo robusto, focinho alongado e é excelente nadadora. Vive em florestas e ajuda a espalhar sementes, sendo considerada uma “jardineira” da natureza. \n";
        break;


        // default =  outro caso
        default:
            cout << "Nenhuma escolha digitada\n";
        break;

        return 0;

    }


    system("pause");
    return 0;
}

