//Faça um programa que peça dois números e verifique (usando if e else) e imprima o maior deles

let num1 = 8,
    num2 = "a",
    testNum1 = isNaN(num1),
    testNum2 = isNaN(num2);

if(testNum1 == false && testNum2 == false){
    if(num1 > num2){
    console.log(`O primeiro número é maior que o segundo`)
  }else if(num1 < num2){
    console.log(`O segundo número é maior que o primeiro`)
  }else if(num1 == num2){
    console.log(`O dois numero são iguais`)
  }
}else if (testNum1 == true){
  console.log("O primeiro número é invalido");
}else if (testNum2 == true ){
  console.log("O segundo número é invalido");
}