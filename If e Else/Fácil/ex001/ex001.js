//  Faça um programa que peça dois números e verifique (usando if e else) e imprima o maior deles
  
let n1 = parseInt(prompt("Digite um numero"));
let n2 = parseInt(prompt("Digite um numero"));
if(n1<n2){
    alert("O número "+ n1 + " é menor que "+n2+ " !" )
}else{
    alert("O número "+ n1 +" é maior que "+ n2+" !")
}