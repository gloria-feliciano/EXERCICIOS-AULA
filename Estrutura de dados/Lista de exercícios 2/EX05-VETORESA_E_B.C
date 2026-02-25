/* EDL2-005 (VETORES A e B)
Crie uma aplicação console em Java, esta aplicação deverá conter dois vetores ocultos (privados), cada vetor deverá armazenar 10 números inteiros, uma classe (TDA) deverá ser criada para a manipulação destes vetores, os métodos a serem criados para manipulação deverá atender a necessidade do menu abaixo descrito, é importante lembrar que somente através dos métodos da classe os vetores devem ser acessados e manipulados.


****************************

MENU - VETORES A e B

1 - Adicionar vetor A
2 - Adicionar vetor B

3 - Remover do vetor A valor da posição X

4 - Remover do vetor B valor da posição X

5 - Imprimir vetor A

6 - Imprimir vetor B

7 - Contar valores vetor A

8 - Contar valores vetor B

9 - Somar valores de cada vetor e apresentar

10 - Qual vetor tem maior quantidade de valores?

11 - Qual vetor tem a maior soma de valores?

12 - Transferir valores Pares do vetor A para o B

13 - Transferir valores Impares do vetor B para o A

14 - Media de valores de cada vetor

15 - Qual vetor apresenta a maior média?

16 - Maior valor de cada vetor

17 - Menor valor de cada vetor

18 - Qual vetor apresenta o maior valor?


99 - Sair.

****************************
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void adicionarVetorA() {
    int valor;
    printf("Digite um valor inteiro para adicionar ao vetor A: ");
    scanf("%d", &valor);
    
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] == 0) {
            vetorA[i] = valor;
            printf("Valor adicionado ao vetor A na posição %d\n", i);
            return;
        }
    }
    printf("Não foi possível adicionar o valor. O vetor A está cheio.\n");
}

void adicionarVetorB() {
    int valor;
    printf("Digite um valor inteiro para adicionar ao vetor B: ");
    scanf("%d", &valor);
    
    for (int i = 0; i < TAM; i++) {
        if (vetorB[i] == 0) {
            vetorB[i] = valor;
            printf("Valor adicionado ao vetor B na posição %d\n", i);
            return;
        }
    }
    printf("Não foi possível adicionar o valor. O vetor B está cheio.\n");
}

void removerVetorA() {
    int pos;
    printf("Digite a posição (0-%d) para remover o valor do vetor A: ", TAM - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= TAM) {
        printf("Posição inválida. Tente novamente.\n");
        return;
    }
    
    if (vetorA[pos] == 0) {
        printf("Não há valor na posição %d do vetor A para remover.\n", pos);
        return;
    }
    
    vetorA[pos] = 0;
    printf("Valor removido da posição %d do vetor A\n", pos);
}

void  removerVetorB() {
    int pos;
    printf("Digite a posição (0-%d) para remover o valor do vetor B: ", TAM - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= TAM) {
        printf("Posição inválida. Tente novamente.\n");
        return;
    }
    
    if (vetorB[pos] == 0) {
        printf("Não há valor na posição %d do vetor B para remover.\n", pos);
        return;
    }
    
    vetorB[pos] = 0;
    printf("Valor removido da posição %d do vetor B\n", pos);
}

void imprimirVetorA() {
    printf("Vetor A:\n");
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] != 0) {
            printf("Posição %d: %d\n", i, vetorA[i]);
        }
    }
}

void imprimirVetorB() {
    printf("Vetor B:\n");
    for (int i = 0; i < TAM; i++) {
        if (vetorB[i] != 0) {
            printf("Posição %d: %d\n", i, vetorB[i]);
        }
    }
}

void contarVetorA() {
    int count = 0;
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] != 0) {
            count++;
        }
    }
    printf("Número de valores no vetor A: %d\n", count);
}

void contarVetorB() {
    int count = 0;
    for (int i = 0; i < TAM; i++) {
        if (vetorB[i] != 0) {
            count++;
        }
    }
    printf("Número de valores no vetor B: %d\n", count);
}

void somarVetores() {
    int somaA = 0, somaB = 0;
    for (int i = 0; i < TAM; i++) {
        somaA += vetorA[i];
        somaB += vetorB[i];
    }
    printf("Soma dos valores do vetor A: %d\n", somaA);
    printf("Soma dos valores do vetor B: %d\n", somaB);
}

void compararQuantidade() {
    int countA = 0, countB = 0;
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] != 0) countA++;
        if (vetorB[i] != 0) countB++;
    }
    if (countA > countB) {
        printf("O vetor A tem mais valores.\n");
    } else if (countB > countA) {
        printf("O vetor B tem mais valores.\n");
    } else {
        printf("Ambos os vetores têm a mesma quantidade de valores.\n");
    }
}

void compararSoma() {
    int somaA = 0, somaB = 0;
    for (int i = 0; i < TAM; i++) {
        somaA += vetorA[i];
        somaB += vetorB[i];
    }
    if (somaA > somaB) {
        printf("O vetor A tem a maior soma de valores.\n");
    } else if (somaB > somaA) {
        printf("O vetor B tem a maior soma de valores.\n");
    } else {
        printf("Ambos os vetores têm a mesma soma de valores.\n");
    }
}

void compararValores() {
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] != 0 && vetorB[i] != 0) {
            if (vetorA[i] > vetorB[i]) {
                printf("O valor %d do vetor A é maior que o valor %d do vetor B na posição %d.\n", vetorA[i], vetorB[i], i);
            } else if (vetorB[i] > vetorA[i]) {
                printf("O valor %d do vetor B é maior que o valor %d do vetor A na posição %d.\n", vetorB[i], vetorA[i], i);
            }
        }
    }
}

void compararMedia() {
    int somaA = 0, somaB = 0, countA = 0, countB = 0;
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] != 0) {
            somaA += vetorA[i];
            countA++;
        }
        if (vetorB[i] != 0) {
            somaB += vetorB[i];
            countB++;
        }
    }
    float mediaA = countA > 0 ? (float)somaA / countA : 0;
    float mediaB = countB > 0 ? (float)somaB / countB : 0;
    
    printf("Média dos valores do vetor A: %.2f\n", mediaA);
    printf("Média dos valores do vetor B: %.2f\n", mediaB);
    
    if (mediaA > mediaB) {
        printf("O vetor A tem a maior média de valores.\n");
    } else if (mediaB > mediaA) {
        printf("O vetor B tem a maior média de valores.\n");
    } else {
        printf("Ambos os vetores têm a mesma média de valores.\n");
    }
}

void transferirParesAparaB() {
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] % 2 == 0 && vetorA[i] != 0) {
            for (int j = 0; j < TAM; j++) {
                if (vetorB[j] == 0) {
                    vetorB[j] = vetorA[i];
                    vetorA[i] = 0;
                    break;
                }
            }
        }
    }
    printf("Valores pares do vetor A foram transferidos para o vetor B.\n");
}

void transferirImparesBparaA() {
    for (int i = 0; i < TAM; i++) {
        if (vetorB[i] % 2 != 0 && vetorB[i] != 0) {
            for (int j = 0; j < TAM; j++) {
                if (vetorA[j] == 0) {
                    vetorA[j] = vetorB[i];
                    vetorB[i] = 0;
                    break;
                }
            }
        }
    }
    printf("Valores ímpares do vetor B foram transferidos para o vetor A.\n");
}

void transferirImparesAparaB() {
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] % 2 != 0 && vetorA[i] != 0) {
            for (int j = 0; j < TAM; j++) {
                if (vetorB[j] == 0) {
                    vetorB[j] = vetorA[i];
                    vetorA[i] = 0;
                    break;
                }
            }
        }
    }
    printf("Valores ímpares do vetor A foram transferidos para o vetor B.\n");
}

void transferirParesBparaA() {
    for (int i = 0; i < TAM; i++) {
        if (vetorB[i] % 2 == 0 && vetorB[i] != 0) {
            for (int j = 0; j < TAM; j++) {
                if (vetorA[j] == 0) {
                    vetorA[j] = vetorB[i];
                    vetorB[i] = 0;
                    break;
                }
            }
        }
    }
    printf("Valores pares do vetor B foram transferidos para o vetor A.\n");
}

void transferirImparesBparaA() {
    for (int i = 0; i < TAM; i++) {
        if (vetorB[i] % 2 != 0 && vetorB[i] != 0) {
            for (int j = 0; j < TAM; j++) {
                if (vetorA[j] == 0) {
                    vetorA[j] = vetorB[i];
                    vetorB[i] = 0;
                    break;
                }
            }
        }
    }
    printf("Valores ímpares do vetor B foram transferidos para o vetor A.\n");
}

void compararMaiorValor() {
    int maiorA = 0, maiorB = 0;
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] > maiorA) {
            maiorA = vetorA[i];
        }
        if (vetorB[i] > maiorB) {
            maiorB = vetorB[i];
        }
    }
    if (maiorA > maiorB) {
        printf("O vetor A tem o maior valor: %d\n", maiorA);
    } else if (maiorB > maiorA) {
        printf("O vetor B tem o maior valor: %d\n", maiorB);
    } else {
        printf("Ambos os vetores têm o mesmo maior valor: %d\n", maiorA);
    }
}

void compararMenorValor() {
    int menorA = vetorA[0], menorB = vetorB[0];
    for (int i = 0; i < TAM; i++) {
        if (vetorA[i] != 0 && vetorA[i] < menorA) {
            menorA = vetorA[i];
        }
        if (vetorB[i] != 0 && vetorB[i] < menorB) {
            menorB = vetorB[i];
        }
    }
    if (menorA < menorB) {
        printf("O vetor A tem o menor valor: %d\n", menorA);
    } else if (menorB < menorA) {
        printf("O vetor B tem o menor valor: %d\n", menorB);
    } else {
        printf("Ambos os vetores têm o mesmo menor valor: %d\n", menorA);
    }
}

int main() {
    int opc = 0;

    do {
         printf("****************************\n");
         printf("MENU - VETORES A e B\n");
            printf("1 - Adicionar vetor A\n");
            printf("2 - Adicionar vetor B\n");
            printf("3 - Transferir pares de A para B\n");
            printf("4 - Transferir ímpares de A para B\n");
            printf("5 - Transferir pares de B para A\n");
            printf("6 - Transferir ímpares de B para A\n");
            printf("7 - Comparar maior valor\n");
            printf("8 - Comparar menor valor\n");
            printf("0 - Sair\n");
            printf("****************************\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opc);

            if (opc == 1) {
                    adicionarVetorA();
            } else if (opc == 2) {
                    adicionarVetorB();
            } else if (opc == 3) {
                    transferirParesAparaB();
            } else if (opc == 4) {
                    transferirImparesAparaB();
            } else if (opc == 5) {
                    transferirParesBparaA();
            } else if (opc == 6) {
                    transferirImparesBparaA();
            } else if (opc == 7) {
                    compararMaiorValor();
            } else if (opc == 8) {
                    compararMenorValor();
            } else if (opc == 0) {
                    printf("Saindo...\n");
            } else {
                printf("Opção inválida. Tente novamente.\n");
            }
        } while (opc != 0);
   
    return 0;
}