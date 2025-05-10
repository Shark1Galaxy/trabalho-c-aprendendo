#include <stdio.h> 

int main(){

    
    char estado1, nome_cidade[50], codigo1[4]; // %c char é para ler um caractere
    int populacao1, turistico1; // %d População da cidade
    float area1, pib1;  // %f Área da cidade

    // Entrada de dados - Carta 1
    
    printf("\n--Informações da carta 1--\n");

    printf("Digite o estado de 'A' a 'H': ");
    scanf(" %c", &estado1); // %s string é para ler uma string (sequência de caracteres)
    printf("Digite o código postal: ");
    scanf("%s", codigo1); // %s string é para ler uma string (sequência de caracteres)  
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);  //Para eu conseguir por o nomes dos estados separado
    printf("População dessa cidade: ");
    scanf("%d", &populacao1); // %d inteiro é para ler um número inteiro
    printf("Área da cidade em km²: ");
    scanf("%f", &area1); // %f float é para ler um número de ponto flutuante (decimal)
    printf("A PIB da cidade: ");
    scanf("%f", &pib1); // %f float é para ler um número de ponto flutuante (decimal)
    printf("Me informe o número de pontos turísticos: ");
    scanf("%d", &turistico1); // %d inteiro é para ler um número inteiro

    //Array e variáveis arta 2

    char estado2, nome_cidade2[50], codigo2[4]; // %c char é para ler um caractere
    int populacao2, turistico2; // %d População da cidade   
    float  area2, pib2;  // %f Área da cidade


    // Entrada de dados - Carta 2

    printf("\n--De as informações da carta 2--\n");
    
    printf("Digite o estado de 'A' a 'H':");
    scanf(" %c", &estado2);
    printf("Digite o código postal: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2); //Para eu conseguir por o nomes dos estados separado
    printf("População dessa cidade: ");  
    scanf("%d", &populacao2); // %d inteiro é para ler um número inteiro
    printf("Área da cidade em km²: ");
    scanf("%f", &area2); // %f float é para ler um número de ponto flutuante (decimal)
    printf("PIB da cidade: ");
    scanf("%f", &pib2); // %f float é para ler um número de ponto flutuante (decimal)
    printf("Me informe o número de pontos turísticos: ");
    scanf("%d", &turistico2); // %d inteiro é para ler um número inteiro

    // Variaveis de calculos
    
    float densidade1, densidade2;
    double percap1, percap2, pib1edensidade1, pib1edensidade2, densinversa1, densinversa2; 
    
    densidade1 = (float) populacao1 / area1;
    percap1 = (double) (pib1 * 1e9) / populacao1; /* 1e9 = 1.000.000.000 - O PIB está em bilhões de reais: Quando você recebe o PIB como Exemplo: 699.28 (por exemplo), ele está em bilhões de reais. Então, 699.28 bilhões de reais significa 699.280.000.000 reais.
    Multiplicando por 1 bilhão (1000000000): Para transformar o valor de bilhões para reais (a unidade mais comum para cálculos), a gente multiplica o PIB por 1 bilhão (ou seja, 1.000.000.000). Então, multiplicando:*/
    densidade2 = (float) populacao2 / area1; // Atenção: Esta linha usa area1 para calcular densidade2. Pode ser um erro lógico.
    percap2 = (double) (pib2 * 1e9) / populacao2; //1e9 = 1.000.000.000 - O PIB está em bilhões de reais: Quando você recebe o PIB como Exemplo: 699.28 (por exemplo), ele está em bilhões de reais. Então, 699.28 bilhões de reais significa 699.280.000.000 reais.

    //calculo do densidade populacional per capita 1 E 2
    pib1edensidade1 = (double) densidade1 / percap1; // PIB per capita da cidade 1
    densinversa1 = 1.0 / densidade1; // valor inverso da densidade
    pib1edensidade2 = (double) densidade2 / percap2; // PIB per capita da cidade 2
    densinversa2 = 1.0 / densidade2; // valor inverso da densidade DIVIDE POR 1

    //PODERES SOMANDO ELES -----
    double superpoder1, superpoder2;
    superpoder1 = (double) populacao1 + area1 + pib1 + turistico1 + percap1 + densinversa2; // Atenção: superpoder1 usa densinversa2.
    superpoder2 = (double) populacao2 + area2 + pib2 + turistico2 + percap2 + densinversa2; 

    //Saida dos sados - Carta 1
    printf("\nINFORMAÇÕES DA CARTA 1\n");

    printf("ESTADO: %c\n", estado1);
    printf("Código Postal: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turistico1); 
    printf("Densidade Populacional: %.2f\n hab/km²", densidade1);
    printf("PIB per Capita: %.2f\n reais", percap1);

    //Saida dos sados - Carta 2

    printf("\nINFORMAÇÕES DA CARTA 2\n");
    printf("ESTADO: %c\n", estado2);
    printf("Código Postal: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);  
    printf("Área: %.1f km²\n", area2); // %.1f float é para ler um número de ponto flutuante (decimal) com  casas decimais, ou seja , eu posso colocar a  área real 
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f\n hab/km²", densidade2); // Corrigido "Desnidade" e mantida formatação do \n
    printf("PIB per Capita: %.2f\n reais", percap2);


    //Saida dos sados e comparação - do vendedor da carta
    printf("\n--- Resultado do Vencedor ---\n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 Venceu! (1)\n");
    } else {
        printf("População: Carta 2 Venceu! (0)\n");
    } if (area1 > area2) {
        printf("ÁREA: Carta 1 Venceu! (1)\n");
    } else {
        printf("ÁREA: Carta 2 Venceu! (0)\n");
    } if (pib1 > pib2) {
        printf("PIB: Carta 1 Venceu! (1)\n");
    } else {
        printf("PIB: Carta 2 Venceu! (0)\n");
    } if (turistico1 > turistico2) {
        printf("Ponto Turístico: Carta 1 Venceu! (1)\n");
    } else {
        printf("Ponto Turístico: Carta 2 Venceu! (0)\n");
    } if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 Venceu! - Carta Menor (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 Venceu! - Carta Menor (0)\n");
    } if (percap1 > percap2) {
        printf("PIB per Cap: Carta 1 Venceu! (1)\n");
    } else {
        printf("PIB per Cap: Carta 2 Venceu! (0)\n");
    } if (superpoder1 > superpoder2) {
        printf("Super Poder: Carta 1 Venceu! (1)\n");
    } else {
        printf("Super Poder: Carta 2 Venceu! (0)\n");
    }
    return 0;
}
