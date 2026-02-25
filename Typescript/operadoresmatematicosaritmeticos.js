/** exemplo 1: operadores aritméticos básicos
    * Operadores Matemáticos Aritméticos
    - Soma (+): Adiciona dois valores.
   - Subtração (-): Subtrai um valor de outro.
   - Multiplicação (*): Multiplica dois valores.
   - Divisão (/): Divide um valor pelo outro.
   - Módulo (%): Retorna o resto da divisão.
   - Exponenciação (**): Eleva um número a uma potência.
 */
var a = 10;
var b = 5;
console.log("Soma:", a + b); // adição
console.log("Subtração:", a - b); // subtração
console.log("Multiplicação:", a * b); // multiplicação
console.log("Divisão:", a / b); // divisão
console.log("Módulo:", a % b); // módulo
console.log("Exponenciação:", Math.pow(a, b)); // exponenciação
/** exemplo 2 : operadores de incremento e decremeento
  - Incremento (++): Aumenta o valor de uma variável em 1.
   - Decremento (--): Diminui o valor de uma variável em 1.
 */
var contador = 0;
contador++; // incremento (contador + 1)
console.log("Incremento:", contador);
contador--; // Decremento ( contador - 1)
console.log("Decremento:", contador);
/** exemplo 3: operadores de atruibuição
   - Atribuição Simples (=): Define um valor para a variável.
   - Atribuição com soma (+=): Adiciona um valor à variável e armazena o resultado.
   - Atribuição com subtração (-=): Subtrai um valor da variável e armazena o resultado.
   - Atribuição com multiplicação (*=): Multiplica a variável por um valor e armazena o resultado.
   - Atribuição com divisão (/=): Divide a variável por um valor e armazena o resultado.
   - Atribuição com módulo (%=): Calcula o resto da divisão da variável por um valor e armazena o resultado.

 */
var x = 20;
x += 10; // Equivalente a x = x + 10
console.log("Atribuição de Soma:", x);
x -= 5; // Equivalente a x = x - 5
console.log("Atribuição de Subtração:", x);
x *= 2; // Equivalente a x = x * 2
console.log("Atribuição de Multiplicação:", x);
x /= 4; // Equivalente a x = x / 4
console.log("Atribuição de Divisão:", x);
x %= 3; // Equivalente a x = x % 3
console.log("Atribuição de Módulo:", x);
/** exemplo 4: procedência dos operadores
 A procedência define a ordem em que as operações são executdas
*/
var resultado = 10 + 5 * 2;
console.log("Precedência Padrão:", resultado);
resultado = (10 + 5) * 2;
console.log("Uso de Parênteses:", resultado);
// exemplo 5: operadore matemáticos em funções
function calcularQuadrado(num) {
    return Math.pow(num, 2); // Exponenciação
}
console.log("Quadrado de 4:", calcularQuadrado(4));
//exemplo 6: operador de módulo
function ehParOuImpar(num) {
    return num % 2 === 0 ? "Par" : "Ímpar";
}
//exemplo 7: função matemática
function calcularFatorial(n) {
    if (n === 0 || n === 1) {
        return 1;
    }
    return n * calcularFatorial(n - 1);
}
console.log("Fatorial de 5:", calcularFatorial(5));
console.log("Fatorial de 7:", calcularFatorial(7));
