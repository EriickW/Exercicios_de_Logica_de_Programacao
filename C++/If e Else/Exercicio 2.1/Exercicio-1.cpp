#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int num1,num2,soma;

    cout << "\nDigite um numero: ";
    cin >> num1;

    cout << "\nDigite outro numero: ";
    cin >> num2;

    soma = num1+num2;

    cout << " \nA soma entre "<<num1<< " e "<<num2 <<" vale "<<soma<<"\n";

    if (soma >=100){
        cout << "Que sorte a soma desses numeros e maior que 100\n";
    }else if(soma >=50){
        cout << "Uh!! A soma desses numeros e quase 100\n";
    }else{
        cout << "Que triste esse numero nem chegou perto de 100\n";
    }

return 0;
}
