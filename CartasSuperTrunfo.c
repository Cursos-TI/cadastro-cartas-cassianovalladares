#include <stdio.h>
int main() {

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível aventureiro é adicionado o cálculo e exibição da densidade populacional e do PIB per capita;

    char estado1, codigo_carta1[3], cidade1[50];
    int populacao1, qtd_pontos_turisticos1;
    float area1, pib1, densidade1, pib_capita1;
    char estado2, codigo_carta2[3], cidade2[50];
    int populacao2, qtd_pontos_turisticos2;
    float area2, pib2, densidade2, pib_capita2;

    // RECEBENDO DADOS DO PRIMEIRO USUÁRIO
            
    printf("Dados da Carta 1\n");
    printf("Digite o Estado (A-H): "); // o usuário digita de A a H, representando um dos 8 estados disponíveis
    scanf("%c", &estado1);

    printf("Digite o código da carta (2 Números): ");
    scanf("%s", codigo_carta1);

    printf("Digite nome da cidade: "); // só aceita nomes únicos, sem espaços;
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtd_pontos_turisticos1);
    printf("\n");

     // RECEBENDO DADOS DO SEGUNDO USUÁRIO
            
    printf("Dados da Carta 2\n");
    printf("Digite o Estado (A-H): "); // o usuário digita de A a H, representando um dos 8 estados disponíveis
    scanf(" %c", &estado2);

    printf("Digite o código da carta (2 Números): ");
    scanf("%s", codigo_carta2);

    printf("Digite nome da cidade: "); // só aceita nomes únicos, sem espaços;
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtd_pontos_turisticos2);
    printf("\n");

    // CALCULANDO DENSIDADE E PIB PER CAPITA

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_capita1 = (pib1 * 1000000000) / populacao1; // pib x 1 bilhão
    pib_capita2 = (pib2 * 1000000000) / populacao2; // pib x 1 bilhão    
    
    // RETORNANDO OS DADOS PARA OS USUÁRIOS

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: R$ %.2f (em bilhões)\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_capita1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: R$ %.2f (em bilhões)\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_capita2);

    return 0;
}
