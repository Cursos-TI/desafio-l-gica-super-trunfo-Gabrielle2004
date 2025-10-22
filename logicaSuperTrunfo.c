#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Definições de variáveis carta 1
    char estado1;
    char codigo1[20];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Definições de variáveis carta 2
    char estado2;
    char codigo2[20];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Entrada de dados carta 1
    printf("Digite os dados da carta 1\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado1); // Espaço antes do %c para limpar o buffer

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Qual a cidade? ");
    scanf("%s", cidade1);

    printf("Qual a população? ");
    scanf("%d", &populacao1);

    printf("Qual a área em km²? ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Qual o número de pontos turísticos? ");
    scanf("%d", &pontosTuristicos1);

    // Calculando densidade e PIB per capita carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada de dados carta 2
    printf("\nDigite os dados da carta 2\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Qual a cidade? ");
    scanf("%s", cidade2);

    printf("Qual a população? ");
    scanf("%d", &populacao2);

    printf("Qual a área em km²? ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Qual o número de pontos turísticos? ");
    scanf("%d", &pontosTuristicos2);

    // Calculando densidade e PIB per capita carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibindo os dados
    printf("\n----- Dados da Carta 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n----- Dados da Carta 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // comparar atributo
    printf("\nComparação das cartas\n");

    int Atributo1, atributo2;
    int resultado1, resultado2;
    int soma = Atributo1 + atributo2;

    srand(time(0));

    printf("Selecione o primeiro atributo de comparação:\n");
    printf("1. população\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &Atributo1);

    switch (Atributo1)
    {
    case 1:
        printf("Voce escolheu o atributo população!\n");
        printf("carta 1 - %s - População: %d \n", cidade1, populacao1);
        printf("Carta 2 - %s - População: %d \n", cidade2, populacao2);

        resultado1 = populacao1 > populacao2;
        break;

    case 2:
        printf("Voce escolheu o atributo area!\n");
        printf("carta 1 - %s - Area: %.2f \n", cidade1, area1);
        printf("Carta 2 - %s - Area: %.2f \n", cidade2, area2);

        resultado1 = area1 > area2;
        break;

    case 3:
        printf("Voce escolheu o atributo pib!\n");
        printf("carta 1 - %s - PIB: %.2f \n", cidade1, pib1);
        printf("Carta 2 - %s - PIB: %.2f \n", cidade2, pib2);

        resultado1 = pib1 > pib2;
        break;

    case 4:
        printf("Voce escolheu o atributo numero de pontos turisticos!\n");
        printf("carta 1 - %s - Pontos turisticos: %d \n", cidade1, pontosTuristicos1);
        printf("Carta 2 - %s - Pontosturisticos: %d \n", cidade2, pontosTuristicos2);

        resultado1 = pontosTuristicos1 > pontosTuristicos2;
        break;

    case 5:
        printf("Voce escolheu o atributo densidade populacional!\n");
        printf("carta 1 - %s - Densidade demografica: %.2f \n", cidade1, densidadePopulacional1);
        printf("Carta 2 - %s - Densidade demografica: %.2f \n", cidade2, densidadePopulacional2);

        resultado1 = densidadePopulacional1 < densidadePopulacional2;
        break;
    default:
        printf("Opção invalida.");
        break;
    }

    printf("\nSelecione o segundo atributo de comparação:\n");
    printf("Atenção o segundo atributo deve ser diferente do primeiro!\n");
    printf("1. população\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &atributo2);

    if (Atributo1 == atributo2)
    {
        printf("Voce escolheu o mesmo atributo\n");
    }

    switch (atributo2)
    {
    case 1:
        printf("Voce escolheu o atributo população!\n");
        printf("carta 1 - %s - População: %d \n", cidade1, populacao1);
        printf("Carta 2 - %s - População: %d \n", cidade2, populacao2);

        resultado2 = populacao2 > populacao1;
        break;

    case 2:
        printf("Voce escolheu o atributo area!\n");
        printf("carta 1 - %s - Area: %.2f \n", cidade1, area1);
        printf("Carta 2 - %s - Area: %.2f \n", cidade2, area2);

        resultado2 = area2 > area1;
        break;

    case 3:
        printf("Voce escolheu o atributo pib!\n");
        printf("carta 1 - %s - PIB: %.2f \n", cidade1, pib1);
        printf("Carta 2 - %s - PIB: %.2f \n", cidade2, pib2);

        resultado2 = pib2 > pib1;
        break;

    case 4:
        printf("Voce escolheu o atributo numero de pontos turisticos!\n");
        printf("carta 1 - %s - Pontos turisticos: %d \n", cidade1, pontosTuristicos1);
        printf("Carta 2 - %s - Pontosturisticos: %d \n", cidade2, pontosTuristicos2);

        resultado2 = pontosTuristicos2 > pontosTuristicos1;
        break;

    case 5:
        printf("Voce escolheu o atributo densidade populacional!\n");
        printf("carta 1 - %s - Densidade demografica: %.2f \n", cidade1, densidadePopulacional1);
        printf("Carta 2 - %s - Densidade demografica: %.2f \n", cidade2, densidadePopulacional2);

        resultado2 = densidadePopulacional2 < densidadePopulacional1;
        break;
    default:
        printf("Opção invalida.");
        break;
    }

    if (resultado1 > resultado2)
    {
        printf("\n***RESULTADO***\n");
        printf("Carta 1 - %s - atributo 1: %d \n", &cidade1, &Atributo1);
        printf("Carta 2 - %s - atributo 2: %d \n", &cidade2, &atributo2);
        printf("Atributo 1 + atributo 2 = %d \n", &soma);
        printf("Carta 1: %s - Parabéns, você venceu!", &cidade1);
    }
    else if (resultado1 == resultado2)
    {
        printf("\n***RESULTADO***\n");
        printf("Empate!");
    }
    else
    {
        printf("\n***RESULTADO***\n");
        printf("Carta 1 - %s - atributo 1: %d \n", &cidade1, &Atributo1);
        printf("Carta 2 - %s - atributo 2: %d \n", &cidade2, &atributo2);
        printf("Atributo 1 + atributo 2 = %d \n", &soma);
        printf("Carta 2: %s - Parabéns, você venceu!", &cidade2);
    }

    return 0;
}
