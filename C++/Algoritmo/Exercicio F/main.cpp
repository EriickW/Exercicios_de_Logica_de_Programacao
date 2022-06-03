#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    string nome;
    float nota1,nota2,media;


    cout<<"\nEsse é um programa que soma mostra as medias de um aluno\n";
    system("pause");
    system("cls");
    cout<<"Qual é o primeiro nome do aluno: ";
    cin>>nome;
    system("cls");
    cout<<"Primeira nota: ";
    cin>>nota1;
    cout<<"Segunda nota: ";
    cin>>nota2;
    media=(nota1+nota2)/2;
    cout<<"\n A media desse aluno foi de: "<<media;

return 0;
}
