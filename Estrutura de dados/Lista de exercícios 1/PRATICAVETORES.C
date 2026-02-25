/*Crie uma aplicação que seja responsável por realizar diferentes análises de até 100 médias finais de alunos de uma turma, esta aplicação deverá conter as seguintes operações:
  2.1) Carregar notas (deverá permitir informar valores até o usuário definir que deseja parar de informar valores).
  2.2) Exibir notas (exibir somente as notas informadas, atenção, pois nem todas as posições podem estar preenchidas).
  2.3) Contar número de notas informadas (exibir o número de notas informadas).
  2.4) Calcular a média das notas informadas.
  2.5) Identificar a maior ou menor nota informada.
  2.6) Contar o número de notas totais informadas, número de notas menores que 6.0 e o número de notas entre 6.00 e 10.00*/

  #include <stdio.h>

// Função para exibir o menu e obter a escolha do usuário
int exibirMenu() {
    int opcao;
    printf("\n=== Análise de Notas de Alunos ===\n");
    printf("1. Carregar notas\n");
    printf("2. Exibir notas\n");
    printf("3. Contar número de notas informadas\n");
    printf("4. Calcular a média das notas\n");
    printf("5. Identificar maior e menor nota\n");
    printf("6. Contar notas por categoria\n");
    printf("7. Sair\n");
    printf("Escolha uma opção (1-7): ");
    scanf("%d", &opcao);
    return opcao;
}

// Função para carregar notas
void carregarNotas(float notas[], int *contador) {
    char continuar;
    while (*contador < 100) {
        printf("Digite a nota (0.0 a 10.0): ");
        scanf("%f", &notas[*contador]);
        if (notas[*contador] < 0.0 || notas[*contador] > 10.0) {
            printf("Nota inválida! Deve estar entre 0.0 e 10.0.\n");
            continue;
        }
        (*contador)++;
        printf("Deseja adicionar outra nota? (s/n): ");
        scanf(" %c", &continuar); // Espaço antes de %c para ignorar newline
        if (continuar != 's' && continuar != 'S') break;
    }
    if (*contador == 100) {
        printf("Limite de 100 notas atingido.\n");
    }
}

// Função para exibir notas
void exibirNotas(float notas[], int contador) {
    if (contador == 0) {
        printf("Nenhuma nota informada.\n");
        return;
    }
    printf("Notas informadas:\n");
    for (int i = 0; i < contador; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");
}

// Função para contar número de notas
void contarNotas(int contador) {
    printf("Número de notas informadas: %d\n", contador);
}

// Função para calcular a média
void calcularMedia(float notas[], int contador) {
    if (contador == 0) {
        printf("Nenhuma nota para calcular média.\n");
        return;
    }
    float soma = 0.0;
    for (int i = 0; i < contador; i++) {
        soma += notas[i];
    }
    float media = soma / contador;
    printf("Média das notas: %.2f\n", media);
}

// Função para identificar maior e menor nota
void identificarMaiorMenor(float notas[], int contador) {
    if (contador == 0) {
        printf("Nenhuma nota informada.\n");
        return;
    }
    float maior = notas[0], menor = notas[0];
    for (int i = 1; i < contador; i++) {
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
}

// Função para contar notas por categoria
void contarPorCategoria(float notas[], int contador) {
    int total = contador;
    int menores6 = 0, entre6e10 = 0;
    for (int i = 0; i < contador; i++) {
        if (notas[i] < 6.0) menores6++;
        else if (notas[i] >= 6.0 && notas[i] <= 10.0) entre6e10++;
    }
    printf("Número total de notas: %d\n", total);
    printf("Número de notas menores que 6.0: %d\n", menores6);
    printf("Número de notas entre 6.0 e 10.0: %d\n", entre6e10);
}

int main() {
    float notas[100];
    int contador = 0;
    int opcao;
    
    do {
        opcao = exibirMenu();
        switch (opcao) {
            case 1:
                carregarNotas(notas, &contador);
                break;
            case 2:
                exibirNotas(notas, contador);
                break;
            case 3:
                contarNotas(contador);
                break;
            case 4:
                calcularMedia(notas, contador);
                break;
            case 5:
                identificarMaiorMenor(notas, contador);
                break;
            case 6:
                contarPorCategoria(notas, contador);
                break;
            case 7:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 7);
    
    return 0;
}