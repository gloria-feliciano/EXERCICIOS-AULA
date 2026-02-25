/*Desenvolva um algoticmo que solicite do usuário 2 valores numéricos quaisquer, a aplicação deverá exibir se os valores são iguais, se o primeiro é maior que o segundo ou vice-versa*/

#include <stdio.h> //importa funcionalidades de entrada e saída

int main() { //retorna um número inteiro
    float valor1, valor2; // Declaração de variáveis para armazenar os valores numéricos decimais
    
    // Solicita o primeiro valor
    printf("Digite o primeiro valor numérico: "); //enviar informações na tela
    scanf("%f", &valor1); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável valor1
    
    // Solicita o segundo valor
    printf("Digite o segundo valor numérico: "); //enviar informações na tela
    scanf("%f", &valor2); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável valor2
    
    // Compara os valores e exibe o resultado
    if (valor1 == valor2) { //compara se os dois valores são iguais
        printf("Os valores são iguais.\n"); // (/n) - usado para pular para a próxima linha
    } else if (valor1 > valor2) {
        printf("O primeiro valor é maior que o segundo.\n");
    } else {
        printf("O segundo valor é maior que o primeiro.\n");
    }
    
    return 0; //indica que o programa terminou com sucesso
}