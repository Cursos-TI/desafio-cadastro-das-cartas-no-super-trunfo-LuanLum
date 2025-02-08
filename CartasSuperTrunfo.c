#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Cada país será dividido em 8 estados, identificados com letra de A até H. Cada estado tera 4 cidades, de 1 até 4.
// A combinação da letra do estado e o número da cidade define o código da carta (A01, A02, A03, A04, B01, B02...)

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
    // Inicializacao de variaveis:
    char pais[50], estado[50], cidade[50];
    int  pontosTuristicos, populacao;
    float area, PIB;
    float densidadePopulacional, PIB_per_Capita, superPoder;
    
    // Input de dados via terminal:   
    printf("Digite o nome do pais: "); // Brasil
    scanf(" %[^\n]", pais);
    printf("Digite o nome do estado: "); // Sao Paulo
    scanf(" %[^\n]", estado);
    printf("Digite o nome da cidade: "); // Santos
    scanf(" %[^\n]", cidade);
    printf("Digite a area da cidade (km²): "); // 280674
    scanf("%f", &area);
    printf("Digite a populacao da cidade: "); // 418608
    scanf("%d", &populacao);
    printf("Digite o PIB da cidade (milhoes): "); // 22.073
    scanf("%f", &PIB);
    printf("Digite o numero de pontos turísticos da cidade: "); // 13
    scanf("%d", &pontosTuristicos);

    // Valores pre-definidos a fim de teste:
    /*
    strncpy(pais, "Brasil", 49);
    strncpy(estado, "Sao Paulo", 49);
    strncpy(cidade, "Santos", 49);
    area = 280674;
    populacao = 418608;
    PIB =  22.073;
    pontosTuristicos =  13;
    */

    // Calculo automatico de: densidadePopulacional, PIB_per_capita e superPoder:
    densidadePopulacional = 1000 * populacao / area;
    PIB_per_Capita = 1000 * 1000 * 1000  * PIB / populacao;
    superPoder = (area + populacao + PIB_per_Capita) / 1000 / 100;
   
    // Output de dados via terminal:
    printf("\n-------------------------\n");
    printf("Cidade: %s - %s - %s\n", cidade, estado, pais);
    printf("Area: %.2f km²\n", area);
    printf("Populacao: %d habitantes\n", populacao);
    printf("PIB: R$ %.2f milhoes\n", PIB);
    printf("Pontos turisticos: %d\n", pontosTuristicos);
    printf("------------\n");
    printf("Densidade Populacional: %.1f hab./km²\n", densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_Capita);
    printf("Super Poder:  %.3f pontos\n", superPoder);
    printf("\n-------------------------\n");

    return 0;
}