#include <stdio.h>

int main() {

        // DECLARAÇÃO DE VARIÁVEIS

    char estado;
    char código [20];
    char cidade [50];
    int população;
    float área;
    float pib;
    int atrações;

        // DIGITAR PRIMEIRA CARTA

    printf("\nDigite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o código: ");
    scanf("%s", código);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &população);

    printf("Digite a área em km²: ");
    scanf("%f", &área);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de atrações turísticas: ");
    scanf("%d", &atrações);

        // IMPRESSÃO DOS DADOS DA PRIMEIRA CARTA

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", código);
    printf("Cidade: %s\n", cidade);
    printf("População: %d de habitantes\n", população);
    printf("Área: %.2f km²\n", área);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Atrações turísticas: %d\n", atrações);

        // DIGITAR SEGUNDA CARTA

    printf("\nDigite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o código: ");
    scanf("%s", código);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &população);

    printf("Digite a área em km²: ");
    scanf("%f", &área);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de atrações turísticas: ");
    scanf("%d", &atrações);

        // IMPRESSÃO DOS DADOS DA SEGUNDA CARTA

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", código);
    printf("Cidade: %s\n", cidade);
    printf("População: %d de habitantes\n", população);
    printf("Área: %.2f km²\n", área);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Atrações turísticas: %d\n", atrações);

        // FIM

    return 0;
}