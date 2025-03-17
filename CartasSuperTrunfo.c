#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcao, regras;

    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        char cidade1[50], cidade2[50];
        char estado1, estado2;
        char codigodaCarta1[10], codigodaCarta2[10];
        int populacao1, populacao2;
        float areakm1, areakm2, pibpercapita1, pibpercapita2;
        float superPoder1, superPoder2;
        float pib1, pib2, densidade1, densidade2;
        int pontoTuristico1, pontoTuristico2;

        // Entrada de dados para primeira carta!!
        printf("==== DADOS DA PRIMEIRA CARTA ==== \n");
        printf("Escolha um letra entre 'A' a 'H' que representa a cidade: ");
        scanf(" %c", &estado1);

        printf("A letra do estado seguida de um número de 01 a 04 (Ex: A01, B03): ");
        scanf("%3s", &codigodaCarta1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade1);

        printf("Digite a quantidade de população: \n");
        scanf("%d", &populacao1);

        printf("Digite a área da cidade (em km²): \n");
        scanf("%f", &areakm1);

        // Calculando a Densidade Carta 1!!
        densidade1 = (float)(populacao1 + areakm1) / 3;

        printf("A densidade populacional é: %3.f \n", densidade1);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib1);

        // Calculando o Pib per Capita!!
        pibpercapita1 = (float)(pib1 + populacao1) / 3;

        printf("A pib per capita é: %3.f \n", pibpercapita1);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontoTuristico1);

        printf("Densidade > Área: %d\n", densidade1 > areakm1);
        printf("População < Pib per capita: %d\n", populacao1 < pibpercapita1);

        float superpoder1 = populacao1 + areakm1 + pib1 + pontoTuristico1 + pibpercapita1 + (1 / densidade1);

        // Entrada de dados para segunda carta!!
        printf("==== DADOS DA SEGUNDA CARTA ==== \n");
        printf("Escolha um letra entre 'A' a 'H' que representa a cidade: ");
        scanf(" %c", &estado2);

        printf("A letra do estado seguida de um número de 01 a 04 (Ex: A01, B03): ");
        scanf("%3s", &codigodaCarta2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade2);

        printf("Digite a quantidade de população: \n");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade (em km²): \n");
        scanf("%f", &areakm2);

        // Calculando a Densidade Carta 2!!
        densidade2 = (float)(populacao1 + areakm2) / 3;

        printf("A densidade populacional é: %f \n", densidade2);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);
        // Calculando o Pib per Capita
        pibpercapita2 = (float)(pib2 + populacao2) / 3;

        printf("A pib per capita é: %f \n", pibpercapita2);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontoTuristico2);

        printf("Densidade > Área: %d\n", densidade2 > areakm2);
        printf("População < Pib per capita: %d\n", populacao2 < pibpercapita2);

        float superpoder2 = populacao2 + areakm2 + pib2 + pontoTuristico2 + pibpercapita2 + (1 / densidade2);

        // EXIBIÇÃO DAS INFORMAÇÕES DA PRIMEIRA CARTA!!
        printf("====EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA ====\n");
        printf("Estado: %c\n", estado1);
        printf("Código da cidade: %s\n", codigodaCarta1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.3f km²\n", areakm1);
        printf("PIB:R$ %.2f Bilhões de reais\n", pib1);
        printf("Pontos Turísticos: %d\n", pontoTuristico1);

        // EXIBIÇÃO DAS INFORMAÇÕES DA SEGUNDA CARTA!!!
        printf("==== EXIBIÇÃO DOS DADOS DA SEGUNDA CARTA ====\n");
        printf("Estado: %c\n", estado2);
        printf("Código da cidade: %s\n", codigodaCarta2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.3f km²\n", areakm2);
        printf("PIB: R$ %.2f Bilhões de reais\n", pib2);
        printf("Pontos Turísticos: %d\n", pontoTuristico2);

        //COMPARAÇÂO DAS CARTAS!!
        printf("====\n Comparaçao de carta =====\n");

        if (populacao1 > populacao2)
        {
            printf("População: Carta 1 venceu!\n");
        }
        else if (pontoTuristico2 > pontoTuristico1)
        {
            printf("População: Carta 2 venceu!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        if (areakm1 > areakm2)
        {
            printf("Àrea: Carta 1 venceu!\n");
        }
        else if (areakm2 > areakm1)
        {
            printf("Àrea: Carta 2 venceu!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        if (pib1 > pib2)
        {
            printf("PIB: Carta 1 venceu!\n");
        }
        else if (pib2 > pib2)
        {
            printf("PIB: Carta 2 venceu!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        if (pontoTuristico1 > pontoTuristico2)
        {
            printf("Pontos turísticos: Carta 1 venceu!\n");
        }
        else if (pontoTuristico2 > pontoTuristico1)
        {
            printf("Pontos turísticos: Carta 2 venceu!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        if (densidade1 < densidade2)
        {
            printf("Densidade: Carta 1 venceu!\n");
        }
        else if (densidade2 > densidade1)
        {
            printf("Densidade: Carta 2 venceu!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        if (pibpercapita1 > pibpercapita2)
        {
            printf("PIB per capita: Carta 1 venceu!\n");
        }
        else if (pibpercapita2 > pibpercapita1)
        {
            printf("PIB per capita: Carta 2 venceu!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        if (superpoder1 > superpoder2)
        {
            printf("Superpoder: Carta 1 venceu!\n");
        }
        else if (superPoder2 > superPoder1)
        {
            printf("Superpoder: Carta 2 venceu!\n");
        }
        else
        {
            printf("Houve um empate!\n");
        }
        break;

    case 2:
        printf("REGRAS:\n");
        printf("O jogo começa com a pessoa à esquerda do dealer. - Ele escolhe uma das características da carta do topo e lê em voz alta. Os jogadores então leem, por sua vez, o valor na sua carta do topo que corresponde a essa característica. - Ganha quem tiver o maior valor.\n");

        break;

    case 3:
        printf("Saindo...\n");

        break;

    default:
        printf("Opção Invalida... Tente novamente!!!");
    }

    return 0;
}