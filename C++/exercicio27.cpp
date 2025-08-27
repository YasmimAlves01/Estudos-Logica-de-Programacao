// Usuario onde o usuario digita uma letra e o programa confere se é vogal ou cosoante e se o usuario deseja continuar

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

    char alfabeto;
    string decisao;

    cout << "Bem-vindo ao alfabetizando" << endl;

    retorna: 

    cout << "Por favor digite uma letra do alfabeto e irei adivinhar se é vogal ou consoante\n";

    cin >> alfabeto;

    if (alfabeto == 'a' || alfabeto == 'e' || alfabeto == 'i' || alfabeto == 'o' || alfabeto == 'u') {
        cout << "A letra digitada é uma vogal \n";
        cout << "Deseja digitar outra? digite S para sim e N para nao \n";
        cin >> decisao;
        if (decisao == "S"){
            cout << "tudo bem, vamo reiniciar";
            goto retorna;
        }else{
            cout << "Tudo bem, programa finalizado!";
            system("pause");
        }
    }else{
        cout << "A letra digitada é uma consoante\n";
        cout << "Deseja digitar outra? digite S para sim e N para nao \n";
        cin >> decisao;
        if (decisao == "S"){
            cout << "tudo bem, vamo reiniciar";
            goto retorna;
        }else{
            cout << "Tudo bem, programa finalizado!";
            system("pause");
        }
    }

    system("pause");
    return 0;
}
