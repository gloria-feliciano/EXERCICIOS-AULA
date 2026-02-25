/*Crie uma aplicação console, esta aplicação deverá ser capaz de armazenar até 100 diferentes salários de funcionários. Para este exercício crie uma classe que será responsável por resolver cada uma das ações presentes no menu abaixo descrito, o programador deverá proteger (private) dentro da classe o vetor que armazenará os salários. O menu criado deverá interagir apenas com os métodos que serão criados na classe.
MENU - SALÁRIOS
01 - Adicionar 
02 - Remover posição Y
03 - Imprimir todos
04 - Pesquisar salário X (deverá solicitar do usuário o salário desejado e pesquisar se existe no vetor, caso exista, deverá exibir a posição que o mesmo está armazenado)
05 - Adicionar na posição (deverá solicitar do usuário o valor do salário e posição que deseja armazena-lo no vetor caso a mesma não esteja ocupada) 
06 - Pesquisar o quantidade salários X (deverá solicitar do usuário um salário e contar quantas vezes este salário existe no vetor)
07 - Somar salários
08 - Somar salários X
09 - Contar salários
10 - Contar salários X
11 - Contar salários maiores que X
12 - Maior salário
13 - Menor salário
14 - Média salários
15 - Remover salários valor X
16 - Remover todos salários
17 - Imprimir salário posição Y
18 - Imprimir salários menores que X
19 - Aplicar acréscimo de Z% em todos salários
20 - Aplicar desconto de Z% em salários maiores que X
99 - Sair.
Digite a opção desejada:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
#define OPCAO_SAIR 99

// Definição da classe (struct com dados privados)
typedef struct {
    float salarios[TAM];  // Vetor protegido (privado)
    int quantidade;                 // Quantidade atual de salários
} ClasseSalarios;

// Funções da classe (métodos)
void inicializar(ClasseSalarios *cls) {
    cls->quantidade = 0;
    // Inicializa o vetor com zeros
    for (int i = 0; i < TAM; i++) {
        cls->salarios[i] = 0;
    }
}

int adicionar(ClasseSalarios *cls, float salario) {
    if (cls->quantidade >= TAM) {
        printf("Erro: Limite maximo atingido!\n");
        return 0;
    }
    cls->salarios[cls->quantidade] = salario;
    cls->quantidade++;
    return 1;
}

int removerPosicao(ClasseSalarios *cls, int posicao) {
    if (posicao < 0 || posicao >= cls->quantidade) {
        printf("Erro: Posicao invalida!\n");
        return 0;
    }
    
    // Desloca os elementos para esquerda
    for (int i = posicao; i < cls->quantidade - 1; i++) {
        cls->salarios[i] = cls->salarios[i + 1];
    }
    cls->quantidade--;
    return 1;
}

void imprimirTodos(ClasseSalarios *cls) {
    if (cls->quantidade == 0) {
        printf("Nenhum salario cadastrado!\n");
        return;
    }
    
    printf("\n=== LISTA DE SALARIOS ===\n");
    for (int i = 0; i < cls->quantidade; i++) {
        printf("Posicao %d: R$ %.2f\n", i, cls->salarios[i]);
    }
    printf("==========================\n");
}

int pesquisarSalario(ClasseSalarios *cls, float salario) {
    for (int i = 0; i < cls->quantidade; i++) {
        if (cls->salarios[i] == salario) {
            return i;  // Retorna a posição
        }
    }
    return -1;  // Não encontrado
}

int adicionarNaPosicao(ClasseSalarios *cls, float salario, int posicao) {
    if (posicao < 0 || posicao >= TAM) {
        printf("Erro: Posicao invalida!\n");
        return 0;
    }
    
    // Verifica se a posição já está ocupada
    if (posicao < cls->quantidade) {
        printf("Erro: Posicao ja ocupada!\n");
        return 0;
    }
    
    cls->salarios[posicao] = salario;
    
    // Atualiza quantidade se necessário
    if (posicao >= cls->quantidade) {
        cls->quantidade = posicao + 1;
    }
    return 1;
}

int contarSalarioX(ClasseSalarios *cls, float salario) {
    int contador = 0;
    for (int i = 0; i < cls->quantidade; i++) {
        if (cls->salarios[i] == salario) {
            contador++;
        }
    }
    return contador;
}

float somarSalarios(ClasseSalarios *cls) {
    float soma = 0;
    for (int i = 0; i < cls->quantidade; i++) {
        soma += cls->salarios[i];
    }
    return soma;
}

float somarSalariosX(ClasseSalarios *cls, float valorX) {
    float soma = 0;
    for (int i = 0; i < cls->quantidade; i++) {
        if (cls->salarios[i] == valorX) {
            soma += cls->salarios[i];
        }
    }
    return soma;
}

int contarSalarios(ClasseSalarios *cls) {
    return cls->quantidade;
}

int contarSalariosX(ClasseSalarios *cls, float valorX) {
    return contarSalarioX(cls, valorX);
}

int contarSalariosMaioresQueX(ClasseSalarios *cls, float valorX) {
    int contador = 0;
    for (int i = 0; i < cls->quantidade; i++) {
        if (cls->salarios[i] > valorX) {
            contador++;
        }
    }
    return contador;
}

float maiorSalario(ClasseSalarios *cls) {
    if (cls->quantidade == 0) {
        return 0;
    }
    
    float maior = cls->salarios[0];
    for (int i = 1; i < cls->quantidade; i++) {
        if (cls->salarios[i] > maior) {
            maior = cls->salarios[i];
        }
    }
    return maior;
}

float menorSalario(ClasseSalarios *cls) {
    if (cls->quantidade == 0) {
        return 0;
    }
    
    float menor = cls->salarios[0];
    for (int i = 1; i < cls->quantidade; i++) {
        if (cls->salarios[i] < menor) {
            menor = cls->salarios[i];
        }
    }
    return menor;
}

float mediaSalarios(ClasseSalarios *cls) {
    if (cls->quantidade == 0) {
        return 0;
    }
    return somarSalarios(cls) / cls->quantidade;
}

int removerSalariosValorX(ClasseSalarios *cls, float valorX) {
    int removidos = 0;
    int i = 0;
    
    while (i < cls->quantidade) {
        if (cls->salarios[i] == valorX) {
            // Remove este elemento
            for (int j = i; j < cls->quantidade - 1; j++) {
                cls->salarios[j] = cls->salarios[j + 1];
            }
            cls->quantidade--;
            removidos++;
        } else {
            i++;
        }
    }
    return removidos;
}

void removerTodosSalarios(ClasseSalarios *cls) {
    cls->quantidade = 0;
    for (int i = 0; i < TAM; i++) {
        cls->salarios[i] = 0;
    }
    printf("Todos os salarios foram removidos!\n");
}

float imprimirSalarioPosicaoY(ClasseSalarios *cls, int posicao) {
    if (posicao < 0 || posicao >= cls->quantidade) {
        printf("Erro: Posicao invalida!\n");
        return -1;
    }
    return cls->salarios[posicao];
}

void imprimirSalariosMenoresQueX(ClasseSalarios *cls, float valorX) {
    printf("\n=== SALARIOS MENORES QUE R$ %.2f ===\n", valorX);
    int encontrou = 0;
    for (int i = 0; i < cls->quantidade; i++) {
        if (cls->salarios[i] < valorX) {
            printf("Posicao %d: R$ %.2f\n", i, cls->salarios[i]);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhum salario encontrado!\n");
    }
    printf("=======================================\n");
}

void aplicarAumentoTodos(ClasseSalarios *cls, float percentual) {
    for (int i = 0; i < cls->quantidade; i++) {
        cls->salarios[i] = cls->salarios[i] * (1 + percentual / 100);
    }
    printf("Aumento de %.2f%% aplicado a todos os salarios!\n", percentual);
}

void aplicarDescontoMaioresQueX(ClasseSalarios *cls, float valorX, float percentual) {
    for (int i = 0; i < cls->quantidade; i++) {
        if (cls->salarios[i] > valorX) {
            cls->salarios[i] = cls->salarios[i] * (1 - percentual / 100);
        }
    }
    printf("Desconto de %.2f%% aplicado a salarios maiores que R$ %.2f!\n", 
           percentual, valorX);
}

// Função para exibir o menu
void exibirMenu() {
    printf("\n========== MENU - SALARIOS ==========\n");
    printf("01 - Adicionar\n");
    printf("02 - Remover posicao Y\n");
    printf("03 - Imprimir todos\n");
    printf("04 - Pesquisar salario X\n");
    printf("05 - Adicionar na posicao\n");
    printf("06 - Pesquisar quantidade salarios X\n");
    printf("07 - Somar salarios\n");
    printf("08 - Somar salarios X\n");
    printf("09 - Contar salarios\n");
    printf("10 - Contar salarios X\n");
    printf("11 - Contar salarios maiores que X\n");
    printf("12 - Maior salario\n");
    printf("13 - Menor salario\n");
    printf("14 - Media salarios\n");
    printf("15 - Remover salarios valor X\n");
    printf("16 - Remover todos salarios\n");
    printf("17 - Imprimir salario posicao Y\n");
    printf("18 - Imprimir salarios menores que X\n");
    printf("19 - Aplicar acrescimo de Z%% em todos salarios\n");
    printf("20 - Aplicar desconto de Z%% em salarios maiores que X\n");
    printf("99 - Sair\n");
    printf("======================================\n");
    printf("Digite a opcao desejada: ");
}

int main() {
    ClasseSalarios cls;
    inicializar(&cls);
    
    int opcao;
    float salario, valorX, percentual;
    int posicao;
    int resultado;
    
    // Adicionando alguns salários iniciais para teste
    adicionar(&cls, 1500.00);
    adicionar(&cls, 2500.00);
    adicionar(&cls, 3200.00);
    adicionar(&cls, 1500.00);
    adicionar(&cls, 4500.00);
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            // Adicionar
            printf("Digite o salario: R$ ");
            scanf("%f", &salario);
            if (adicionar(&cls, salario)) {
                printf("Salario adicionado com sucesso!\n");
            }
        }
        else if (opcao == 2) {
            // Remover posição Y
            printf("Digite a posicao a ser removida: ");
            scanf("%d", &posicao);
            if (removerPosicao(&cls, posicao)) {
                printf("Salario removido com sucesso!\n");
            }
        }
        else if (opcao == 3) {
            // Imprimir todos
            imprimirTodos(&cls);
        }
        else if (opcao == 4) {
            // Pesquisar salário X
            printf("Digite o salario a pesquisar: R$ ");
            scanf("%f", &salario);
            resultado = pesquisarSalario(&cls, salario);
            if (resultado != -1) {
                printf("Salario encontrado na posicao: %d\n", resultado);
            } else {
                printf("Salario nao encontrado!\n");
            }
        }
        else if (opcao == 5) {
            // Adicionar na posição
            printf("Digite o salario: R$ ");
            scanf("%f", &salario);
            printf("Digite a posicao: ");
            scanf("%d", &posicao);
            if (adicionarNaPosicao(&cls, salario, posicao)) {
                printf("Salario adicionado na posicao %d com sucesso!\n", posicao);
            }
        }
        else if (opcao == 6) {
            // Pesquisar quantidade salários X
            printf("Digite o salario: R$ ");
            scanf("%f", &salario);
            resultado = contarSalarioX(&cls, salario);
            printf("O salario R$ %.2f aparece %d vez(es) no vetor.\n", salario, resultado);
        }
        else if (opcao == 7) {
            // Somar salários
            printf("Soma de todos os salarios: R$ %.2f\n", somarSalarios(&cls));
        }
        else if (opcao == 8) {
            // Somar salários X
            printf("Digite o valor X: R$ ");
            scanf("%f", &valorX);
            printf("Soma dos salarios iguais a R$ %.2f: R$ %.2f\n", 
                   valorX, somarSalariosX(&cls, valorX));
        }
        else if (opcao == 9) {
            // Contar salários
            printf("Quantidade de salarios cadastrados: %d\n", contarSalarios(&cls));
        }
        else if (opcao == 10) {
            // Contar salários X
            printf("Digite o valor X: R$ ");
            scanf("%f", &valorX);
            printf("Quantidade de salarios iguais a R$ %.2f: %d\n", 
                   valorX, contarSalariosX(&cls, valorX));
        }
        else if (opcao == 11) {
            // Contar salários maiores que X
            printf("Digite o valor X: R$ ");
            scanf("%f", &valorX);
            printf("Quantidade de salarios maiores que R$ %.2f: %d\n", 
                   valorX, contarSalariosMaioresQueX(&cls, valorX));
        }
        else if (opcao == 12) {
            // Maior salário
            printf("Maior salario: R$ %.2f\n", maiorSalario(&cls));
        }
        else if (opcao == 13) {
            // Menor salário
            printf("Menor salario: R$ %.2f\n", menorSalario(&cls));
        }
        else if (opcao == 14) {
            // Média salários
            printf("Media dos salarios: R$ %.2f\n", mediaSalarios(&cls));
        }
        else if (opcao == 15) {
            // Remover salários valor X
            printf("Digite o valor X a ser removido: R$ ");
            scanf("%f", &valorX);
            resultado = removerSalariosValorX(&cls, valorX);
            printf("Quantidade de salarios removidos: %d\n", resultado);
        }
        else if (opcao == 16) {
            // Remover todos salários
            removerTodosSalarios(&cls);
        }
        else if (opcao == 17) {
            // Imprimir salário posição Y
            printf("Digite a posicao Y: ");
            scanf("%d", &posicao);
            resultado = imprimirSalarioPosicaoY(&cls, posicao);
            if (resultado != -1) {
                printf("Salario na posicao %d: R$ %.2f\n", posicao, resultado);
            }
        }
        else if (opcao == 18) {
            // Imprimir salários menores que X
            printf("Digite o valor X: R$ ");
            scanf("%f", &valorX);
            imprimirSalariosMenoresQueX(&cls, valorX);
        }
        else if (opcao == 19) {
            // Aplicar acréscimo de Z% em todos salários
            printf("Digite o percentual de acrescimo (Z): ");
            scanf("%f", &percentual);
            aplicarAumentoTodos(&cls, percentual);
        }
        else if (opcao == 20) {
            // Aplicar desconto de Z% em salários maiores que X
            printf("Digite o valor X (referencia): R$ ");
            scanf("%f", &valorX);
            printf("Digite o percentual de desconto (Z): ");
            scanf("%f", &percentual);
            aplicarDescontoMaioresQueX(&cls, valorX, percentual);
        }
        else if (opcao != OPCAO_SAIR) {
            printf("Opcao invalida! Tente novamente.\n");
        }
        
    } while (opcao != OPCAO_SAIR);
    
    printf("Programa encerrado. Obrigado!\n");
    
    return 0;
}