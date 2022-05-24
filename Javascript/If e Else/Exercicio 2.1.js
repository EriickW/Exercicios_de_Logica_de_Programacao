//Faça um programa que leia 2 números, some-os e exiba uma mensagem com o resultado apenas se o resultado for maior que 100.
let n1 = 10;
let n2 = 20;
console.log(n1)
console.log(n2)
let soma = n1+n2;
//Usando a crase é possivel usar o template string
console.log(`A soma entre ${n1} e ${n2} é ${soma}`)
 if(soma>100){
    console.log("A soma destes números é maior que 100" )
 }else{
     console.log("A soma destes números não é maior que 100")
 }