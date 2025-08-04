// exercicio que cria variaveis constantes (que tem valor fixo) e as mostra na tela dentro da função int main()

// variaveis constantes são criadas fora da função int main() e o valor delas fica fixo, podendo ser chamada em qualquer parte do programa

#include <iostream>
#include <locale.h>


using namespace std;

// declarando do lado de fora ela vira um valor fixo e pode ser usada em todo o programa
#define nome cout << "Meu nome é Ferdinandinho, sou aluno do curso de logica de programação, modulo C++ \n";
#define pi 3.14159

int main(){

    //trata os acentos
    setlocale(LC_ALL, "Portuguese");

    nome;

    cout<< "O valor do PI é " << pi << "\n\n";

    system("pause");
    return 0;
}
