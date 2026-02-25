/*Crie um algoritmo que irá calcular o valor total a ser pago na compra de combustível levando em consideração que:

alcool
acima de de 20 litros = 3% de desconto por litro
acima de 40 litros = 5% de desconto por litro

gasolina
acima de 15 litros = 3% de desconto por litro
acima de 35 litros = 6% de desconto por litro*/

#include <stdio.h> // Importa funcionalidades de entrada e saída

int main() { // Retorna um número inteiro
    int quantidade_alcool, quantidade_gasolina; // Declaração de variáveis para armazenar a quantidade de cada item
    float preco_unitario_alcool, preco_unitario_gasolina; // Preços por litro
    float preco_alcool, preco_gasolina, total; // Preços totais após desconto
    
    // Solicita o preço unitário do álcool
    printf("Digite o preço por litro do álcool (ex.: 3.00): ");
    scanf("%f", &preco_unitario_alcool);
    
    // Solicita a quantidade de álcool
    printf("Digite a quantidade de álcool (litros): ");
    scanf("%d", &quantidade_alcool);
    
    // Solicita o preço unitário da gasolina
    printf("Digite o preço por litro da gasolina (ex.: 5.00): ");
    scanf("%f", &preco_unitario_gasolina);
    
    // Solicita a quantidade de gasolina
    printf("Digite a quantidade de gasolina (litros): ");
    scanf("%d", &quantidade_gasolina);
    
    // Calcula o preço do álcool com desconto
    preco_alcool = quantidade_alcool * preco_unitario_alcool; // Preço total sem desconto
    if (quantidade_alcool >= 40) {
        preco_alcool -= preco_alcool * 0.05; // Desconto de 5% sobre o total
    } else if (quantidade_alcool >= 20) {
        preco_alcool -= preco_alcool * 0.03; // Desconto de 3% sobre o total
    }
    // Se < 20, mantém o preço cheio (sem desconto)
    
    // Calcula o preço da gasolina com desconto
    preco_gasolina = quantidade_gasolina * preco_unitario_gasolina; // Preço total sem desconto
    if (quantidade_gasolina >= 35) {
        preco_gasolina -= preco_gasolina * 0.06; // Desconto de 6% sobre o total
    } else if (quantidade_gasolina >= 15) {
        preco_gasolina -= preco_gasolina * 0.03; // Desconto de 3% sobre o total
    }
    // Se < 15, mantém o preço cheio (sem desconto)
    
    // Calcula o total a pagar
    total = preco_alcool + preco_gasolina;
    
    // Exibe o resultado
    printf("O valor total a pagar é: R$ %.2f\n", total);
    
    return 0; // Indica que o programa terminou com sucesso
}