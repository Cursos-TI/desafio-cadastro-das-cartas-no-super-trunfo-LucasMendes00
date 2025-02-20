#include <stdio.h>

int main() {
     int populacao1, area1;
     float desnidadepopulacional;
     float pibpercapita1;
     float pib1;

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área total da cidade: \n");
    scanf("%d", &area1);

    desnidadepopulacional = (float)(populacao1 + area1) / 3;
    
    printf("A densidade populacional é: %3.f \n", desnidadepopulacional);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib1);

    pibpercapita1 = (float)(pib1 + populacao1) / 3;
    
    printf("A pib per capita é: %3.f \n", pibpercapita1);

    printf("Densidade > Área: %d\n", desnidadepopulacional > area1);
    printf("População < Pib per capita: %d\n", populacao1 < pibpercapita1);

    return 0;

}