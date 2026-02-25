/*Crie uma aplicação que calcula o IMC, a aplicação deverá solicitar o Peso e a Altura, e apresentar o resultado da operação.*/

#include <stdio.h> //importa funcionalidades de entrada e saída

int main() {
    float peso, altura, imc; 

    //peso
    printf("Digite o peso:");
    scanf("%f", &peso);
    
    //altura
    printf("Digite a altura:");
    scanf("%f", &altura);
    
    //cálculo do IMC
    imc = peso / (altura * altura);
    
    //exibição do resultado
    printf("O IMC é: %.2f\n", imc);
}