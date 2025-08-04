// programa que calcula a media de 4 notas que são inseridas pelo proprio usuario.
// O programa utiliza de 4 variaveis, sendo 2 globais e 3 locais

#include <iostream>
#include <locale.h>


using namespace std;
//VG = variavel Global - pode ser chamada dentro do programa em qualquer lugar e seu valor pode ser alterado
double nota1VG, nota2VG;

int main(){

    //trata os acentos
    setlocale(LC_ALL, "Portuguese");
    // VL = variavel local - acessamos apenas dentro da nossa função
    double nota3VL, nota4VL, media;

    cout << "Bem vindo ao calcula a media, o programa feito para auxiliar professores \n";

    cout << "Por favor digite as notas \n";


    cout << "Nota 1:";
    cin >> nota1VG;

    cout << "Nota 2:";
    cin >> nota2VG;

    cout << "Nota 3:";
    cin >> nota3VL;

    cout << "Nota 4:";
    cin >> nota4VL;

    media = (nota1VG + nota2VG + nota3VL + nota4VL) / 4;

    cout << "A media das notas são: " << media << "\n";


    system("pause");
    return 0;
}



// segunda versão

// int main(){


//     setlocale(LC_ALL, "Portuguese");

//     double nota3VL, nota4VL, mediaVL;
//     string nomeVG;

//     cout << "Bem vindo ao calcula a media, o programa feito para auxiliar professores \n\n";

//     cout << "Por favor digite o nome do aluno" << endl;

    //{você consegue colocar mais de um nome (nome composto) mas precisa colocar o #include <string> para que isso funcionae}
//     getline(cin, nomeVG);

//     cout << "Por favor digite as notas" << endl;


//     cout << "Nota 1:";
//     cin >> nota1VG;

//     cout << "Nota 2:";
//     cin >> nota2VG;

//     cout << "Nota 3:";
//     cin >> nota3VL;

//     cout << "Nota 4:";
//     cin >> nota4VL;

//     mediaVL = (nota1VG + nota2VG + nota3VL + nota4VL) / 4;

//     cout << "A media das notas do aluno "<< nomeVG << "são:" << mediaVL << "\n";


//     system("pause");
//     return 0;
// }