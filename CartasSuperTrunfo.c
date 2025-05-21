#include <stdio.h>

int main(){
    //carta 01 
    char estado1[3], codigo1[10], cidade1[30];
    unsigned long int populacao1;
    int numeropontos1;
    float pib1, area1;
    
    

    //carta02
    char estado2[3], codigo2[10], cidade2[30];
    unsigned long int populacao2;
    int numeropontos2;
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
    scanf ("%lu", &populacao1);

    printf ("Digite a area em km²: \n");
    scanf ("%f", &area1);

    printf ("Digite o pib da cidade: \n");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &numeropontos1);

    //calculo depois da entrada1
    float densidade1 = populacao1 / area1;
    float ppc1 = pib1 / populacao1;

    //cadastro da segunda carta

    printf("\nPreenchendo a CARTA 02:\n");

    printf ("Digite a UF do estado: \n");
    scanf ("%2s", estado2);

    printf ("Digite o código da carta: \n");
    scanf ("%9s", codigo2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%29s", cidade2);

    printf ("Digite a população da cidade: \n");
    scanf ("%lu", &populacao2);

    printf ("Digite a area em km²: \n");
    scanf ("%f", &area2);

    printf ("Digite o pib da cidade: \n");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &numeropontos2);

    //caulo depois da entrada 2
    float densidade2 = populacao2 / area2;
    float ppc2 = pib2 / populacao2;



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

    //comparação das cartas
    printf("***COMPARAÇÃO DAS CARTAS, QUEM GANHOU?**\n");
    printf("População: Carta 1 venceu? (%d)\n", populacao1 > populacao2);
    printf("População: Carta 2 venceu? (%d)\n", populacao2 > populacao1);
    printf("População: Deu empate? (%d)\n", populacao1 == populacao2);

    printf("Area: Carta 1 venceu? (%d)\n", area1 > area2);
    printf("Area: Carta 2 venceu? (%d)\n", area2 > area1);
    printf("Area: Deu empate? (%d)\n", area1 == area2);

    printf("PIB: Carta 1 venceu? (%d)\n", pib1 > pib2);
    printf("PIB: Carta 2 venceu? (%d)\n", pib2 > pib1);
    printf("PIB: Deu empate? (%d)\n", pib1 == pib2);

    printf("Pontos Turisticos: Carta 1 venceu? (%d)\n", numeropontos1 > numeropontos2);
    printf("Pontos Turisticos: Carta 2 venceu? (%d)\n", numeropontos2 > numeropontos1);
    printf("Pontos Turisticos: Deu empate? (%d)\n", numeropontos1 == numeropontos2);

    printf("Densidade Populacional: Carta 1 venceu? (%d)\n", densidade1 < densidade2);
    printf("Densidade Populacional: Carta 2 venceu? (%d)\n", densidade2 < densidade1);
    printf("Densidade Populacional: Deu empate? (%d)\n", densidade1 == densidade2);

    printf("PIB PER CAPITA: Carta 1 venceu? (%d)\n", ppc1 > ppc2);
    printf("PIB PER CAPITA: Carta 2 venceu? (%d)\n", ppc2 > ppc1);
    printf("PIB PER CAPITA: Deu empate? (%d)\n", pib1 == pib2);

    

    //COMPARAÇÃO DO SUPERPODER

    float superPoder1 = (float) (populacao1 + area1 + pib1 + numeropontos1 + (1 / densidade1) + ppc1);
    float superPoder2 = (float) (populacao2 + area2 + pib2 + numeropontos2 + (1 / densidade2) + ppc2);

    // RESULTADO DO JOGO

    printf("A CARTA 1 É MAIS FORTE? %d\n", superPoder1 > superPoder2);
    printf("A CARTA 2 É MAIS FORTE? %d\n", superPoder2 > superPoder1);
    printf("AS DUAS CARTAS TEM O MESMO PODER? %d\n", superPoder1 == superPoder2);


    //Adicionando a comparação DE POPULAÇÃO

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1: %s (%s) - %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2: %s (%s) - %lu habitantes\n", cidade2, estado2, populacao2);

        if(populacao1 > populacao2){
            printf("A carta 1 (%s) venceu no quesito população.\n", cidade1);
        }else if (populacao2 > populacao1)
        {
            printf("A carta 2(%s) venceu no quesito população.\n", cidade2);
        }else
        {
            printf("Resultado EMPATE");
        }
        
         //Adicionando a comparação SUPER PODER

    printf("\nComparação de cartas (Atributo MAIS FORTE: SUPER PODER):\n");
    printf("Carta 1: %s (%s) - %f DE PODER\n", cidade1, estado1, superPoder1);
    printf("Carta 2: %s (%s) - %f DE PODER\n", cidade2, estado2, superPoder2);

        if(superPoder1 > superPoder2){
            printf("A carta 1 (%s) venceu no quesito PODER.\n", cidade1);
        }else if (superPoder2 > superPoder1)
        {
            printf("A carta 2(%s) venceu no quesito PODER.\n", cidade2);
        }else
        {
            printf("Resultado EMPATE");
        }
        




    
    
    return 0;
}
