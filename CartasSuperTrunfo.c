#include <stdio.h>
#include <string.h>

int main() {
    // Inicializacao de variaveis:
    char pais_1[50], estado_1[50], cidade_1[50];
    int  pontosTuristicos_1,  ponto_1;
    float area_1, PIB_1;
    float densidadePopulacional_1, PIB_per_Capita_1, superPoder_1;

    char pais_2[50], estado_2[50], cidade_2[50];
    int  pontosTuristicos_2, ponto_2;
    float area_2, PIB_2;
    float densidadePopulacional_2, PIB_per_Capita_2, superPoder_2;
    ponto_1 = ponto_2 = 0;

    unsigned long int populacao_1, populacao_2;
    
    // Input de dados via terminal:   
    /*
    printf("CARTA 1\n");
    printf("Digite o nome do pais: "); // Brasil
    scanf(" %[^\n]", pais_1);
    printf("Digite o nome do estado: "); // Sao Paulo
    scanf(" %[^\n]", estado_1);
    printf("Digite o nome da cidade: "); // Santos
    scanf(" %[^\n]", cidade_1);
    printf("Digite a area da cidade (km²): "); // 280674
    scanf("%f", &area_1);
    printf("Digite a populacao da cidade: "); // 418608
    scanf("%lu", &populacao_1);
    printf("Digite o PIB da cidade (milhoes): "); // 22.073
    scanf("%f", &PIB_1);
    printf("Digite o numero de pontos turísticos da cidade: "); // 13
    scanf("%d", &pontosTuristicos_1);

    printf("CARTA 2\n");
    printf("Digite o nome do pais: "); // Brasil
    scanf(" %[^\n]", pais_2);
    printf("Digite o nome do estado: "); // Sao Paulo
    scanf(" %[^\n]", estado_2);
    printf("Digite o nome da cidade: "); // Guaruja
    scanf(" %[^\n]", cidade_2);
    printf("Digite a area da cidade (km²): "); // 142589
    scanf("%f", &area_2);
    printf("Digite a populacao da cidade: "); // 287634
    scanf("%lu", &populacao_2);
    printf("Digite o PIB da cidade (milhoes): "); // 3.221
    scanf("%f", &PIB_2);
    printf("Digite o numero de pontos turísticos da cidade: "); // 6
    scanf("%d", &pontosTuristicos_2);
    */
    // Valores pre-definidos a fim de teste:
    strncpy(pais_1, "Brasil", 49);
    strncpy(estado_1, "Sao Paulo", 49);
    strncpy(cidade_1, "Santos", 49);
    area_1 = 280674;
    populacao_1 = 418608;
    PIB_1 =  22.073;
    pontosTuristicos_1 =  13;

    strncpy(pais_2, "Brasil", 49);
    strncpy(estado_2, "Sao Paulo", 49);
    strncpy(cidade_2, "Guaruja", 49);
    area_2 = 142589;
    populacao_2 = 287634;
    PIB_2 =  3.221;
    pontosTuristicos_2 =  6;

    // Calculo automatico de: densidadePopulacional, PIB_per_capita e superPoder:
    densidadePopulacional_1 = 1000 * populacao_1 / area_1;
    PIB_per_Capita_1 = 1000 * 1000 * 1000  * PIB_1 / populacao_1;
    superPoder_1 = ((1/densidadePopulacional_1) + area_1 + populacao_1 + PIB_1 + PIB_per_Capita_1 + pontosTuristicos_1) / 1000 / 100;
    densidadePopulacional_2 = 1000 * populacao_2 / area_2;
    PIB_per_Capita_2 = 1000 * 1000 * 1000  * PIB_2 / populacao_2;
    superPoder_2 = ((1/densidadePopulacional_2) + area_2 + populacao_2 + PIB_2 + PIB_per_Capita_2 + pontosTuristicos_2) / 1000 / 100;
   
    // Output de dados via terminal:
    printf("\n-------------------------\n");
    printf("-- CARTA 1 --\n");
    printf("Cidade: %s - %s - %s\n", cidade_1, estado_1, pais_1);
    printf("Area: %.2f km²\n", area_1);
    printf("Populacao: %lu habitantes\n", populacao_1);
    printf("PIB: R$ %.2f milhoes\n", PIB_1);
    printf("Pontos turisticos: %d\n", pontosTuristicos_1);
    printf("-- Calculados --\n");
    printf("Densidade Populacional: %.1f hab./km²\n", densidadePopulacional_1);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_Capita_1);
    printf("Super Poder:  %.3f pontos\n", superPoder_1);
    printf("\n-------------------------\n");

    printf("\n-------------------------\n");
    printf("-- CARTA 2 --\n");
    printf("Cidade: %s - %s - %s\n", cidade_2, estado_2, pais_2);
    printf("Area: %.2f km²\n", area_2);
    printf("Populacao: %lu habitantes\n", populacao_2);
    printf("PIB: R$ %.2f milhoes\n", PIB_2);
    printf("Pontos turisticos: %d\n", pontosTuristicos_2);
    printf("-- Calculados --\n");
    printf("Densidade Populacional: %.1f hab./km²\n", densidadePopulacional_2);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_Capita_2);
    printf("Super Poder:  %.3f pontos\n", superPoder_2);
    printf("\n-------------------------\n");

    // EMBATE (PAUSADO NO T2_NOVATO)
    /*
    printf("-- EMBATE: %s vs %s --\n\n", cidade_1, cidade_2);
    printf("Area: %d \n", area_1 > area_2 ? (ponto_1++, 1) : (ponto_2++, 0));
    printf("Populacao: %d \n", populacao_1 > populacao_2 ? (ponto_1++, 1) : (ponto_2++, 0));
    printf("PIB: %d \n", PIB_1 > PIB_2 ? (ponto_1++, 1) : (ponto_2++, 0));
    printf("Pontos Turisticos: %d \n", pontosTuristicos_1 > pontosTuristicos_2 ? (ponto_1++, 1) : (ponto_2++, 0));
    printf("Densidade Populacional: %d \n", densidadePopulacional_1 < densidadePopulacional_2 ? (ponto_1++, 1) : (ponto_2++, 0));
    printf("PIB per Capita: %d \n", PIB_per_Capita_1 > PIB_per_Capita_2 ? (ponto_1++, 1) : (ponto_2++, 0));
    printf("Super Poder: %d \n", superPoder_1 > superPoder_2 ? (ponto_1++, 1) : (ponto_2++, 0));
    printf("\nPONTOS: %s: %d - %s: %d \n", cidade_1, ponto_1, cidade_2, ponto_2);
    ponto_1 > ponto_2 ? printf("Carta 1: %s vencedora\n", cidade_1) : printf("Carta 2: %s vencedora\n", cidade_2);
    */

    // T2 Desafio Novato: Comparação de atributo

    printf("Comparação de cartas (Atributo: Área):\n\n");
    printf("Carta 1 - %s (%s): %.0f km²\n", cidade_1, estado_1, area_1);
    printf("Carta 2 - %s (%s): %.0f km²\n", cidade_2, estado_2, area_2);
    if(area_1 > area_2){
        printf("RESULTADO: Carta 1: %s venceu!\n", cidade_1);
    } else {
        printf("RESULTADO: Carta 2: %s venceu!\n", cidade_2);
    }
    
    return 0;
}