/*Escreva uma aplicação de console, que ao ser executada, seja capaz armazenar ATE (e não mais que) 10 números de Registros Acadêmicos (RA's). Toda a manipulação dos RA's deverá ser realizada através de um MENU:
1 - Adicionar
2 - Remover (deverá solicitar o RA que deseja ser removido)
3 - Imprimir posicao (deverá solicitar o RA e imprimir a posição que o mesmo está armazenado e/ou imprimir que ele não existe)
4 - Imprimir todos
5 - Contar (deverá contar o número de RA's cadastrados).
99 - Sair.
Digite a opção desejada: */

#include <stdio.h>
#include <stdlib.h>
//void - criar um método que não retorna nenhum valor
//vetor homogênio - armazena valores inteiros

/*manipulação até 10 RA's de alunos */
#define TAM 10 //deixa pré-definido o número de vezes que algo será digitado, por exemplo, aqui foi definido como tamanho 5, ou seja, será digitado 5 valores
#define VAZIO 0

int vetorRAs[TAM]; //definir o tamanho do vetor 

//numero 1 - adicionar
void adicionarVetor(int vetor[]) {
    for (int x = 0; x < TAM; x++) {
        printf("Digite o salário %d: ", x + 1);
        scanf("%i", &vetor[x]);
    }
}

//numero 2 - remover
void removerRA(int vetor[], int ra){ //substituir o valor por 0 - usuário deve informar qual o RA que será removido
	int i = 0;
	
	for (i = 0; i < TAM; i++){
	if (vetor[i] == ra) {
		vetor[i] = VAZIO;
	}	
}
}

//numero 3 - imprimir a posição do RA informado
void exibirPosicao(int vetor[], int ra){ //imprimir a posição do RA informado
    int i = 0;
    int posicao = -1; //variável para armazenar a posição do RA, -1 indica que o RA não foi encontrado
    
    for (i = 0; i < TAM; i++) {
        if (vetor[i] == ra) {
            posicao = i; //armazenar a posição do RA encontrado
            break; //sair do loop após encontrar o RA
        }
    }
    
    if (posicao != -1) {
        printf("RA %i encontrado na posicao: %i\n", ra, posicao);
    } else {
        printf("RA %i nao encontrado.\n", ra);
    }
}

//numero 4 - imprimir todos
void impritirtodosVetor(int vetor[]){
	int y = 0;

	for (y = 0; y < TAM; y++) {
	printf("%i \n", vetor[y]); //percorre do 0 até o tamanho definido
}	
}


//numero 5 - contar
int contarRA(int vetor[]){ //verifica a quantidade de valores que está cadastrado
	int i = 0;
	int c = 0;
	
	for(i = 0; i < TAM; i++){
		if(vetor[i] > 0) {
			c = c + 1;
		}
	}
	return c;
}

void menu() {
	int opc = 0;
	int ra = 0; 
	
	do{
		printf("\n::SISTEMA DE RA::\n");
		printf("1.Adicionar\n");
		printf("2.Remover\n");
		printf("3.Imprimir posição\n");
		printf("4.Imprimir todos\n");
		printf("5.Contar RA\n");
        printf("9.Sair\n");
		printf("Digite a opcao:\n");
		scanf("%i", &opc);
								
	if (opc == 1) {
		adicionarVetor(vetorRAs);
        //adicionar
	} else if (opc == 2) {
		scanf("%i", &ra);
		removerRA(vetorRAs, ra);
		//remover
	} else if (opc ==3 ) {
		scanf("%i", &ra);
		exibirPosicao(vetorRAs, ra);
		//imprimir posição
	} else if (opc == 4) {
	impritirtodosVetor(vetorRAs);
		//imprimir todos
	} else if (opc == 5) {
	printf("Existe(m) %i RA(s) cadastrados", contarRA(vetorRAs));	
		//contar
	} else if (opc == 6) {
		scanf("%i", &ra);
		removerRA(vetorRAs, ra);
	}
								
	} while (opc !=9);
}

int main(int argc, char *argv[]) { //método que retorna um valor
	menu();
	
	return 0;
}


