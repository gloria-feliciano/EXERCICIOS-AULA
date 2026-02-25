/*Desenvolva um algoritmo capaz de infromar qual é a área de um retângulo, o usuário deverá infromar os valores de base e altura*/

#include <stdio.h> //importa funcionalidades de entrada e saída

int main() { //retorna um número inteiro
    float base, altura, area; // Declaração de variáveis decimais para armazenar os valores numéricos decimais
    
    // Solicita o primeiro valor
    printf("Digite o valor da base do retângulo: "); //enviar informações na tela
    scanf("%f", &base); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável valor1
    
    // Solicita o segundo valor
    printf("Digite o valor da altura do retângulo: "); //enviar informações na tela
    scanf("%f", &altura); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável valor2
    
    // Calcula a área do retângulo
    area = base * altura;
    
    // Exibe a área do retângulo
    printf("A área do retângulo é: %.2f\n", area); // %.2f - formata a saída para mostrar apenas 2 casas decimais
    
    return 0; //indica que o programa terminou com sucesso
}