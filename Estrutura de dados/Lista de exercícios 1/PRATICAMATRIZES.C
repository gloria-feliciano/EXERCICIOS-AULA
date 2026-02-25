/*Crie uma aplicação que seja responsável por manipular entre 40 e 50 valores inteiros, é importante que este exemplo utilize vetores, onde deverão existir ao menos 2 linhas e 2 colunas (cada aluno deverá definir o número de linhas e colunas). Este exemplo deverá conter as seguintes opções de manipulação. 
  3.1) Carregar valores. 
  3.2) Exibir valores. 
  3.3) Limpar valores.
  3.4) Exibir o maior e menor valor existente. 
  3.5) Contar número de valores acima do valor médiO.
  3.6) Exibir os valores de acordo com a linha que se contram. 
  3.7) Identificar qual linha contem a maior soma dos valores presentes.*/

  #include <stdio.h>
#include <stdlib.h>

// Função para exibir o menu e obter a escolha do usuário
int exibirMenu() {
    int opcao;
    printf("\n=== Manipulação de Matriz ===\n");
    printf("1. Carregar valores\n");
    printf("2. Exibir valores\n");
    printf("3. Limpar valores\n");
    printf("4. Exibir o maior e menor valor\n");
    printf("5. Contar valores acima da média\n");
    printf("6. Exibir valores por linha\n");
    printf("7. Identificar linha com maior soma\n");
    printf("8. Sair\n");
    printf("Escolha uma opção (1-8): ");
    scanf("%d", &opcao);
    return opcao;
}

// Função para carregar valores na matriz
void carregarValores(int **matriz, int linhas, int colunas) {
    printf("Digite os valores para a matriz (%dx%d):\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para exibir a matriz
void exibirValores(int **matriz, int linhas, int colunas) {
    printf("Matriz (%dx%d):\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para limpar a matriz (zerar valores)
void limparValores(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 0;
        }
    }
    printf("Matriz limpa com sucesso!\n");
}

// Função para exibir maior e menor valor
void exibirMaiorMenor(int **matriz, int linhas, int colunas) {
    if (linhas * colunas == 0) {
        printf("Matriz vazia!\n");
        return;
    }
    int maior = matriz[0][0], menor = matriz[0][0];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) maior = matriz[i][j];
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}

// Função para contar valores acima da média
void contarAcimaMedia(int **matriz, int linhas, int colunas) {
    int total = linhas * colunas;
    if (total == 0) {
        printf("Matriz vazia!\n");
        return;
    }
    float soma = 0.0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    float media = soma / total;
    int contador = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > media) contador++;
        }
    }
    printf("Média: %.2f\n", media);
    printf("Número de valores acima da média: %d\n", contador);
}

// Função para exibir valores por linha
void exibirPorLinha(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("Linha %d: ", i);
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para identificar a linha com maior soma
void linhaMaiorSoma(int **matriz, int linhas, int colunas) {
    int maiorSoma = 0, linhaMaior = 0;
    for (int i = 0; i < linhas; i++) {
        int soma = 0;
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
        if (i == 0 || soma > maiorSoma) {
            maiorSoma = soma;
            linhaMaior = i;
        }
    }
    printf("Linha com maior soma: %d (Soma: %d)\n", linhaMaior, maiorSoma);
}

int main() {
    int linhas, colunas;
    printf("Digite o número de linhas (mín 2): ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas (mín 2): ");
    scanf("%d", &colunas);
    
    if (linhas < 2 || colunas < 2 || linhas * colunas < 40 || linhas * colunas > 50) {
        printf("Erro: Deve ter ao menos 2x2 e total de elementos entre 40 e 50.\n");
        return 1;
    }
    
    // Alocação dinâmica da matriz
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    
    // Inicializar matriz com zeros
    limparValores(matriz, linhas, colunas);
    
    int opcao;
    do {
        opcao = exibirMenu();
        switch (opcao) {
            case 1:
                carregarValores(matriz, linhas, colunas);
                break;
            case 2:
                exibirValores(matriz, linhas, colunas);
                break;
            case 3:
                limparValores(matriz, linhas, colunas);
                break;
            case 4:
                exibirMaiorMenor(matriz, linhas, colunas);
                break;
            case 5:
                contarAcimaMedia(matriz, linhas, colunas);
                break;
            case 6:
                exibirPorLinha(matriz, linhas, colunas);
                break;
            case 7:
                linhaMaiorSoma(matriz, linhas, colunas);
                break;
            case 8:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 8);
    
    // Liberar memória
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}