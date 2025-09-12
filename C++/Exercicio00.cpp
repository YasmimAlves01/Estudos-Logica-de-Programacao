#include <iostream>
#include <locale.h>
#include <ctime>
#include <string>

using namespace std;

void menu();
void ficha();


int main(){

    //trata os acentos
    setlocale(LC_ALL, "Portuguese");

    menu();
  
}

void menu(){
    int numeroOpcao = 0;

    while(numeroOpcao != 5){

    
    cout << "Digite a opção que deseja preencher: \n";
    cout << "1 - Preencher Fixa" << endl;
    cout << "2 - sobrenome" << endl;
    cout << "3 - apelido" << endl;
    cout << "4 -  idade" << endl;
    cout << "5 - ano de nascimento" << endl;
    cin >> numeroOpcao;

    switch (numeroOpcao)
    {
        // case = caso
        case 1:
        ficha();
        break;
        // break = para

        case 2:
        break;


        case 3:
        break;
 


        case 4:
        cout << "Você escolheu preencher a idade, preencha abaixo: \n";
       break;


        case 5:
        cout << "Você escolheu preencher o ano de nascimento, preencha abaixo: \n";
        break;

        // default =  outro caso
        default:
            cout << "Nenhuma escolha digitada\n";
        break;

    }
    break;
}
}


void ficha(){

    string nome, sobrenome, andarVisitado, CPF, dataNascimento, horarioEntrada;
    

    cout << "Preencha a Fixa Abaixo: \n";
    cout << "Nome: ";
    cin >> nome;

    cout << "Sobrenome: ";
    cin >> sobrenome;

    cout << "CPF (Apenas digitos): ";
    cin >> CPF;

    cout << "Data de nascimento (DD/MM/AAAA): ";
    cin >> dataNascimento;

    cout << "Andar que vai visitar: ";
    cin >> andarVisitado;

    // Captura o horário atual
    time_t agora = time(0); // tempo atual em segundos
    struct tm* tempoLocal = localtime(&agora); // converte para struct tm

    cout << "Horário de entrada: "
              << tempoLocal->tm_hour << ":"
              << tempoLocal->tm_min << ":"
              << tempoLocal->tm_sec << " em "
              << tempoLocal->tm_mday << "/"
              << tempoLocal->tm_mon + 1 << "/"
              << tempoLocal->tm_year + 1900 << std::endl;


    cout << "Informações Apresentadas: \n";
    cout << "Nome: "<< nome << endl;
    cout << "Sobrenome: "<< sobrenome << endl;
    cout << "CPF: "<< CPF << endl;
    cout << "Data de Nascimento: "<< dataNascimento << endl;
    cout << "Andar que vai visitar: "<< andarVisitado << endl;
    cout << "Horário de entrada: "
              << tempoLocal->tm_hour << ":"
              << tempoLocal->tm_min << ":"
              << tempoLocal->tm_sec << " em "
              << tempoLocal->tm_mday << "/"
              << tempoLocal->tm_mon + 1 << "/"
              << tempoLocal->tm_year + 1900 << std::endl;

    cout << "Por favor confirme se os dados estão corretos (S | N) \n";
    char resposta;
    cin >> resposta;

    if( resposta == 'S' || resposta == 's'){
        cout << "Ficha anexada com sucesso\n";
        
    }
    else{
        cout << "Ficha não anexada\n";
        
    }


}




