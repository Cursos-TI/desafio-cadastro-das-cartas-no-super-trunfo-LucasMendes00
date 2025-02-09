#include <stdio.h>

int main() {
    char estado;
    char codigodaCarta [20];
    char nomedaCidade [20];
    int populacao;
    float area;
    float densidadePopulacional;
    float pib;
    float pibPerCapita;
    int numerodePontoTuristico;

    printf("Digite o estado:");
    scanf("%s", &estado);

    printf("Digite o código da carta:");
    scanf("%d", &codigodaCarta);

    printf("Digite o nome da cidade:");
    scanf("%s", nomedaCidade);

    printf("Digite a população:");
    scanf("%d", &populacao);

    int a = populacao;
    float b = area;
    float resultado = a / b;

    printf("Resultado: %.3f\n", resultado);

    printf("Digite a área:");
    scanf("%f", &area);

    printf("Digite a densidade populacional:");
    scanf("%f", &densidadePopulacional);

    int a = pib;
    float b = populacao;
    float resultado = a / b;

    printf("Resultado: %.3f\n", resultado);

    printf("Ditite o PIB:" );
    scanf("%f", &pib);

    printf("Digite o pib per capita:");
    scanf("%f", &pibPerCapita); 

    printf("Digite número de ponto turístico:");
    scanf("%d", &numerodePontoTuristico);
 
    return 0;

}