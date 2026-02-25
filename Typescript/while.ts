/**
 * Exercício 01 – Contador simples
 * Conte de 1 a 10 usando while.
 */

let i: number = 1;

while (i <= 10) {
  console.log(i);
  i++; // incrementa para não travar o loop
}

/**
 * Exercício 02 – Contagem regressiva
 * Conte de 10 até 1 com while e ao final escreva "FIM".
 */

let n: number = 10;

while (n >= 1) {
  console.log(n);
  n--;
}

console.log("FIM");


/**
 * Exercício 03 – Soma 1..N
 * Some todos os números de 1 até N (N=100).
 */

let N: number = 100;
let soma: number = 0;
let k: number = 1;

while (k <= N) {
  soma += k;
  k++;
}

console.log(`Soma de 1 até ${N} = ${soma}`);


/**
 * Exercício 04 – Tabuada com while
 * Mostre a tabuada de um número base (ex.: 7) de 1 a 10.
 */

let base: number = 7;
let mult: number = 1;

while (mult <= 10) {
  console.log(`${base} x ${mult} = ${base * mult}`);
  mult++;
}


/**
 * Exercício 05 – Pares até 50
 * Imprima apenas números pares de 1 a 50.
 */

let x: number = 1;

while (x <= 50) {
  if (x % 2 === 0) {
    console.log(x);
  }
  x++;
}


/**
 * Exercício 06 – Fatorial
 * Calcule 5! usando while (5*4*3*2*1).
 */

let num: number = 5;
let fat: number = 1;
let c: number = num;

while (c > 1) {
  fat *= c;
  c--;
}

console.log(`${num}! = ${fat}`);


/**
 * Exercício 07 – Fibonacci com while
 * Imprima os 10 primeiros números da sequência.
 */

let a: number = 0;
let b: number = 1;
let termos: number = 10;
let contador: number = 1;

while (contador <= termos) {
  console.log(a);
  let proximo = a + b;
  a = b;
  b = proximo;
  contador++;
}


/**
 * Exercício 08 – Soma de array com while
 * Some os valores de um array.
 */

let valores: number[] = [10, 20, 30, 40, 50];
let idx: number = 0;
let total: number = 0;

while (idx < valores.length) {
  total += valores[idx];
  idx++;
}

console.log(`Total = ${total}`);


/**
 * Exercício 09 – Maior valor do array
 * Percorra o array e encontre o maior elemento.
 */

let nums: number[] = [5, 12, 3, 27, 9, 27, 1];
let iMax: number = 0;
let maior: number = nums[0];

while (iMax < nums.length) {
  if (nums[iMax] > maior) {
    maior = nums[iMax];
  }
  iMax++;
}

console.log(`Maior valor = ${maior}`);


/**
 * Exercício 10 – Busca linear com while
 * Verifique se um valor existe no array; se achar, pare (break).
 */

let lista: string[] = ["sql", "ts", "js", "python", "go"];
let alvo: string = "python";
let pos: number = 0;
let encontrado: boolean = false;

while (pos < lista.length) {
  if (lista[pos] === alvo) {
    encontrado = true;
    break; // interrompe o loop quando encontra
  }
  pos++;
}

console.log(encontrado ? `Encontrado em lista[${pos}]` : "Não encontrado");


/**
 * Exercício 11 – Inverter string
 * Monte uma nova string com os caracteres na ordem inversa.
 */

let texto: string = "TypeScript";
let invertido: string = "";
let p: number = texto.length - 1;

while (p >= 0) {
  invertido += texto[p];
  p--;
}

console.log(`Original: ${texto}`);
console.log(`Invertido: ${invertido}`);


/**
 * Exercício 12 – Palíndromo
 * Verifique se a palavra é igual quando lida ao contrário.
 */

let palavra: string = "radar";
let esq: number = 0;
let dir: number = palavra.length - 1;
let ehPalindromo: boolean = true;

while (esq < dir) {
  if (palavra[esq] !== palavra[dir]) {
    ehPalindromo = false;
    break;
  }
  esq++;
  dir--;
}

console.log(ehPalindromo ? "É palíndromo" : "Não é palíndromo");


/**
 * Exercício 13 – do...while
 * Some números aleatórios de 1 a 10 até ultrapassar 50.
 * (Sem entrada do usuário; apenas demontração de do...while)
 */

let acumulador: number = 0;
let sorteado: number;

do {
  // "Simula" um número entre 1 e 10 (inteiro)
  sorteado = Math.floor(Math.random() * 10) + 1;
  acumulador += sorteado;
  console.log(`Sorteado: ${sorteado} | Acumulado: ${acumulador}`);
} while (acumulador <= 50);

console.log("Limite atingido!");


/**
 * Exercício 14 – continue
 * Liste números de 1 a 20, pulando múltiplos de 3.
 */

let m: number = 1;

while (m <= 20) {
  if (m % 3 === 0) {
    m++;       // importante incrementar antes de continuar
    continue;  // pula o restante e volta ao while
  }
  console.log(m);
  m++;
}