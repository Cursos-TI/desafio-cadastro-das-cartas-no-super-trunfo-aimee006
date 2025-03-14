#include <stdio.h>

int main() {

    // DECLARACAO DE VARIAVEIS
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int atracoes1, atracoes2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float superPoder1, superPoder2;

    // DIGITAR PRIMEIRA CARTA
    printf("\nDigite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de atracoes turisticas: ");
    scanf("%d", &atracoes1);

    // CALCULO DA DENSIDADE POPULACIONAL E DO PIB PER CAPITA DA PRIMEIRA CARTA
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;

    // CALCULO DO SUPER PODER DA PRIMEIRA CARTA
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)atracoes1 + (1 / densidade_populacional1) + pib_per_capita1;

    // IMPRESSAO DOS DADOS DA PRIMEIRA CARTA
    printf("\n***Carta 1***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Atracoes turisticas: %d\n", atracoes1);
    printf("Densidade populacional: %.2f hab/km\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder: %.2f\n", superPoder1);

    // DIGITAR SEGUNDA CARTA
    printf("\nDigite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de atracoes turisticas: ");
    scanf("%d", &atracoes2);

    // CALCULO DA DENSIDADE POPULACIONAL E DO PIB PER CAPITA DA SEGUNDA CARTA
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;

    // CALCULO DO SUPER PODER DA SEGUNDA CARTA
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)atracoes2 + (1 / densidade_populacional2) + pib_per_capita2;

    // IMPRESSAO DOS DADOS DA SEGUNDA CARTA
    printf("\n***Carta 2***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Atracoes turisticas: %d\n", atracoes2);
    printf("Densidade populacional: %.2f hab/km\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Super poder: %.2f\n", superPoder2);


    // COMPARACAO DE ATRIBUTOS
    printf("\n***Comparacao: Atributo Populacao***\n");
    printf("Carta 1: %s - %lu\n", cidade1, populacao1);
    printf("Carta 2: %s - %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparacao: Atributo Area***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, area1);
    printf("Carta 2: %s - %.2f\n", cidade2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparacao: Atributo PIB***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, pib1);
    printf("Carta 2: %s - %.2f\n", cidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparacao: Atributo Atracoes Turisticas***\n");
    printf("Carta 1: %s - %d\n", cidade1, atracoes1);
    printf("Carta 2: %s - %d\n", cidade2, atracoes2);

    if (atracoes1 > atracoes2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparacao: Atributo Densidade Populacional***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, densidade_populacional1);
    printf("Carta 2: %s - %.2f\n", cidade2, densidade_populacional2);

    if (densidade_populacional1 < densidade_populacional2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparacao: Atributo PIB per capita***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, pib_per_capita1);
    printf("Carta 2: %s - %.2f\n", cidade2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparacao: Super Poder***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, superPoder1);
    printf("Carta 2: %s - %.2f\n", cidade2, superPoder2);

    if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    // FIM
    return 0;
}
