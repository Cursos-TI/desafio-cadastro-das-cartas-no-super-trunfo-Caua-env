#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado_1[50];
    char codigo_da_carta_1[50];
    char nome_da_cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int num_pontos_turisticos_1;


    char estado_2[50];
    char codigo_da_carta_2[50];
    char nome_da_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int num_pontos_turisticos_2;


    printf("*** Super-Trunfo 1.0 ***\n");

    printf("Cadastro da Carta 1\n");

    printf("Digite um Estado: ");
    scanf("%s", estado_1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao_1);

    printf("Digite a area: ");
    scanf("%f", &area_1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos_1);

    float densidade_populacional_1 = populacao_1 /area_1;
    float pib_per_capita_1 = pib_1 / populacao_1;

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Codigo da Carta: %s\n", codigo_da_carta_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n", num_pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per capita: R$%.2f\n", pib_per_capita_1);

    printf("\nCadastro da Carta 2!\n");

    printf("Digite um Estado: ");
    scanf("%s", estado_2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao_2);

    printf("Digite a area: ");
    scanf("%f", &area_2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos_2);

    float densidade_populacional_2 = populacao_2 /area_2;
    float pib_per_capita_2 = pib_2 / populacao_2;

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Codigo da Carta: %s\n", codigo_da_carta_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f\n", area_2);
    printf("PIB: %.2f km²\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", num_pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per capita: R$%.2f", pib_per_capita_2);

    return 0;
}
