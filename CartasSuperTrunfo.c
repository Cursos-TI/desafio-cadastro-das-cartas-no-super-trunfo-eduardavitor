#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
     //variaveis 
     char estado01[20], estado02[20];
     char codigocarta01[4], codigocarta02[4];
     char cidade01[20], cidade02[20];
     int populacao01, populacao02;
     float area01, area02, pib01, pib02;
     int turista01, turista02;
 
     printf("==SUPER TRUNFO==\n");
 
     //cadastro das cartas
 
     printf("Digite os dados da Carta 01\n");
     printf("Estado: "); scanf("%s", &estado01);
     printf("Codigo da Carta: "); scanf("%s", &codigocarta01);
     printf("Nome Cidade: "); scanf("%s", &cidade01);
     printf("Populacao: "); scanf("%d", &populacao01);
     printf("Area km: "); scanf("%f", &area01);
     printf("PIB: "); scanf("%f", &pib01);
     printf("Numeros de pontos Turisticos: "); scanf("%d", &turista01);
 
     printf("\nDigite os dados da Carta 02\n");
     printf("Estado: "); scanf("%s", &estado02);
     printf("Codigo da Carta: "); scanf("%s", &codigocarta02);
     printf("Nome Cidade: "); scanf("%s", &cidade02);
     printf("Populacao: "); scanf("%d", &populacao02);
     printf("Area km: "); scanf("%f", &area02);
     printf("PIB: "); scanf("%f", &pib02);
     printf("Numeros de pontos Turisticos: "); scanf("%d", &turista02);
 
     //exibição de dados
 
     printf("\n\n--Dados Carta 01--");
     printf("\nEstado: %s", estado01);
     printf("\nCodigo: %s", codigocarta01);
     printf("\nCidade: %s", cidade01);
     printf("\nPopulacao: %d", populacao01);
     printf("\nArea Km: %f", area01);
     printf("\nPIB: %f", pib01);
     printf("\nPontos Turistiscos: %d", turista01);
 
     printf("\n\n--Dados Carta 02--");
     printf("\nEstado: %s", estado02);
     printf("\nCodigo: %s", codigocarta02);
     printf("\nCidade: %s", cidade02);
     printf("\nPopulacao: %d", populacao02);
     printf("\nArea Km: %f", area02);
     printf("\nPIB: %f", pib02);
     printf("\nPontos Turistiscos: %d", turista02);
    return 0;
}
