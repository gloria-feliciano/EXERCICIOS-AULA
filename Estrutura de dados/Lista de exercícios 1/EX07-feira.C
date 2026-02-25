/*Crie um algoritmo que irá calcular o valor total que uma senhora irá pagar por seus produtos em uma feira baseado no valor dos itens abaixo, considere que ela irá comprar uma quantidade X de cada item ao final deverá apresentar o resultado.

Pera até 5 unidades: R$ 1,50, acima de 5 R$ 1,20
Alface até 2 unidades: R$ 2,00, acima de 2 R$ 1,50
Laranjas até 6 unidades: R$ 0,50, acima de 6 R$ 0,40
*/

#include <stdio.h> //importa funcionalidades de entrada e saída

int main() { //retorna um número inteiro
    int quantidade_pera, quantidade_alface, quantidade_laranja; // Declaração de variáveis para armazenar a quantidade de cada item
    float preco_pera, preco_alface, preco_laranja, total; // Declaração de variáveis para armazenar o preço de cada item e o total a pagar
    
    // Solicita a quantidade de peras
    printf("Digite a quantidade de peras: ");
    scanf("%d", &quantidade_pera);
    
    // Solicita a quantidade de alfaces
    printf("Digite a quantidade de alfaces: ");
    scanf("%d", &quantidade_alface);
    
    // Solicita a quantidade de laranjas
    printf("Digite a quantidade de laranjas: ");
    scanf("%d", &quantidade_laranja);
    
    // Calcula o preço das peras
    if (quantidade_pera <= 5) {
        preco_pera = quantidade_pera * 1.50; // Preço para até 5 unidades
    } else {
        preco_pera = quantidade_pera * 1.20; // Preço para acima de 5 unidades
    }
    
    // Calcula o preço das alfaces
    if (quantidade_alface <= 2) {
        preco_alface = quantidade_alface * 2.00; // Preço para até 2 unidades
    } else {
        preco_alface = quantidade_alface * 1.50; // Preço para acima de 2 unidades
    }
    
    // Calcula o preço das laranjas
    if (quantidade_laranja <= 6) {
        preco_laranja = quantidade_laranja * 0.50; // Preço para até 6 unidades
    } else {
        preco_laranja = quantidade_laranja * 0.40; // Preço para acima de 6 unidades
    }
    
    // Calcula o total a pagar
    total = preco_pera + preco_alface + preco_laranja;
    
    // Exibe o resultado
    printf("O valor total a pagar é: R$ %.2f\n", total);
}