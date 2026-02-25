/*Crie um programa que solicite do usuário o número de eleitores que votaram brancos, nulos e votos válidos, calcule o percentual que representa cada um dos valores informados e exiba o resultado (percentuais).*/

#include <stdio.h> //importa funcionalidades de entrada e saída

int main() { //retorna um número inteiro
    float brancos, nulos, validos, total, percentual_brancos, percentual_nulos, percentual_validos; // Declaração de variáveis para armazenar os valores numéricos decimais
    
    // Solicita o número de votos brancos
    printf("Digite o número de votos brancos: ");
    scanf("%f", &brancos);
    
    // Solicita o número de votos nulos
    printf("Digite o número de votos nulos: ");
    scanf("%f", &nulos);
    
    // Solicita o número de votos válidos
    printf("Digite o número de votos válidos: ");
    scanf("%f", &validos);
    
    // Calcula o total de eleitores
    total = brancos + nulos + validos;
    
    // Calcula os percentuais
    percentual_brancos = (brancos / total) * 100;
    percentual_nulos = (nulos / total) * 100;
    percentual_validos = (validos / total) * 100;
    
    // Exibe os resultados
    printf("Percentual de votos brancos: %.2f%%\n", percentual_brancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentual_nulos);
    printf("Percentual de votos válidos: %.2f%%\n", percentual_validos);    
}