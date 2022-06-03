#include <string>
#include <iostream>

using namespace std;

void par_ou_impar(int n1);

int main(){

  par_ou_impar(-6);

  return 0;
}

void par_ou_impar(int n1){
    int s;

    s=n1%2;

  if(s==1 || s==(-1)){
    cout << "Impar";
    }else{
    cout<<"Par";
  }

}
