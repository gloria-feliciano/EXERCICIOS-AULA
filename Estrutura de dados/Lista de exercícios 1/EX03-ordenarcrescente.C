/*Desenvolva um algoritmo que solicite o usuário 3 valores inteiros quaisquer, este algoritmo deverá exibir os valores ordenados cresente indeferentemente da ordem que o usuário informar os valores, esta ordenação deverá ocorrer somente se não existir nenhum valor repetido, caso exista, informar o usuário que valores repetidos não são permitidos*/

#include <stdio.h> //importa funcionalidades de entrada e saída

int main() { //retorna um número inteiro
    float valor1, valor2, valor3, temp; // Declaração de variáveis para armazenar os valores numéricos decimais
    
    // Solicita o primeiro valor
    printf("Digite o primeiro valor numérico: "); //enviar informações na tela
    scanf("%f", &valor1); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável valor1
    
    // Solicita o segundo valor
    printf("Digite o segundo valor numérico: "); //enviar informações na tela
    scanf("%f", &valor2); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável valor2

    // Solicita o terceiro valor
    printf("Digite o terceiro valor numérico: "); //enviar informações na tela
    scanf("%f", &valor3); // Ler o valor digitado pelo usuário que será tipo float e armazenar no endereço de  variável valor2

    // Verifica se há valores repetidos
    if (valor1 == valor2 || valor1 == valor3 || valor2 == valor3) {
        printf("Valores repetidos não são permitidos.\n");
        return 0; // Encerra o programa se houver repetidos
    }
    
    
  // Ordena os valores em ordem crescente usando comparações simples
    // Passo 1: Garante que valor1 <= valor2
    if (valor1 > valor2) {
        temp = valor1; //temp - troca valores de duas variáveis
        valor1 = valor2;
        valor2 = temp;
    }
    // Passo 2: Garante que valor2 <= valor3
    if (valor2 > valor3) {
        temp = valor2;
        valor2 = valor3;
        valor3 = temp;
    }
    // Passo 3: Verifica novamente valor1 e valor2 (caso a troca anterior tenha desordenado)
    if (valor1 > valor2) {
        temp = valor1;
        valor1 = valor2;
        valor2 = temp;
    }
    
    // Exibe os valores ordenados
    printf("Valores em ordem crescente: %.2f, %.2f, %.2f\n", valor1, valor2, valor3);
    
    return 0;
}