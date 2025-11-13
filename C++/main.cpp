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
    
    int numero1;

    numero1 = 0;

    cout << numero1 << "\n";

    cout << "Por favor agora digite um numero: \n";

    cin >> numero1;

    cout << "numero escolhido: " << numero1 << "\n";
    cout << "";

    // somando um na variavel
    numero1 = numero1 + 1;

    cout << "numero escolhido somado com 1: " << numero1 << "\n";

    // reconhece que assim tambem é somar mais um na variavel
    numero1++;

    cout << "numero escolhido somado com mais 1: " << numero1 << "\n";

    // reconhece que assim tambem é subtrair um numero da variavel
    numero1--;

    cout << "numero escolhido subtraindo 1: " << numero1 << "\n";

    // reconhece que assim tambem é subtrair um numero da variavel
    numero1 -= 1;

    cout << "numero escolhido subtraindo mais 1: " << numero1 << "\n";

    // reconhece que assim tambem é subtrair um numero da variavel
    numero1 = numero1 - 1;

    cout << "numero escolhido subtraindo mais 1: " << numero1 << "\n";


    // reconhece que assim tambem é somar um numero na variavel
    numero1 += 1;

    cout << "numero escolhido somado com 1: " << numero1 << "\n";


    system("pause");
    return 0;
}




// int main()
// {
    
//     int numerosInterios = 3;
//     double numerosComCasasDeci = 9.99;
//     char letra = 'a';
//     string textos = "recebe textos";
//     bool vddFF = false;

//     cout<< numerosInterios << endl;
//     cout<< numerosComCasasDeci << endl;
//     cout<< letra << endl;
//     cout<< textos << endl;
//     cout<< vddFF << endl;

//     return 0;
// }


/*const char* letras = "conteudo" = faz com que o char consiga receber mais que um caracter*/
// int main(int argc, char const * argv[])
// {
//     cout<<"ola mundo da lua\n";
//     /*a função main diz que retorna um interiro, então colocamos o zero como retorno*/
//     return 0;
// }



// #include <iostream>
// #include <locale.h>
// #include <string>


// using namespace std;

// int main(){

//     //trata os acentos
//     setlocale(LC_ALL, "Portuguese");


//     system("pause");
//     return 0;
// }
