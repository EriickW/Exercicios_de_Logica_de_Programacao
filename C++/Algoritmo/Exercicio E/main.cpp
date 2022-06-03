#include <iostream>

using namespace std;

int main(){

    int num1,ant,suc;

    cout<<"\n Digite um numero para mostrarmos a voce o seucessor e o antecessor: ";
    cin>>num1;

    ant=num1;
    suc=num1;

    cout<<"/n O numero escolhido foi "<<num1<<"\n";
    cout<< "Seu antecessor é "<<--ant<<"\n";
    cout<< "Seu sucessor é "<< ++suc<<"\n";

return 0;
}
