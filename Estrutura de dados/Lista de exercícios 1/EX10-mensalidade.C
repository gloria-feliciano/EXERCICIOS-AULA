/*Crie uma aplicação que deverá calcular o novo valor da menslidade, a aplicação deverá solicitar do usuário o valor da mensalidade e também o dia em que ele deseja realizar o pagamento. Baseado nestas informações, caso o dia de pagamento esteja entre os dias 1~5 não deverá ocorrer nenhum ajuste de valor, se o dia de pagamento estiver entre 6~10 deverá ser calculado um acrescimo de 5% e se o dia estiver entre 11~20 deverá calcular 8%, e por fim, se o dia estiver entre 21~31 deverá ser calculado 10% de juros. A aplicação deverá apresentar no final do processamento, o valor original, o valor correspondente ao juros e também o valor final acrescido dos juros.
*/

#include <stdio.h> // Importa funcionalidades de entrada e saída

int main() { // Função principal
    float valor_mensalidade, juros = 0.0, valor_final; // Declaração de variáveis para armazenar os valores
    int dia_pagamento; // Declaração da variável para o dia de pagamento
    
    // Solicita o valor da mensalidade
    printf("Digite o valor da mensalidade: ");
    scanf("%f", &valor_mensalidade);
    
    // Solicita o dia de pagamento
    printf("Digite o dia do pagamento (1 a 31): ");
    scanf("%d", &dia_pagamento);
    
    // Validação básica: verifica se o dia está entre 1 e 31 e se o valor é positivo
    if (dia_pagamento < 1 || dia_pagamento > 31 || valor_mensalidade <= 0) {
        printf("Erro: Dia deve estar entre 1 e 31, e o valor da mensalidade deve ser positivo.\n");
        return 1; // Encerra o programa com erro
    }
    
    // Calcula o juros baseado no dia de pagamento
    if (dia_pagamento >= 1 && dia_pagamento <= 5) {
        juros = 0.0; // Nenhum acréscimo
    } else if (dia_pagamento >= 6 && dia_pagamento <= 10) {
        juros = valor_mensalidade * 0.05; // 5% de acréscimo
    } else if (dia_pagamento >= 11 && dia_pagamento <= 20) {
        juros = valor_mensalidade * 0.08; // 8% de acréscimo
    } else if (dia_pagamento >= 21 && dia_pagamento <= 31) {
        juros = valor_mensalidade * 0.10; // 10% de acréscimo
    }
    
    // Calcula o valor final
    valor_final = valor_mensalidade + juros;
    
    // Exibe os resultados
    printf("\nValor original da mensalidade: R$ %.2f\n", valor_mensalidade);
    printf("Valor correspondente ao juros: R$ %.2f\n", juros);
    printf("Valor final acrescido dos juros: R$ %.2f\n", valor_final);
    
    return 0; // Indica que o programa terminou com sucesso
}