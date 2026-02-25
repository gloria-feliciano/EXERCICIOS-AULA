/*
exercio 1 - Olá mundo
objetivo: imprimir uma mensagem no console
*/
console.log("Olá, TypeScript!");
/*exercicio 2 - variáveis simples
declare nome, idade e cidade, e imprima uma frase
*/
var nome = "Eduardo";
var idade = 38;
var cidade = "São Paulo";
console.log("Meu nome \u00E9 ".concat(nome, ", tenho ").concat(idade, " anos e moro em ").concat(cidade, "."));
/* exercício 3 - par ou ímpar */
var numero = 17;
if (numero % 2 === 0) {
    console.log("".concat(numero, " \u00E9 par."));
}
else {
    console.log("".concat(numero, " \u00E9 \u00EDmpar."));
}
/* exercício 4 - maioridade*/
var idadePessoa = 16;
if (idadePessoa >= 18) {
    console.log("Maior de idade");
}
else {
    console.log("Menor de idade");
}
/*exercicio 5 - média de notas*/
var n1 = 7;
var n2 = 5;
var n3 = 9;
var media = (n1 + n2 + n3) / 3;
if (media >= 6) {
    console.log("Aprovado");
}
else {
    console.log("Reprovado");
}
/* exercício 6 - aprovado com faltas */
var materia = "Matemática";
var nota = 8;
var faltas = 12;
if (nota >= 7 && faltas <= 10) {
    console.log("Aprovado em ".concat(materia, " (nota: ").concat(nota, ", faltas: ").concat(faltas, ")"));
}
else {
    console.log("Reprovado em ".concat(materia, " (nota: ").concat(nota, ", faltas: ").concat(faltas, ")"));
}
/*exercício 7 -tabuada (mostra a tabuada de 1 a 10 de um número)*/
var base = 7;
for (var i = 1; i <= 10; i++) {
    console.log("".concat(base, " x ").concat(i, " = ").concat(base * i));
}
/*exercício 8 - contagem regressiva (de 1 a 10) e exiba uma mensgem no final*/
for (var i = 10; i >= 1; i--) {
    console.log(i);
}
console.log("Lançar foquete!");
/* exercício 9 - função soma
crie uma função que receba dois números e retorne a soma*/
function somar(a, b) {
    return a + b;
}
//chamada da função:
var resultadoSoma = somar(12, 30);
console.log("Soma: ".concat(resultadoSoma));
/* exercício 10 - calculadora simples
crie uma função que receba dois números e uma operação (+, -, *, /)
retorne o resultado */
function calcular(a, b, op) {
    if (op === "+")
        return a + b;
    if (op === "-")
        return a - b;
    if (op === "*")
        return a * b;
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
console.log("10 + 5 = ".concat(calcular(10, 5, "+")));
console.log("10 - 5 = ".concat(calcular(10, 5, "-")));
console.log("10 * 5 = ".concat(calcular(10, 5, "*")));
console.log("10 / 5 = ".concat(calcular(10, 5, "/")));
/** exercício 11 - jurus simples
 * Valor Final = capital + (capital * taxa * tempo)
 * taxa em decimal (5% = 0.05) */
function jurosSimples(capital, taxa, tempo) {
    return capital + (capital * taxa * tempo);
}
// Exemplo:
var capital = 1000;
var taxa = 0.05;
var tempo = 12;
var vfSimples = jurosSimples(capital, taxa, tempo);
console.log("Juros simples -> VF: R$ ".concat(vfSimples.toFixed(2)));
/** exercício 12 - juros compostos
 * Valor Final = capital * (1 + taxa) ^ tempo
 * taxa em decimal (5% = 0.05) */
function jurosCompostos(capital, taxa, tempo) {
    return capital * Math.pow(1 + taxa, tempo);
}
// Exemplo:
var capitalC = 1000;
var taxaC = 0.05;
var tempoC = 12;
var vfCompostos = jurosCompostos(capitalC, taxaC, tempoC);
console.log("Juros compostos -> VF: R$ ".concat(vfCompostos.toFixed(2)));
/** exercício 13 - conversor de temperatura
 * F = C * 1.8 + 32*/
function celsiusParaFahrenheit(celsius) {
    return celsius * 1.8 + 32;
}
// Exemplo:
var c = 25;
var f = celsiusParaFahrenheit(c);
console.log("".concat(c, "\u00B0C equivalem a ").concat(f.toFixed(1), "\u00B0F"));
/*exerxício 14 - sistema de notas
return: a (>=90), b (>=80), c (>=70), d (>=60), f (<60) */
function conceito(nota) {
    if (nota >= 90)
        return "A";
    else if (nota >= 80)
        return "B";
    else if (nota >= 70)
        return "C";
    else if (nota >= 60)
        return "D";
    else
        return "F";
}
// Exemplo:
console.log("Nota 95: Conceito ".concat(conceito(95)));
console.log("Nota 82: Conceito ".concat(conceito(82)));
console.log("Nota 73: Conceito ".concat(conceito(73)));
console.log("Nota 61: Conceito ".concat(conceito(61)));
console.log("Nota 42: Conceito ".concat(conceito(42)));
