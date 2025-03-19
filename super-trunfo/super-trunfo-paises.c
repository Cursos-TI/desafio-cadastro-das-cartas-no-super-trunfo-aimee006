#include <stdio.h>

int main()
{

    // DECLARAÇÃO DE VARIÁVEIS DIRETAMENTE NO CÓDIGO
    char país1[50] = "Argentina", país2[50] = "Brasil";
    char código1[20] = "AR01", código2[20] = "BR02";
    char cidade1[50] = "Buenos Aires", cidade2[50] = "Rio de Janeiro";
    unsigned long int população1 = 2530000, população2 = 1960000;
    float área1 = 331.4, área2 = 435.0;
    float pib1 = 103, pib2 = 79;
    int atrações1 = 45, atrações2 = 40;
    float densidade_populacional1 = 7634.28, densidade_populacional2 = 4505.75;

    int atributo;

    // IMPRESSÃO DOS DADOS DA CARTA 1
    printf("\n***Carta 1***\n");
    printf("País: %s\n", país1);
    printf("Código: %s\n", código1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", população1);
    printf("Área: %.2f km²\n", área1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Atrações turísticas: %d\n", atrações1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);

    // IMPRESSÃO DOS DADOS DA SEGUNDA CARTA
    printf("\n***Carta 2***\n");
    printf("País: %s\n", país2);
    printf("Código: %s\n", código2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", população2);
    printf("Área: %.2f km²\n", área2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Atrações turísticas: %d\n", atrações2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);

    // MENU PARA ESCOLHER ATRIBUTO PARA COMPARAR
    printf("\n### ESCOLHA UM ATRIBUTO PARA COMPARAR ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. N° de Atrações Turísticas\n");
    printf("5. Densidade Populacional\n");
    printf("\nDigite o número que corresponde ao atributo desejado: ");
    scanf("%d", &atributo);

    // RESULTADOS DAS COMPARAÇÕES
    switch (atributo)
    {
    case 1:
        printf("\n***Comparação: População***\n");
        printf("Carta 1: %s - %lu\n", país1, população1);
        printf("Carta 2: %s - %lu\n", país2, população2);

        if (atributo == 1)
        {
            if (população1 > população2)
            {
                printf("Resultado: Carta 1 venceu nesse atributo!\n");
            }
            else if (população2 > população1)
            {
                printf("Resultado: Carta 2 venceu nesse atributo!\n");
            }
            else
            {
                printf("Empate! As populações são iguais.\n");
            }
        }
        break;
    case 2:
        printf("\n***Comparação: Área***\n");
        printf("Carta 1: %s - %.2f\n", país1, área1);
        printf("Carta 2: %s - %.2f\n", país2, área2);

        if (atributo == 2)
        {
            if (área1 > área2)
            {
                printf("Resultado: Carta 1 venceu nesse atributo!\n");
            }
            else if (área2 > área1)
            {
                printf("Resultado: Carta 2 venceu nesse atributo!\n");
            }
            else
            {
                printf("Empate! As áreas são iguais.\n");
            }
        }
        break;
    case 3:
        printf("\n***Comparação: PIB***\n");
        printf("Carta 1: %s - %.2f\n", país1, pib1);
        printf("Carta 2: %s - %.2f\n", país2, pib2);

        if (atributo == 3)
        {
            if (pib1 > pib2)
            {
                printf("Resultado: Carta 1 venceu nesse atributo!\n");
            }
            else if (pib2 > pib1)
            {
                printf("Resultado: Carta 2 venceu nesse atributo!\n");
            }
            else
            {
                printf("Empate! Os PIBs são iguais.\n");
            }
        }
        break;
    case 4:
        printf("\n***Comparação: Atrações Turísticas***\n");
        printf("Carta 1: %s - %d\n", país1, atrações1);
        printf("Carta 2: %s - %d\n", país2, atrações2);

        if (atributo == 4)
        {
            if (atrações1 > atrações2)
            {
                printf("Resultado: Carta 1 venceu nesse atributo!\n");
            }
            else if (atrações2 > atrações1)
            {
                printf("Resultado: Carta 2 venceu nesse atributo!\n");
            }
            else
            {
                printf("Empate! O n° de atrações turísticas são iguais.\n");
            }
        }
        break;
    case 5:
        printf("\n***Comparação: Densidade Populacional***\n");
        printf("Carta 1: %s - %.2f\n", país1, densidade_populacional1);
        printf("Carta 2: %s - %.2f\n", país2, densidade_populacional2);

        if (atributo == 5)
        {
            if (densidade_populacional1 < densidade_populacional2)
            {
                printf("Resultado: Carta 1 venceu nesse atributo!\n");
            }
            else if (densidade_populacional2 < densidade_populacional1)
            {
                printf("Resultado: Carta 2 venceu nesse atributo!\n");
            }
            else
            {
                printf("Empate! As densidades populacionais são iguais.\n");
            }
        }
        break;

    default:
        printf("\nOpção inválida. Tente novamente.\n");
        break;
    }

    // FIM
    return 0;
}
