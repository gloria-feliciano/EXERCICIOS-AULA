/*Desenvolva um algoritmo que permita calcular a média final de um aluno, o cálculo será mf = p1 + p2 + tr, sendo que p1 terá peso 40%, p2 peso 40% e tr peso de 20%, o algoritmo deverá receber as informações de p1, p2, tr e nc (nota de corte) e ao final exibir se o aluno foi aprovado (mf > nc) ou reprovado (mf < nc). */

#include <stdio.h> //importa funcionalidades de entrada e saída

int main() { //retorna um número inteiro
    float p1, p2, tb, nc, mf; // Declaração de variáveis para armazenar os valores numéricos decimais
    
    // Solicita o primeiro valor
    printf("Digite o valor da P1: "); //enviar informações na tela
    scanf("%f", &p1); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável p1
    
    // Solicita o segundo valor
    printf("Digite o valor da P2: "); //enviar informações na tela
    scanf("%f", &p2); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável p2

    // Solicita o terceiro valor
    printf("Digite o valor da Trabalho: "); //enviar informações na tela
    scanf("%f", &tb); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável tb

    // Solicita o valor de nota de corte
    printf("Digite o valor da Nota de Corte: "); //enviar informações na tela
    scanf("%f", &nc); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável nc

    // Calcula a média final com os pesos especificados
    mf = (p1 * 0.4) + (p2 * 0.4) + (tb * 0.2);

    // Exibe a média final
    printf("A média final do aluno é: %.2f\n", mf);

    // Verifica se o aluno foi aprovado ou reprovado
    if (mf > nc) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno foi reprovado.\n");
    }
}