#include <stdio.h>

int main() {
    
    // Cadastro das duas cartas (pré-definidas).
    
    // Carta 1
    char estado1[] = "RN";
    char codigo1[] = "A01";
    char cidade1[] = "Currais Novos";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões
    int pontosTuristicos2 = 30;

   
    // Cálculo da densidade populacional e PIB per capita.
   
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    return 0;
}