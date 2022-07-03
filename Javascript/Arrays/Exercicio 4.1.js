//Faça um programa que leia um vetor numérico de 10 posições. Depois, ordene o vetor em ordem crescente e apresente os elementos ordenados.
  
let numbers = [10,30,5,7,50,20,2,4,6,60],
    numbersLength = numbers.length,
    i = 0,
    b = 0;


for(i;i < 10;i++){

    for(b=i+1;b <10;b++){
      if(numbers[i]>numbers[b]){
      let reset = numbers[b]
      numbers[b] = numbers[i]
      numbers[i] = reset
    }

  }
 
}
console.log(numbers)