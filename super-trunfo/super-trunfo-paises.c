#include <stdio.h>

int main() {

    // DECLARACAO DE VARIAVEIS
    char pais1[50] = "Argentina", pais2[50] = "Brasil";
    char codigo1[20] = "AR01", codigo2[20] = "BR02";
    char cidade1[50] = "Buenos Aires", cidade2[50] = "Rio de Janeiro";
    unsigned long int populacao1 = 2530000, populacao2 = 1960000;
    float area1 = 331.4, area2 = 435.0;
    float pib1 = 103, pib2 = 79;
    int atracoes1 = 45, atracoes2 = 40;
    float densidade_populacional1 = 7634.28, densidade_populacional2 = 4505.75;

    int atributo1, atributo2;
    float soma1 = 0, soma2 = 0;

    // IMPRESSAO DOS DADOS DA CARTA 1
    printf("\n***Carta 1***\n");
    printf("Pais: %s\n", pais1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Atracoes turisticas: %d\n", atracoes1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional1);

    // IMPRESSAO DOS DADOS DA CARTA 2
    printf("\n***Carta 2***\n");
    printf("Pais: %s\n", pais2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Atracoes turisticas: %d\n", atracoes2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional2);

    printf("_________________________________________________________\n");

    // MENU PARA ESCOLHER O 1 ATRIBUTO PARA COMPARAR
    printf("\n### Escolha o PRIMEIRO ATRIBUTO para comparar ###\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. N de Atracoes Turisticas\n");
    printf("5. Densidade Populacional\n");

    printf("\nDigite o numero que corresponde ao atributo desejado: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("\nEssa opcao nao existe. Tente novamente.\n");
        return 1;
    }

    printf("_________________________________________________________\n");
    
    // MENU PARA ESCOLHER O 2 ATRIBUTO PARA COMPARAR
    printf("\n### Escolha o SEGUNDO ATRIBUTO para comparar ###\n");
    
    switch (atributo1) {
    case 1:
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. N de Atracoes Turisticas\n");
        printf("5. Densidade Populacional\n");
        break;
    case 2:
        printf("1. Populacao\n");
        printf("3. PIB\n");
        printf("4. N de Atracoes Turisticas\n");
        printf("5. Densidade Populacional\n");
        break;
    case 3:
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("4. N de Atracoes Turisticas\n");
        printf("5. Densidade Populacional\n");
        break;
    case 4:
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("5. Densidade Populacional\n");
        break;
    case 5:
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. N de Atracoes Turisticas\n");
        break;
    }

    printf("\nDigite o numero que corresponde ao atributo desejado: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nVoce NAO pode escolher o mesmo atributo!\n");
        return 1;
    } else if (atributo2 < 1 || atributo2 > 5) {
        printf("\nEssa opcao nao existe. Tente novamente.\n");
        return 1;
    }

    printf("_________________________________________________________\n");

    printf("\n### RESULTADOS DAS COMPARACOES ###\n\n");

    // Comparacao da Populacao
    if (atributo1 == 1 || atributo2 == 1) {
        if (populacao1 == populacao2) {
            printf("Populacao - Empate! (%lu vs %lu)\n", populacao1, populacao2);
        } else {
            printf("Populacao - %s ganha (%lu vs %lu)\n", 
                (populacao1 > populacao2 ? pais1 : pais2), 
                (populacao1 > populacao2 ? populacao1 : populacao2), 
                (populacao1 > populacao2 ? populacao2 : populacao1));
        }
    }

    // Comparacao da Area
    if (atributo1 == 2 || atributo2 == 2) {
        if (area1 == area2) {
            printf("Area - Empate! (%.2f vs %.2f)\n", area1, area2);
        } else {
            printf("Area - %s ganha (%.2f vs %.2f)\n", 
                (area1 > area2 ? pais1 : pais2), 
                (area1 > area2 ? area1 : area2), 
                (area1 > area2 ? area2 : area1));
        }
    }

    // Comparacao do PIB
    if (atributo1 == 3 || atributo2 == 3) {
        if (pib1 == pib2) {
            printf("PIB - Empate! (%.2f vs %.2f)\n", pib1, pib2);
        } else {
            printf("PIB - %s ganha (%.2f vs %.2f)\n", 
                (pib1 > pib2 ? pais1 : pais2), 
                (pib1 > pib2 ? pib1 : pib2), 
                (pib1 > pib2 ? pib2 : pib1));
        }
    }

    // Comparacao do N de Atracoes Turisticas
    if (atributo1 == 4 || atributo2 == 4) {
        if (atracoes1 == atracoes2) {
            printf("Atracoes turisticas - Empate! (%d vs %d)\n", atracoes1, atracoes2);
        } else {
            printf("Atracoes turisticas - %s ganha (%d vs %d)\n", 
                (atracoes1 > atracoes2 ? pais1 : pais2), 
                (atracoes1 > atracoes2 ? atracoes1 : atracoes2), 
                (atracoes1 > atracoes2 ? atracoes2 : atracoes1));
        }
    }

    // Comparacao da Densidade Populacional
    if (atributo1 == 5 || atributo2 == 5) {
        if (densidade_populacional1 == densidade_populacional2) {
            printf("Densidade Populacional - Empate! (%.2f vs %.2f)\n", densidade_populacional1, densidade_populacional2);
        } else {
            printf("Densidade Populacional - %s ganha (%.2f vs %.2f)\n", 
                (densidade_populacional1 < densidade_populacional2 ? pais1 : pais2), 
                (densidade_populacional1 < densidade_populacional2 ? densidade_populacional1 : densidade_populacional2), 
                (densidade_populacional1 < densidade_populacional2 ? densidade_populacional2 : densidade_populacional1));
        }
    }

    printf("_________________________________________________________\n");

    // SOMA DOS ATRIBUTOS ESCOLHIDOS
    printf("\n### RESULTADO FINAL - SOMA DOS ATRIBUTOS ###\n\n");

    // Soma do primeiro atributo escolhido
    soma1 += (atributo1 == 1 ? populacao1 : 0);
    soma2 += (atributo1 == 1 ? populacao2 : 0);
    soma1 += (atributo1 == 2 ? area1 : 0);
    soma2 += (atributo1 == 2 ? area2 : 0);
    soma1 += (atributo1 == 3 ? pib1 : 0);
    soma2 += (atributo1 == 3 ? pib2 : 0);
    soma1 += (atributo1 == 4 ? atracoes1 : 0);
    soma2 += (atributo1 == 4 ? atracoes2 : 0);
    soma1 += (atributo1 == 5 ? densidade_populacional1 : 0);
    soma2 += (atributo1 == 5 ? densidade_populacional2 : 0);

    // Soma do segundo atributo escolhido
    soma1 += (atributo2 == 1 ? populacao1 : 0);
    soma2 += (atributo2 == 1 ? populacao2 : 0);
    soma1 += (atributo2 == 2 ? area1 : 0);
    soma2 += (atributo2 == 2 ? area2 : 0);
    soma1 += (atributo2 == 3 ? pib1 : 0);
    soma2 += (atributo2 == 3 ? pib2 : 0);
    soma1 += (atributo2 == 4 ? atracoes1 : 0);
    soma2 += (atributo2 == 4 ? atracoes2 : 0);
    soma1 += (atributo2 == 5 ? densidade_populacional1 : 0);
    soma2 += (atributo2 == 5 ? densidade_populacional2 : 0);

    // Exibicao dos resultados finais
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    // Determinacao do vencedor
    if (soma1 > soma2) {
        printf("\nVencedor: %s\n", pais1);
    } else if (soma1 < soma2) {
        printf("\nVencedor: %s\n", pais2);
    } else {
        printf("\nEmpate!\n");
    }

    printf("_________________________________________________________\n");

    // FIM
    return 0;
}
