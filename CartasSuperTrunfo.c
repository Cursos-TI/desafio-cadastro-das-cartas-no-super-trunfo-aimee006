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

    // IMPRESSÃO DOS RESULTADOS DA COMPARAÇÃO
    printf("\n***Resultado da comparação***\n");
    printf("População: %d\n", população1 > população2);
    printf("Área: %d\n", área1 > área2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Atrações turísticas: %d\n", atrações1 > atrações2);
    printf("Densidade populacional: %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super poder: %d\n", superPoder1 > superPoder2);

    // FIM
    return 0;
}
