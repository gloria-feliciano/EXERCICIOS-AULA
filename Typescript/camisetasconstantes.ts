//declara a constante 'camiseta' com o preço original de 80 reais
const camiseta1: number = 80;

//declara a constante 'desconto' com o valor de 15%
const desconto1: number = 0.15;

//calcula o valor do desconto
const valorDesconto1: number = camiseta1 * desconto1;

//calcula o preço final após o desconto
const precoFinal1: number = camiseta1 - valorDesconto1;

//exibe o preço final no console
console.log("Preço original: R$ ", camiseta1);
console.log("Desconto: R$ ", valorDesconto1);
console.log("Preço final com desconto: R$", precoFinal1);