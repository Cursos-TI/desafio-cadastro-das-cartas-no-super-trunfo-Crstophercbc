#include <stdio.h>

int main(){

// Declarando as variaveis para cada atributo a seguir:
    
    char estado1, estado2;
    char codigodacarta1[50], codigodacarta2[50];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidpopulacional1, densidpopulacional2;
    float pibpercapita1, pibpercapita2;

// Cadastro das Cartas a seguir:
// Utilisei a função printf para imprimir uma mensagem na tela do usuario.
// Utilisei a função scanf para capturar as entradas do usuário para cada atributo.

    printf("Carta 1:\n");

        printf("Insira uma letra referente ao Estado: ");
        scanf("%c", &estado1);

        printf("Insira o código da carta: ");
        scanf("%s", &codigodacarta1);

        printf("Nome da cidade: ");
        scanf("%s", &nomedacidade1);

        printf("População da cidade: ");
        scanf("%d", &populacao1);

        printf("Área da cidade: ");
        scanf("%f", &area1);

        printf("Pib da cidade: ");
        scanf("%f", &pib1);

        printf("Quantidade de pontos turísticos da cidade: ");
        scanf("%d", &numerodepontosturisticos1);

            densidpopulacional1 = populacao1 / area1;
            pibpercapita1 = pib1 / populacao1;

    printf("Carta 2:\n");

        printf("Insira uma letra referente ao Estado: ");
        scanf(" %c", &estado2);

        printf("Insira o código da carta: ");
        scanf("%s", &codigodacarta2);

        printf("Nome da cidade: ");
        scanf("%s", &nomedacidade2);

        printf("População da cidade: ");
        scanf("%d", &populacao2);

        printf("Área da cidade: ");
        scanf("%f", &area2);

        printf("Pib da cidade: ");
        scanf("%f", &pib2);

        printf("Quantidade de pontos turísticos da cidade: ");
        scanf("%d", &numerodepontosturisticos2);

            densidpopulacional2 = populacao2 / area2;
            pibpercapita2 = pib2 / populacao2;
    
// Exibição dos Dados das Cartas:
// Utilizei a função printf para exibir as informações das cartas cadastradas.

        printf("*****Carta 1:*****\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigodacarta1);
        printf("Nome da cidade: %s\n", nomedacidade1);
        printf("População: %d de pessoas\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
        printf("Densidade Populacional: %.3f hab/km²\n", densidpopulacional1);
        printf("PIB per Capita: %f reais\n", pibpercapita1);

        printf("*****Carta 2:*****\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigodacarta2);
        printf("Nome da cidade: %s\n", nomedacidade2);
        printf("População: %d de pessoas\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidpopulacional2);
        printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}