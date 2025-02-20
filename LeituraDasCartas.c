#include <stdio.h>

int main() {
    int populacao1, populacao2, populacao3, populacao4, populacao5, populacao6, populacao7, populacao8;
    int numerodepontoturistico1, numerodepontoturistico2, numerodepontoturistico3, numerodepontoturistico4, numerodepontoturistico5, numerodepontoturistico6, numerodepontoturistico7, numerodepontoturistico8;
    float area1, area2, area3, area4, area5, area6, area7, area8;
    float pib1, pib2, pib3, pib4, pib5, pib6, pib7, pib8;
    float densidadepopulacional1, densidadepopulacional2,densidadepopulacional3, densidadepopulacional4, densidadepopulacional5, densidadepopulacional6, densidadepopulacional7, densidadepopulacional8;
    char estado1, estado2, estado3, estado4, estado5, estado6, esttado7, estado8;
    char nomedacidade1, nomedacidade2, nomedacidade3, nomedacidade4[50];
    char codigodacarta1, codigodacarta2, codigodacarta3, codigodacarta4, codigodacarta5, codigodacarta6, codigodacarta7, codigodacarta8;
    
    //Entrada de dados para primeira carta

    printf("Digite os dados da primeira carta \n");

    printf("Digite a letra que representa o estado \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade1);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área total da cidade: \n");
    scanf("%f", &area1);

    printf("Digite a quantidade de ponto turístico: \n");
    scanf("%d", &numerodepontoturistico1);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib1);

    return 0;
}