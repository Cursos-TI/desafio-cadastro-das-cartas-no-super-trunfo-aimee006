#include <stdio.h>

int main() {

    // DECLARAÇÃO DE VARIÁVEIS
    char estado1, estado2;
    char código1[20], código2[20];
    char cidade1[50], cidade2[50];
    unsigned long int população1, população2;
    float área1, área2;
    float pib1, pib2;
    int atrações1, atrações2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float superPoder1, superPoder2;

    // DIGITAR PRIMEIRA CARTA
    printf("\nDigite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código: ");
    scanf("%s", código1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &população1);

    printf("Digite a área em km²: ");
    scanf("%f", &área1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de atrações turísticas: ");
    scanf("%d", &atrações1);

    // CÁLCULO DA DENSIDADE POPULACIONAL E DO PIB PER CAPITA DA PRIMEIRA CARTA
    densidade_populacional1 = (float)população1 / área1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)população1;

    // CÁLCULO DO SUPER PODER DA PRIMEIRA CARTA
    superPoder1 = (float)população1 + área1 + pib1 + (float)atrações1 + (1 / densidade_populacional1) + pib_per_capita1;

    // IMPRESSÃO DOS DADOS DA PRIMEIRA CARTA
    printf("\n***Carta 1***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", código1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", população1);
    printf("Área: %.2f km²\n", área1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Atrações turísticas: %d\n", atrações1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder: %.2f\n", superPoder1);

    // DIGITAR SEGUNDA CARTA
    printf("\nDigite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código: ");
    scanf("%s", código2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &população2);

    printf("Digite a área em km²: ");
    scanf("%f", &área2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de atrações turísticas: ");
    scanf("%d", &atrações2);

    // CÁLCULO DA DENSIDADE POPULACIONAL E DO PIB PER CAPITA DA SEGUNDA CARTA
    densidade_populacional2 = (float)população2 / área2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)população2;

    // CÁLCULO DO SUPER PODER DA SEGUNDA CARTA
    superPoder2 = (float)população2 + área2 + pib2 + (float)atrações2 + (1 / densidade_populacional2) + pib_per_capita2;

    // IMPRESSÃO DOS DADOS DA SEGUNDA CARTA
    printf("\n***Carta 2***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", código2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", população2);
    printf("Área: %.2f km²\n", área2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Atrações turísticas: %d\n", atrações2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Super poder: %.2f\n", superPoder2);


    // COMPARAÇÃO DE ATRIBUTOS
    printf("\n***Comparação: Atributo População***\n");
    printf("Carta 1: %s - %lu\n", cidade1, população1);
    printf("Carta 2: %s - %lu\n", cidade2, população2);

    if (população1 > população2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparação: Atributo Área***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, área1);
    printf("Carta 2: %s - %.2f\n", cidade2, área2);

    if (área1 > área2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparação: Atributo PIB***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, pib1);
    printf("Carta 2: %s - %.2f\n", cidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparação: Atributo Atrações Turísticas***\n");
    printf("Carta 1: %s - %d\n", cidade1, atrações1);
    printf("Carta 2: %s - %d\n", cidade2, atrações2);

    if (atrações1 > atrações2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparação: Atributo Densidade Populacional***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, densidade_populacional1);
    printf("Carta 2: %s - %.2f\n", cidade2, densidade_populacional2);

    if (densidade_populacional1 < densidade_populacional2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparação: Atributo PIB per capita***\n");
    printf("Carta 1: %s - %.2f\n", cidade1, pib_per_capita1);
    printf("Carta 2: %s - %.2f\n", cidade2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 venceu nesse atributo!\n");
    } else {
        printf("Resultado: Carta 2 venceu nesse atributo!\n");
    }

    printf("\n***Comparação: Super Poder***\n");
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
