#include <stdio.h>

int main() {

        // DECLARAÇÃO DE VARIÁVEIS

    char estado;
    char codigo [20];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int atracoes;

        // DIGITAR PRIMEIRA CARTA

    printf("\nDigite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo: ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de atracoes turisticas: ");
    scanf("%d", &atracoes);

        // IMPRESSÃO DOS DADOS DA PRIMEIRA CARTA

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Atracoes turisticas: %d\n", atracoes);

        // DIGITAR SEGUNDA CARTA

    printf("\nDigite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo: ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de atracoes turisticas: ");
    scanf("%d", &atracoes);

        // IMPRESSÃO DOS DADOS DA SEGUNDA CARTA

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d de habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Atracoes turisticas: %d\n", atracoes);

        // FIM

    return 0;
}
