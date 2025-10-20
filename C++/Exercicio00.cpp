#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

struct NO {
    string nome;
    string sobrenome;
    string cpf;
    string dataNascimento;
    string andarVisitado;
    int ficha;
    NO* proximo;
};

NO* primeiro = NULL;
NO* ultimo = NULL;

void menu();
void ficha();
void exibir();
void excluir();
void exibirTodas();

int main() {
    setlocale(LC_ALL, "Portuguese");
    menu();
}

void menu(){
    int numeroOpcao = 0;

    while(numeroOpcao != 5){

    
    cout << "Digite a opção que deseja preencher: \n";
    cout << "1 - Preencher Fixa" << endl;
    cout << "2 - Exibir ficha" << endl;
    cout << "3 - Excluir ficha" << endl;
    cout << "4 -  Exibir todas as fichas" << endl;
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
        exibir();
        break;


        case 3:
        excluir();
        break;

        case 4:
        exibirTodas();
       break;


        case 5:
        cout << "Você escolheu preencher o ano de nascimento, preencha abaixo: \n";
        break;

        // default =  outro caso
        default:
            cout << "Nenhuma escolha digitada\n";
        break;

    }
  system("pause");
}
}

void exibirTodas(){
    
}

void excluir(){
    int excluirFicha;
    NO* atual = primeiro;
    NO* anterior = NULL;

    cout << "Digite a ficha que deseja excluir: ";
    cin >> excluirFicha;

    while(atual->ficha != excluirFicha){
        atual = atual->proximo;
    }

    if (anterior == NULL){
        primeiro = atual->proximo;
            if(primeiro == NULL){
                ultimo = NULL;
            }
    }else{
        anterior->proximo = atual->proximo;
        if(atual->proximo == NULL){
            ultimo = anterior;
        }
    }

    free(atual);
    cout << "Ficha excluida";
    
}

void exibir() {
    if (primeiro == NULL) {
        cout << "Não a fichas no sistema\n";
        return;
    }

    cout << "Digite o número da ficha: ";
    int numeroFicha;
    cin >> numeroFicha;

    NO* atual = primeiro;
    while (atual != NULL) {
        if (atual->ficha == numeroFicha) {
            cout << "Ficha encontrada:\n";
            cout << "Número: " << atual->ficha << endl;
            cout << "Nome: " << atual->nome << endl;
            cout << "Sobrenome: " << atual->sobrenome << endl;
            cout << "CPF: " << atual->cpf << endl;
            cout << "Andar Visitado: " << atual->andarVisitado << endl;
            return;
        }
        atual = atual->proximo; // avança para o próximo nó
    }

    cout << "Ficha não encontrada.\n";
}

void ficha(){

    NO* atual = primeiro;
    // NO* anterior = NULL;
    NO* novaFicha = new NO();


    cout<< "Numero da Ficha: \n";
    cin >> novaFicha->ficha;

while(atual != NULL){
    if(atual->ficha == novaFicha->ficha){
        cout << "Ficha ja existente";
        return;
    }
       atual = atual->proximo;
}

    cout << "Preencha a Fixa Abaixo: \n";
    cout << "Nome: ";
    cin >> novaFicha->nome;

    cout << "Sobrenome: ";
    cin >> novaFicha->sobrenome;

    cout << "CPF (Apenas digitos): ";
    cin >> novaFicha->cpf;

    cout << "Data de nascimento (DD/MM/AAAA): ";
    cin >> novaFicha->dataNascimento;

    cout << "Andar que vai visitar: ";
    cin >> novaFicha->andarVisitado;


    cout << "Informações Apresentadas: \n";
    cout << "Nome: "<< novaFicha->nome << endl;
    cout << "Sobrenome: "<< novaFicha->sobrenome << endl;
    cout << "CPF: "<< novaFicha->cpf << endl;
    cout << "Data de Nascimento: "<< novaFicha->dataNascimento << endl;
    cout << "Andar que vai visitar: "<< novaFicha->andarVisitado << endl;


    cout << "Por favor confirme se os dados estão corretos (S | N) \n";
    char resposta;
    cin >> resposta;

    if( resposta == 'S' || resposta == 's'){
        cout << "Ficha anexada com sucesso\n";
        
    }
    else{
        cout << "Ficha não anexada\n";
        return;
    }

    novaFicha->proximo = primeiro;
    primeiro = novaFicha;

}




