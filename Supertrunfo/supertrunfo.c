#include <stdio.h>

int main() {
    char estado1[10], nomedecidade1[20], codigodacarta1[25];
    int populacao1, pontoturistico1;
    float pib1, area1;

    char estado2[10], nomedecidade2[20], codigodacarta2[25];
    int populacao2, pontoturistico2;
    float pib2, area2;
// carta 1
    printf("cadrastro da carta 1; \n");
    printf("informe um estado de (A-H):\n");
    scanf(" %s", &estado1);

    printf("A letra do estado com um número de 01 a 04 (ex: A01):\n");
    scanf("%s", &codigodacarta1);

    printf("nome da cidade:\n");
    scanf("%s", &nomedecidade1);

    printf("população da cidade:\n");
    scanf("%d", &populacao1);

    printf("pontos turisticos:\n");
    scanf("%d", &pontoturistico1);

    printf("O Produto Interno Bruto da cidade(PIB):\n");
    scanf("%f", &pib1);

    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    //carta 2
    printf("cadrastro da carta 2; \n");
    printf("informe um estado de (A-H):\n");
    scanf("%s", &estado2);

    printf("A letra do estado com um número de 01 a 04 (ex: A01):\n");
    scanf("%s", &codigodacarta2);

    printf("nome da cidade:\n");
    scanf("%s", &nomedecidade2);

    printf("população da cidade:\n");
    scanf("%d", &populacao2);

    printf("pontos turisticos:\n");
    scanf("%d", &pontoturistico2);

    printf("O Produto Interno Bruto da cidade(PIB):\n");
    scanf("%f", &pib2);

    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    //carta 1
    printf("estado: %s\n", estado1);
    printf("codigo: %s\n", codigodacarta1);
    printf("cidade: %s\n", nomedecidade1);
    printf("população: %d\n", populacao1);
    printf("ponto turistico: %d\n", pontoturistico1);
    printf("PIB: R$%.2f\n", pib1);
    printf("area: %.2f km²\n", area1);

    printf("\n");

    //carta 2
    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigodacarta2);
    printf("cidade: %s\n", nomedecidade2);
    printf("população: %d\n", populacao2);
    printf("ponto turistico: %d\n", pontoturistico2);
    printf("PIB: R$%.2f\n", pib2);
    printf("area: %.2f km²\n", area2);

    return 0;
}