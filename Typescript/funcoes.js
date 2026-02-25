/**
 * Exercício 01 – Função de saudação
 * Criar uma função que exibe "Olá, Mundo!".
 */
function saudacao() {
    console.log("Olá, Mundo!");
}
// Chamando a função
saudacao();
/**
 * Exercício 02 – Função com parâmetro
 * Criar uma função que receba um nome e exiba "Olá, <nome>".
 */
function dizerOla(nome) {
    console.log("Ol\u00E1, ".concat(nome, "!"));
}
dizerOla("Eduardo");
dizerOla("Pietro");
/**
 * Exercício 03 – Função com retorno
 * Criar uma função que receba dois números e retorne a soma.
 */
function somar(a, b) {
    return a + b;
}
console.log("Resultado: ".concat(somar(10, 5)));
/**
 * Exercício 04 – Função de subtração
 * Criar uma função que receba dois números e retorne a subtração.
 */
function subtrair(a, b) {
    return a - b;
}
console.log("Resultado: ".concat(subtrair(20, 8)));
/**
 * Exercício 05 – Função de multiplicação
 * Criar uma função que receba dois números e retorne a multiplicação.
 */
function multiplicar(a, b) {
    return a * b;
}
console.log("Resultado: ".concat(multiplicar(6, 7)));
/**
 * Exercício 06 – Função de divisão
 * Criar uma função que receba dois números e retorne a divisão.
 */
function dividir(a, b) {
    if (b === 0) {
        console.log("Erro: divisão por zero");
        return NaN;
    }
    return a / b;
}
console.log("Resultado: ".concat(dividir(20, 4)));
/**
 * Exercício 07 – Função dobro
 * Criar uma função que receba um número e retorne o dobro dele.
 */
function dobro(n) {
    return n * 2;
}
console.log("Dobro de 12 = ".concat(dobro(12)));
/**
 * Exercício 08 – Função par ou ímpar
 * Criar uma função que receba um número e diga se é par ou ímpar.
 */
function parOuImpar(n) {
    if (n % 2 === 0) {
        return "Par";
    }
    else {
        return "Ímpar";
    }
}
console.log("7 \u00E9 ".concat(parOuImpar(7)));
/**
 * Exercício 09 – Função média de notas
 * Criar uma função que receba 3 notas e retorne a média.
 */
function media(n1, n2, n3) {
    return (n1 + n2 + n3) / 3;
}
console.log("M\u00E9dia = ".concat(media(7, 8, 6).toFixed(2)));
/**
 * Exercício 10 – Função aprovação
 * Criar uma função que receba nota e faltas e retorne "Aprovado" ou "Reprovado".
 */
function verificarAprovacao(nota, faltas) {
    if (nota >= 7 && faltas <= 10) {
        return "Aprovado";
    }
    else {
        return "Reprovado";
    }
}
console.log(verificarAprovacao(8, 5));
console.log(verificarAprovacao(6, 12));
/**
 * Exercício 11 – Função fatorial
 * Criar uma função que calcule o fatorial de um número.
 * Ex: 5! = 5*4*3*2*1 = 120
 */
function fatorial(n) {
    var resultado = 1;
    for (var i = n; i > 1; i--) {
        resultado *= i;
    }
    return resultado;
}
console.log("Fatorial de 5 = ".concat(fatorial(5)));
/**
 * Exercício 12 – Função juros simples
 * Valor Final = Capital + (Capital * Taxa * Tempo)
 */
function jurosSimples(capital, taxa, tempo) {
    return capital + (capital * taxa * tempo);
}
console.log("VF = R$ ".concat(jurosSimples(1000, 0.05, 12).toFixed(2)));
/**
 * Exercício 13 – Conversão Celsius → Fahrenheit
 * F = C * 1.8 + 32
 */
function celsiusParaFahrenheit(c) {
    return c * 1.8 + 32;
}
console.log("25\u00B0C = ".concat(celsiusParaFahrenheit(25), "\u00B0F"));
/**
 * Exercício 14 – Função calculadora
 * Criar uma função que recebe dois números e um operador (+, -, *, /).
 */
function calculadora(a, b, op) {
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
    console.log("Operador inválido!");
    return NaN;
}
// Exemplos
console.log(calculadora(10, 5, "+"));
console.log(calculadora(10, 5, "-"));
console.log(calculadora(10, 5, "*"));
console.log(calculadora(10, 5, "/"));
