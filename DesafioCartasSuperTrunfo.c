#include <stdio.h>

int main()[

    char estado1, estado2;
    char codigodacarta1[20], codigodacarta2[20];
    char nomedacidade1[30], nomedacidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numerodepontosturisticos1, numerodepontosturisticos2;

    printf("Carta 1:\n");

        printf("Estado: ");
        scanf("%c, &estado1 \n");

        printf("Insira o código da carta: ");
        scanf("%s, &codigodacarta1 \n");

        printf("Nome da cidade: ");
        scanf("%s, &nomedacidade1 \n");

        printf("População da cidade: ");
        scanf("%d, &populacao1 \n");

        printf("Área da cidade: ");
        scanf("%f, &area1 \n");

        printf("Pib da cidade: ");
        scanf("%f, &pib1 \n");

        printf("Quantidade de pontos turísticos da cidade: ");
        scanf("%d, &numerodepontosturisticos1 \n");

    printf("Carta 2:\n");

        printf("Estado: ");
        scanf("%c, &estado2 \n");

        printf("Insira o código da carta: ");
        scanf("%s, &codigodacarta2 \n");

        printf("Nome da cidade: ");
        scanf("%s, &nomedacidade2 \n");

        printf("População da cidade: ");
        scanf("%d, &populacao2 \n");

        printf("Área da cidade: ");
        scanf("%f, &area2 \n");

        printf("Pib da cidade: ");
        scanf("%f, &pib2 \n");

        printf("Quantidade de pontos turísticos da cidade: ");
        scanf("%d, &numerodepontosturisticos2 \n");
    
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigodacarta1);
        printf("Nome da cidade: %s\n", nomedacidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);

        printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigodacarta2);
        printf("Nome da cidade: %s\n", nomedacidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %f\n", area2);
        printf("PIB: %f\n", pib2);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);

    return 0;
]