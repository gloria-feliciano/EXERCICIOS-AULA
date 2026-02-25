/*
exercio 1 - Olá mundo
objetivo: imprimir uma mensagem no console
*/

console.log("Olá, TypeScript!");

/*exercicio 2 - variáveis simples
declare nome, idade e cidade, e imprima uma frase
*/

let nome: string = "Eduardo";
let idade: number = 38;
let cidade: string = "São Paulo";

console.log(`Meu nome é ${nome}, tenho ${idade} anos e moro em ${cidade}.`);

/* exercício 3 - par ou ímpar */

let numero: number = 17;

if (numero % 2 === 0) {
  console.log(`${numero} é par.`);
} else {
  console.log(`${numero} é ímpar.`);
}

/* exercício 4 - maioridade*/
let idadePessoa: number = 16;

if (idadePessoa >= 18) {
    console.log("Maior de idade");
} else {
    console.log("Menor de idade");
}

/*exercicio 5 - média de notas*/
let n1: number = 7;
let n2: number = 5;
let n3: number = 9;

let media: number = (n1 + n2 + n3) / 3;

if (media >= 6) {
    console.log("Aprovado");
}   else {   
    console.log("Reprovado");
}

/* exercício 6 - aprovado com faltas */
let materia: string = "Matemática";
let nota: number = 8;
let faltas: number = 12;

if (nota >= 7 && faltas <= 10) {
    console.log(`Aprovado em ${materia} (nota: ${nota}, faltas: ${faltas})`);
} else {
    console.log(`Reprovado em ${materia} (nota: ${nota}, faltas: ${faltas})`);
}

/*exercício 7 -tabuada (mostra a tabuada de 1 a 10 de um número)*/
let base: number = 7;
for (let i = 1; i <= 10; i++) {
    console.log(`${base} x ${i} = ${base * i}`);
}

/*exercício 8 - contagem regressiva (de 1 a 10) e exiba uma mensgem no final*/
for (let i = 10; i >= 1; i--) {
    console.log(i);
}
console.log("Lançar foquete!");

/* exercício 9 - função soma
crie uma função que receba dois números e retorne a soma*/

function somar(a: number, b: number): number {
    return a + b;
}

//chamada da função:
let resultadoSoma = somar(12,30);
console.log(`Soma: ${resultadoSoma}`);

/* exercício 10 - calculadora simples
crie uma função que receba dois números e uma operação (+, -, *, /) 
retorne o resultado */

function calcular(a: number, b: number, op: string): number {
  if (op === "+") return a + b;
  if (op === "-") return a - b;
  if (op === "*") return a * b;
  if (op === "/") {
    if (b === 0) {
      console.log("Erro: divisão por zero.");
      return NaN;
    }
    return a / b;
  }

  console.log("Operação inválida. Use +, -, * ou /.");
  return NaN;
}

// Exemplos:
console.log(`10 + 5 = ${calcular(10, 5, "+")}`);
console.log(`10 - 5 = ${calcular(10, 5, "-")}`);
console.log(`10 * 5 = ${calcular(10, 5, "*")}`);
console.log(`10 / 5 = ${calcular(10, 5, "/")}`);

/** exercício 11 - jurus simples
 * Valor Final = capital + (capital * taxa * tempo)
 * taxa em decimal (5% = 0.05) */

function jurosSimples(capital: number, taxa: number, tempo: number): number {
  return capital + (capital * taxa * tempo);
}

// Exemplo:
let capital = 1000;
let taxa = 0.05;
let tempo = 12;

let vfSimples = jurosSimples(capital, taxa, tempo);
console.log(`Juros simples -> VF: R$ ${vfSimples.toFixed(2)}`);

/** exercício 12 - juros compostos
 * Valor Final = capital * (1 + taxa) ^ tempo
 * taxa em decimal (5% = 0.05) */

function jurosCompostos(capital: number, taxa: number, tempo: number): number {
  return capital * Math.pow(1 + taxa, tempo);
}

// Exemplo:
let capitalC = 1000;
let taxaC = 0.05;
let tempoC = 12;

let vfCompostos = jurosCompostos(capitalC, taxaC, tempoC);
console.log(`Juros compostos -> VF: R$ ${vfCompostos.toFixed(2)}`);

/** exercício 13 - conversor de temperatura
 * F = C * 1.8 + 32*/

function celsiusParaFahrenheit(celsius: number): number {
  return celsius * 1.8 + 32;
}

// Exemplo:
let c = 25;
let f = celsiusParaFahrenheit(c);
console.log(`${c}°C equivalem a ${f.toFixed(1)}°F`);

/*exerxício 14 - sistema de notas
return: a (>=90), b (>=80), c (>=70), d (>=60), f (<60) */

function conceito(nota: number): string {
    if (nota >= 90) return "A";
    else if (nota >= 80) return "B";
    else if (nota >= 70) return "C";
    else if (nota >= 60) return "D";
    else return "F";    
}

// Exemplo:
console.log(`Nota 95: Conceito ${conceito(95)}`);
console.log(`Nota 82: Conceito ${conceito(82)}`);
console.log(`Nota 73: Conceito ${conceito(73)}`);
console.log(`Nota 61: Conceito ${conceito(61)}`);
console.log(`Nota 42: Conceito ${conceito(42)}`);