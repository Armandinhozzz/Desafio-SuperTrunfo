#include <stdio.h>

int main() {
    // Carta 1
    int populacao1 = 46000000;
    int turisticos1 = 6;
    float area1 = 1521.20;
    float pib1 = 3500000000000;
    char estado1[] = "Sao Paulo";
    char codigo1[] = "S02";
    char cidade1[] = "Sao Paulo Capital";

    // Carta 2
    int populacao2 = 17000000;
    int turisticos2 = 12;
    float area2 = 2000.50;
    float pib2 = 2500000000000;
    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "R01";
    char cidade2[] = "Rio de Janeiro Capital";

    // Imprimindo carta 1
    printf("CARTA 1\n");
    printf("Populacao: %d\n", populacao1);
    printf("Numero de Pontos Turisticos: %d\n", turisticos1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n\n", cidade1);

    // Imprimindo carta 2
    printf("CARTA 2\n");
    printf("Populacao: %d\n", populacao2);
    printf("Numero de Pontos Turisticos: %d\n", turisticos2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);

    return 0;
}