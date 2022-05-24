#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    //C) Crie um programa que leia (ou apenas coloque-o em uma variável) o nome e o salário de um funcionário, mostrando no final uma mensagem.

    float salario;
    string nome,mes;
    char opc;

    inicio:

    cout << "\nDigite seu primeiro nome: ";
    cin >> nome;

    cout << "Digite seu salario: ";
    cin >> salario;

    cout << "Digite o mes atual: ";
    cin >> mes;

    cout << "O funcionario "<<nome<<" recebeu "<<salario<< " no mes "<<mes<<"\n";

    cout << "Essas informacoes estão corretas? DIGITE [S] ou [N]: \n";
    cin >> opc;
    switch(opc){
        case 's':
        case 'S':
            cout << "\nSua resposta foi guardada muito obrigado ;)\n";
            break;
        case 'n':
        case 'N':
            Escolha:
        cout << "\n Deseja refazer? DIGITE [S] ou [N]: ";
        cin >> opc;
            switch(opc){
                case 'n':
                case 'N':
                    cout<<"Estamos encerrando.....";
                    break;
                case 's':
                case 'S':
                    system("cls");
                    goto inicio;
        default:
            cout << "Alternativa invalida";
            goto Escolha;


    }





return 0;
}}
