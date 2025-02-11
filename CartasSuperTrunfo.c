#include <stdio.h>

int main() {
    int populacao;
    int numerodepontoturistico;
    float area;
    float pib;
    float densidadepopulacional;
    float pibpercapita;

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o número de ponto turístico: \n");
    scanf("%d", &numerodepontoturistico);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    // Poplação / Área.
    int a = 6211223;
    float b = 1200329;
    float resultado = a / b;

    printf(" Digite a Densidade Populacional: \n");
    scanf("%f", &densidadepopulacional);

    printf("Resultado: %.3f\n", resultado);

    // Pib / População.
    int x = 4909440;
    int y = 6211223;
    float quociente = (float) a / b;

    printf(" Digite o  pib per capita: \n");
    scanf("%f", &densidadepopulacional);

    printf("Resultado: \n");
    scanf("%.2f", &pibpercapita);

    float numero1 = 6211223;
    int numero2 = 1200329;

    printf("numero1 > numero2: %d\n", numero1 > numero2);
    printf("numero1 < numero2: %d\n", numero1 < numero2);

    return 0;

}