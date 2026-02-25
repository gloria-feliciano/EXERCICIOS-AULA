/*Crie uma aplicação console que seja responsável por calcular a área de 3 figuras geométricas.
  1.1) Utilize um método para construção do menu. 
  1.2) Utilize métodos para realização das operações de cálculo das áreas das figuras geométricas.  */

#include <stdio.h> // Para entrada e saída
#include <math.h>  // Para funções matemáticas (opcional, mas usado para consistência)

#define PI 3.14159 // Definindo PI para o cálculo do círculo

// Função para exibir o menu e obter a escolha do usuário
int exibirMenu() {
    int opcao;
    printf("\n=== Calculadora de Áreas ===\n");
    printf("1. Calcular área do Triângulo\n");
    printf("2. Calcular área do Retângulo\n");
    printf("3. Calcular área do Círculo\n");
    printf("4. Sair\n");
    printf("Escolha uma opção (1-4): ");
    scanf("%d", &opcao);
    return opcao;
}

// Função para calcular a área do triângulo
void calcularAreaTriangulo() {
    float base, altura, area;
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("A área do triângulo é: %.2f\n", area);
}

// Função para calcular a área do retângulo
void calcularAreaRetangulo() {
    float largura, altura, area;
    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    area = largura * altura;
    printf("A área do retângulo é: %.2f\n", area);
}

// Função para calcular a área do círculo
void calcularAreaCirculo() {
    float raio, area;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    area = PI * raio * raio;
    printf("A área do círculo é: %.2f\n", area);
}

int main() {
    int opcao;
    do {
        opcao = exibirMenu();
        switch (opcao) {
            case 1:
                calcularAreaTriangulo();
                break;
            case 2:
                calcularAreaRetangulo();
                break;
            case 3:
                calcularAreaCirculo();
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);
    
    return 0;
}