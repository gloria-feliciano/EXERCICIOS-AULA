/*Crie uma aplicação console em Java, esta aplicação deverá ser capaz de armazenar até 100 Idades. Para este exercício, crie uma classe (TDA) que será responsável pela manipulação de cada operação, o vetor responsável pelo armazenamento das idades deverá estar oculto (private) dentro da classe e qualquer acesso ao mesmo deverá ser realizado através dos métodos da mesma. O menu abaixo deverá ser criado para interagir com as idades, é importante lembrar que cada opção do menu deverá invocar um método da classe que será responsável pela execução do mesmo.

****************************

MENU - IDADES

1 - Adicionar
2 - Adicionar Idade na Posição X (deverá solicitar do usuário uma idade e também a posição que se deseja armazenar a idade, caso a posição esteja ocupada, o usuário deverá ser informado que não será possível adicionar a idade pois a posição está ocupada)

3 - Imprimir Posição X (caso exista uma idade na posição informada, esta idade deverá ser impressa)

4 - Imprimir Todas

5 - Remover Idade da Posição X

6 - Remover Todas 

7 - Contar Idades 

8 - Somar Idades

9 - Somar Idades Impares

10 - Imprimir Idades Pares

99 - Sair.

****************************
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void adicionarIdade() {
    int idade;
    printf("Digite a idade a ser adicionada: ");
    scanf("%d", &idade);
    for (int i = 0; i < TAM; i++) {
        if (idades[i] == 0) {
            idades[i] = idade;
            printf("Idade adicionada na posição %d\n", i);
            return;
        }
    }
    printf("Não foi possível adicionar a idade. O vetor está cheio.\n");

}

void adicionarIdadePosicao() {
    int idade, pos;
    printf("Digite a idade a ser adicionada: ");
    scanf("%d", &idade);
    printf("Digite a posição (0-%d) para adicionar a idade: ", TAM - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= TAM) {
        printf("Posição inválida. Tente novamente.\n");
        return;
    }
    
    if (idades[pos] != 0) {
        printf("Não foi possível adicionar a idade. A posição %d já está ocupada.\n", pos);
        return;
    }
    
    idades[pos] = idade;
    printf("Idade adicionada na posição %d\n", pos);
}

void imprimirIdadePosicao() {
    int pos;
    printf("Digite a posição (0-%d) para imprimir a idade: ", TAM - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= TAM) {
        printf("Posição inválida. Tente novamente.\n");
        return;
    }
    
    if (idades[pos] == 0) {
        printf("Não há idade na posição %d\n", pos);
        return;
    }
    
    printf("A idade na posição %d é: %d\n", pos, idades[pos]);
}

void imprimirTodasIdades() {
    printf("Idades armazenadas:\n");
    for (int i = 0; i < TAM; i++) {
        if (idades[i] != 0) {
            printf("Posição %d: %d\n", i, idades[i]);
        }
    }
}

void removerIdadePosicao() {
    int pos;
    printf("Digite a posição (0-%d) para remover a idade: ", TAM - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= TAM) {
        printf("Posição inválida. Tente novamente.\n");
        return;
    }
    
    if (idades[pos] == 0) {
        printf("Não há idade na posição %d para remover.\n", pos);
        return;
    }
    
    idades[pos] = 0;
    printf("Idade removida da posição %d\n", pos);
}

void removerTodasIdades() {
    for (int i = 0; i < TAM; i++) {
        idades[i] = 0;
    }
    printf("Todas as idades foram removidas.\n");
}

void contarIdades() {
    int count = 0;
    for (int i = 0; i < TAM; i++) {
        if (idades[i] != 0) {
            count++;
        }
    }
    printf("Número de idades armazenadas: %d\n", count);
}

void somarIdades() {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += idades[i];
    }
    printf("A soma das idades é: %d\n", soma);
}   

void somarIdadesImpares() {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        if (idades[i] % 2 != 0) {
            soma += idades[i];
        }
    }
    printf("A soma das idades ímpares é: %d\n", soma);
}

void imprimirIdadesPares() {
    printf("Idades pares armazenadas:\n");
    for (int i = 0; i < TAM; i++) {
        if (idades[i] % 2 == 0 && idades[i] != 0) {
            printf("Posição %d: %d\n", i, idades[i]);
        }
    }
}   

void imprimirIdadesImpares() {
    printf("Idades ímpares armazenadas:\n");
    for (int i = 0; i < TAM; i++) {
        if (idades[i] % 2 != 0 && idades[i] != 0) {
            printf("Posição %d: %d\n", i, idades[i]);
        }
    }
}

void imprimirTodasIdades() {
    printf("Todas as idades armazenadas:\n");
    for (int i = 0; i < TAM; i++) {
        if (idades[i] != 0) {
            printf("Posição %d: %d\n", i, idades[i]);
        }
    }
}

int main() {
    int opc = 0;
    
    do {
        printf("****************************\n");
        printf("MENU - IDADES\n");
        printf("1 - Adicionar\n");
        printf("2 - Adicionar Idade na Posição X\n");
        printf("3 - Imprimir Posição X\n");
        printf("4 - Imprimir Todas\n");
        printf("5 - Remover Idade da Posição X\n");
        printf("6 - Remover Todas\n");
        printf("7 - Contar Idades\n");
        printf("8 - Somar Idades\n");
        printf("9 - Somar Idades Impares\n");
        printf("10 - Imprimir Idades Pares\n");
        printf("99 - Sair.\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opc);
        
        if (opc == 1) {
            adicionarIdade();
        } else if (opc == 2) {
            adicionarIdadePosicao();
        } else if (opc == 3) {
            imprimirIdadePosicao();
        } else if (opc == 4) {
            imprimirTodasIdades();
        } else if (opc == 5) {
            removerIdadePosicao();
        } else if (opc == 6) {
            removerTodasIdades();
        } else if (opc == 7) {
            contarIdades();
        } else if (opc == 8) {
            somarIdades();
        } else if (opc == 9) {
            somarIdadesImpares();
        } else if (opc == 10) {
            imprimirIdadesPares();
        } else if (opc == 99) {
            printf("Saindo...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opc != 99);
    
    return 0;
}
