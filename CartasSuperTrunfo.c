#include <stdio.h>

int main(){
    //carta 01 
    char estado1[3], codigo1[10], cidade1[30];
    int populacao1, numeropontos1;
    float pib1, area1;

    //carta02
    char estado2[3], codigo2[10], cidade2[30];
    int populacao2, numeropontos2;
    float pib2, area2;

    //cadastro da primeira carta

    printf("\nPreenchendo a CARTA 01:\n");

    printf ("Digite a UF do estado: \n");
    scanf ("%2s", estado1);

    printf ("Digite o código da carta: \n");
    scanf ("%9s", codigo1);

    printf ("Digite o nome da cidade: \n");
    scanf ("%29s", cidade1);

    printf ("Digite a população da cidade: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a area em km²: \n");
    scanf ("%f", &area1);

    printf ("Digite o pib da cidade: \n");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &numeropontos1);

    //cadastro da segunda carta

    printf("\nPreenchendo a CARTA 02:\n");

    printf ("Digite a UF do estado: \n");
    scanf ("%2s", estado2);

    printf ("Digite o código da carta: \n");
    scanf ("%9s", codigo2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%29s", cidade2);

    printf ("Digite a população da cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a area em km²: \n");
    scanf ("%f", &area2);

    printf ("Digite o pib da cidade: \n");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &numeropontos2);


    //Impressão das cartas 1
    printf("Carta 01:\n");
    printf("UF do estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numeropontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", ppc1);

    //Impressão das cartas 2
    printf("Carta 02:\n");
    printf("UF do estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numeropontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais \n", ppc2);
    
    return 0;
}
