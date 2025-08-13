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


     // Exibição das cartas na tela Terminal.
 
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // Comparação. 
    // Aqui escolhemos qual atributo comparar.
    // Troque "densidade1" e "densidade2" para outro atributo se quiser.

    float atributoCarta1 = densidade1;
    float atributoCarta2 = densidade2;
    char atributoNome[] = "Densidade Populacional";

    printf("\nComparação de cartas (Atributo: %s):\n", atributoNome);
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, atributoCarta1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, atributoCarta2);

    return 0;
}