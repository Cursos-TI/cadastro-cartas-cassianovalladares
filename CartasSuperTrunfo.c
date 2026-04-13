#include <stdio.h>
int main() {

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível aventureiro é adicionado o cálculo e exibição da densidade populacional e do PIB per capita;

    char estado1, codigo_carta1[3], cidade1[50];
    int populacao1, qtd_pontos_turisticos1;
    float area1, pib1, densidade1, pib_capita1, superpoder1;
    char estado2, codigo_carta2[3], cidade2[50];
    int populacao2, qtd_pontos_turisticos2;
    float area2, pib2, densidade2, pib_capita2, superpoder2;
    int resultado_populacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade_pop, resultado_pib_capita, resultado_superpoder;

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

    // CALCULANDO DENSIDADE, PIB PER CAPITA E SUPERPODER

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_capita1 = (pib1 * 1000000000) / populacao1; // pib x 1 bilhão
    pib_capita2 = (pib2 * 1000000000) / populacao2; // pib x 1 bilhão
    superpoder1 = populacao1 + area1 + pib1 + qtd_pontos_turisticos1 + pib_capita1 + (1/densidade1);
    superpoder2 = populacao2 + area2 + pib2 + qtd_pontos_turisticos2 + pib_capita2 + (1/densidade2);
    
    // COMPARANDO ATRIBUTOS DAS DUAS CARTAS
    
    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_pontos_turisticos = qtd_pontos_turisticos1 > qtd_pontos_turisticos2;
    resultado_densidade_pop = densidade1 < densidade2; // quanto menor, melhor
    resultado_pib_capita = pib_capita1 > pib_capita2;
    resultado_superpoder = superpoder1 > superpoder2;
         
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
    printf("Superpoder: %.2f\n", superpoder1);
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
    printf("Superpoder: %.2f\n", superpoder2);
    printf("\n");
    
    printf("Comparação de Cartas:\n");
    if(resultado_populacao) {printf("População: Carta 1 venceu (%d)\n", resultado_populacao);
    } else {printf("População: Carta 2 venceu (%d)\n", resultado_populacao);
    }

    if(resultado_area) {printf("Área: Carta 1 venceu (%d)\n", resultado_area);
    } else {printf("Área: Carta 2 venceu (%d)\n", resultado_area);
    }

    if(resultado_pib) {printf("PIB: Carta 1 venceu (%d)\n", resultado_pib);
    } else {printf("PIB: Carta 2 venceu (%d)\n", resultado_pib);
    }

    if(resultado_pontos_turisticos) {printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado_pontos_turisticos);
    } else {printf("Pontos Turísticos: Carta 2 venceu (%d)\n", resultado_pontos_turisticos);
    }

    if(resultado_densidade_pop) {printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultado_densidade_pop);
    } else {printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultado_densidade_pop);
    }

    if(resultado_pib_capita) {printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado_pib_capita);
    } else {printf("PIB per Capita: Carta 2 venceu (%d)\n", resultado_pib_capita);
    }

    if(resultado_superpoder) {printf("Super Poder: Carta 1 venceu (%d)\n", resultado_superpoder);
    } else {printf("Super Poder: Carta 2 venceu (%d)\n", resultado_superpoder);
    }

    return 0;
}
