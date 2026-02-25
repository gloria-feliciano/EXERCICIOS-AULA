/*deverá adicionar os impostos e também margem de lucro sobre o valor de fábrica do veículo, o algoritmo deverá solicitar o ANO de fabricação do veículo, o preço de fábrica e então acrescentar os impostos de acordo com as regras abaixo e também o percentual de lucro, o preço final deverá estar acrescido dos itens mencionados. No final do processamento, a aplicação deverá exibir o valor original, o valor referente a cada imposto e também o valor de lucro, e por fim, deverá exibir o preço final que correspondo ao preço original mais os itens calculados. Observação: Todos os valores deverão ser calculados sobre o preço original do veículo.

IPI 
veículos ano <= 2000 = 10% 
veículos ano > 2000 e ano <= 2010 = 11%
veículos ano > 2011 = 13%

ICMS
veículos ano <= 2000 = 5 %
veículos ano >  2000 = 7%

LUCRO
veículos ano <= 2000 = 25% 
veículos ano  > 2000 = 20%
*/

#include <stdio.h> //importa funcionalidades de entrada e saída

int main() { //retorna um número inteiro
    int ano; // Declaração de variável para armazenar o ano de fabricação do veículo
    float preco_fabrica, ipi, icms, lucro, preco_final; // Declaração de variáveis para armazenar o preço de fábrica, os impostos, o lucro e o preço final
    
    // Solicita o ano de fabricação do veículo
    printf("Digite o ano de fabricação do veículo: ");
    scanf("%d", &ano);
    
    // Solicita o preço de fábrica do veículo
    printf("Digite o preço de fábrica do veículo: ");
    scanf("%f", &preco_fabrica);
    
    // Calcula os impostos e o lucro com base no ano de fabricação
    if (ano <= 2000) {
        ipi = preco_fabrica * 0.10; // IPI para veículos fabricados até 2000
        icms = preco_fabrica * 0.05; // ICMS para veículos fabricados até 2000
        lucro = preco_fabrica * 0.25; // Lucro para veículos fabricados até 2000
    } else if (ano > 2000 && ano <= 2010) {
        ipi = preco_fabrica * 0.11; // IPI para veículos fabricados entre 2001 e 2010
        icms = preco_fabrica * 0.07; // ICMS para veículos fabricados após 2000
        lucro = preco_fabrica * 0.20; // Lucro para veículos fabricados após 2000
    } else {
        ipi = preco_fabrica * 0.13; // IPI para veículos fabricados após 2011
        icms = preco_fabrica * 0.07; // ICMS para veículos fabricados após 2000
        lucro = preco_fabrica * 0.20; // Lucro para veículos fabricados após 2000
    }
    
    // Calcula o preço final do veículo
    preco_final = preco_fabrica + ipi + icms + lucro;
    
    // Exibe os resultados
    printf("Preço original: R$ %.2f\n", preco_fabrica);
    printf("Valor do IPI: R$ %.2f\n", ipi);
    printf("Valor do ICMS: R$ %.2f\n", icms);
    printf("Valor do Lucro: R$ %.2f\n", lucro);
    printf("Preço final: R$ %.2f\n", preco_final);
}