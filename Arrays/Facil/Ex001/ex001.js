//Declare um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.


let numeros = [0,1,2,3,4,5,6,7,8,9,10,11,12];
let x = parseInt(prompt("Digite um numero de 1 a 12"));
let y = parseInt(prompt("Digite outro numero de 1 a 12"));
let soma = numeros[x] + numeros[y];
alert("A soma entre o numero " + x + " e o " + y + " é igual a "+ soma )

