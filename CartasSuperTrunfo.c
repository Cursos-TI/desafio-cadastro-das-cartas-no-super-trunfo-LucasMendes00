#include <stdio.h>

int main() {
int populacao;
int pontoturistico; 
float area;
float pib;
char nome[50];
char codigodacidade[50];

printf("Nome da cidade: \n");
scanf("%s", &nome);

printf("Código da cidade: \n");
scanf("%d", &codigodacidade);

printf("População: \n");
scanf("%f", &populacao);

printf("Ponto turístico: \n");
scanf("%s", &pontoturistico);

printf("Área: \n");
scanf("%f", &area);

printf("PIB: \n");
scanf("%e", &pib);

return 0;

}