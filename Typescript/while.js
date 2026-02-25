/**
 * Exercício 01 – Contador simples
 * Conte de 1 a 10 usando while.
 */
var i = 1;
while (i <= 10) {
    console.log(i);
    i++; // incrementa para não travar o loop
}
/**
 * Exercício 02 – Contagem regressiva
 * Conte de 10 até 1 com while e ao final escreva "FIM".
 */
var n = 10;
while (n >= 1) {
    console.log(n);
    n--;
}
console.log("FIM");
/**
 * Exercício 03 – Soma 1..N
 * Some todos os números de 1 até N (N=100).
 */
var N = 100;
var soma = 0;
var k = 1;
while (k <= N) {
    soma += k;
    k++;
}
console.log("Soma de 1 at\u00E9 ".concat(N, " = ").concat(soma));
/**
 * Exercício 04 – Tabuada com while
 * Mostre a tabuada de um número base (ex.: 7) de 1 a 10.
 */
var base = 7;
var mult = 1;
while (mult <= 10) {
    console.log("".concat(base, " x ").concat(mult, " = ").concat(base * mult));
    mult++;
}
/**
 * Exercício 05 – Pares até 50
 * Imprima apenas números pares de 1 a 50.
 */
var x = 1;
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
var num = 5;
var fat = 1;
var c = num;
while (c > 1) {
    fat *= c;
    c--;
}
console.log("".concat(num, "! = ").concat(fat));
/**
 * Exercício 07 – Fibonacci com while
 * Imprima os 10 primeiros números da sequência.
 */
var a = 0;
var b = 1;
var termos = 10;
var contador = 1;
while (contador <= termos) {
    console.log(a);
    var proximo = a + b;
    a = b;
    b = proximo;
    contador++;
}
/**
 * Exercício 08 – Soma de array com while
 * Some os valores de um array.
 */
var valores = [10, 20, 30, 40, 50];
var idx = 0;
var total = 0;
while (idx < valores.length) {
    total += valores[idx];
    idx++;
}
console.log("Total = ".concat(total));
/**
 * Exercício 09 – Maior valor do array
 * Percorra o array e encontre o maior elemento.
 */
var nums = [5, 12, 3, 27, 9, 27, 1];
var iMax = 0;
var maior = nums[0];
while (iMax < nums.length) {
    if (nums[iMax] > maior) {
        maior = nums[iMax];
    }
    iMax++;
}
console.log("Maior valor = ".concat(maior));
/**
 * Exercício 10 – Busca linear com while
 * Verifique se um valor existe no array; se achar, pare (break).
 */
var lista = ["sql", "ts", "js", "python", "go"];
var alvo = "python";
var pos = 0;
var encontrado = false;
while (pos < lista.length) {
    if (lista[pos] === alvo) {
        encontrado = true;
        break; // interrompe o loop quando encontra
    }
    pos++;
}
console.log(encontrado ? "Encontrado em lista[".concat(pos, "]") : "Não encontrado");
/**
 * Exercício 11 – Inverter string
 * Monte uma nova string com os caracteres na ordem inversa.
 */
var texto = "TypeScript";
var invertido = "";
var p = texto.length - 1;
while (p >= 0) {
    invertido += texto[p];
    p--;
}
console.log("Original: ".concat(texto));
console.log("Invertido: ".concat(invertido));
/**
 * Exercício 12 – Palíndromo
 * Verifique se a palavra é igual quando lida ao contrário.
 */
var palavra = "radar";
var esq = 0;
var dir = palavra.length - 1;
var ehPalindromo = true;
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
var acumulador = 0;
var sorteado;
do {
    // "Simula" um número entre 1 e 10 (inteiro)
    sorteado = Math.floor(Math.random() * 10) + 1;
    acumulador += sorteado;
    console.log("Sorteado: ".concat(sorteado, " | Acumulado: ").concat(acumulador));
} while (acumulador <= 50);
console.log("Limite atingido!");
/**
 * Exercício 14 – continue
 * Liste números de 1 a 20, pulando múltiplos de 3.
 */
var m = 1;
while (m <= 20) {
    if (m % 3 === 0) {
        m++; // importante incrementar antes de continuar
        continue; // pula o restante e volta ao while
    }
    console.log(m);
    m++;
}
