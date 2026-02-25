/*Crie uma aplicação console, esta aplicação deve ser capaz de armazenar 10 valores numéricos reais (alturas), para manipular este vetor, deve-se criar o menu com as opções abaixo.


****************************
MENU

1 - Adicionar (deve-rá solicitar a POSIÇÃO e VALOR do usuário, o valor fornecido, deverá ser adicionado na posição informada, caso a posição informada não exista, deverá exibir msg para o usuário informando que a posição é inválida).

2 - Ler (Deverá solicitar do usuário uma posição qualquer do vetor e então exibir o valor existente nesta posição, validar se a posição existe antes de ler o valor).

3 - Somar (Deve somar todos os valores do vetor e apresentar o resultado da soma).

4 - Contar (Deve percorrer o vetor e contar quantos valores maior que zero existem no vetor).

5 - Contar posições vazias

9 - Sair.

****************************
Digite a opção desejada:*/

#include <stdio.h>

#define TAM 10
float vetorAlturas[TAM]; //definir o tamanho do vetor 


void adicionarVetor(float vetor[]) {
    int posicao;
    float valor;
    
    printf("Digite a posicao (0 a 9): ");
    scanf("%i", &posicao);
    
    if (posicao >= 0 && posicao < TAM) {
        printf("Digite o valor da altura: ");
        scanf("%f", &valor);
        vetor[posicao] = valor;
    } else {
        printf("Posicao invalida. Tente novamente.\n");
    }
}

void lerValor(float vetor[]) {
    int posicao;
    
    printf("Digite a posicao (0 a 9): ");
    scanf("%i", &posicao);
    
    if (posicao >= 0 && posicao < TAM) {
        printf("Valor na posicao %i: %.2f\n", posicao, vetor[posicao]);
    } else {
        printf("Posicao invalida. Tente novamente.\n");
    }
}

void somarValores(float vetor[]) {
    float soma = 0.0;
    
    for (int i = 0; i < TAM; i++) {
        soma += vetor[i];
    }
    
    printf("Soma de todas as alturas: %.2f\n", soma);
}

void contarValores(float vetor[]) {
    int contador = 0;
    
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] > 0) {
            contador++;
        }
    }
    
    printf("Quantidade de alturas maiores que zero: %i\n", contador);
}

void contarVazios(float vetor[]) {
    int contador = 0;
    
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == 0) {
            contador++;
        }
    }
    
    printf("Quantidade de posicoes vazias: %i\n", contador);
}

int main() {
    int opc = 0;
    
    do {
        printf("\nMENU\n");
        printf("1 - Adicionar\n");
        printf("2 - Ler\n");
        printf("3 - Somar\n");
        printf("4 - Contar\n");
        printf("5 - Contar posicoes vazias\n");
        printf("9 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%i", &opc);

      if (opc == 1) {
            adicionarVetor(vetorAlturas);
        } else if (opc == 2) {
            lerValor(vetorAlturas);
        } else if (opc == 3) {
            somarValores(vetorAlturas);
        } else if (opc == 4) {
            contarValores(vetorAlturas);
        } else if (opc == 5) {
            contarVazios(vetorAlturas);
        } 
       
    } while (opc != 9);
    
    return 0;
}

