#include <stdio.h> 

int main(){
    
    // Variáveis usadas para armazenar dados das cidades
    char estado1, nome_cidade[50], codigo1[4], estado2, nome_cidade2[50], codigo2[4]; 
    int populacao1, turistico1, populacao2, turistico2, opcao; 
    float area1, pib1, area2, pib2, densidade1, densidade2;  
    double percap1, percap2, pib1edensidade1, pib1edensidade2, densinversa1, densinversa2, superpoder1, superpoder2; 


    //Menu de Entrada
    printf("\n### Escolha o atributo para comparar: ###\n");
    printf("1 - População\n");
    printf("2 - Área \n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Túristicos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Supetrunfo Total (Old version)\n");
    printf("Digite sua opção: ");
    scanf("%d" , &opcao);

    //MENU E SAIDAS
    switch(opcao){
        case 1:
        //Entrada das informações

        // Carta 1
        printf("\n--Informações da carta 1--\n");
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade);  
        printf("População dessa cidade: ");
        scanf("%d", &populacao1); 
        
        // Carta 2 
        printf("\n--Informações da carta 2--\n");
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade2); 
        printf("População dessa cidade: ");  
        scanf("%d", &populacao2); 

        //Comparação e resultado
        if (populacao1 > populacao2){
            printf("\nComparando: População\n");
            printf("Pais 1: %s - %d hab\n", nome_cidade , populacao1);
            printf("Pais 2: %s - %d hab\n", nome_cidade2, populacao2);
            printf("Resultado: %s venceu!\n", nome_cidade);
        } else if (populacao1 < populacao2) { 
            printf("\nComparando: População\n");
            printf("Pais 1: %s - %d hab\n", nome_cidade, populacao1);
            printf("Pais 2: %s - %d hab\n", nome_cidade2, populacao2);
            printf("Resultado: %s venceu!\n", nome_cidade2);
        } else {
            printf("\nComparando: População\n");
            printf("Pais 1: %s - %d hab\n", nome_cidade, populacao1);
            printf("Pais 2: %s - %d hab\n", nome_cidade2, populacao2);
            printf("Resultado: empate! entre %s e %s\n!", nome_cidade, nome_cidade2);
        } 
        break;

        case 2:
        //Carta 1
        printf("\n--Informações da carta 1--\n"); 
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade);
        printf("Área da cidade em km²: ");
        scanf("%f", &area1); 

        //Carta 2
        printf("\n--Informações da carta 2 --\n"); 
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade2);
        printf("Área da cidade em km²: ");
        scanf("%f", &area2); 

        //Comparação e resultado
        if (area1 > area2){
            printf("\nComparando: Área/km²\n");
            printf("Pais 1: %s - %.1f km²\n", nome_cidade , area1);
            printf("Pais 2: %s - %.1f km²\n", nome_cidade2, area2);
            printf("Resultado: %s venceu!\n", nome_cidade);
        } else if (area1 < area2){ 
            printf("\nComparando: Área/km²\n");
            printf("Pais 1: %s - %.1f km²\n", nome_cidade , area1);
            printf("Pais 2: %s - %.1f km²\n", nome_cidade2, area2);
            printf("Resultado: %s venceu!\n", nome_cidade);
        } else {
            printf("\nComparando: Área/km²\n");
            printf("Pais 1: %s - %.1f km²\n", nome_cidade , area1);
            printf("Pais 2: %s - %.1f km²\n", nome_cidade2, area2);
            printf("Resultado: empate! entre %s e %s\n!", nome_cidade, nome_cidade2);
        }
        break;
        case 3:
        //Carta 1
        printf("\n--Informações da carta 1--\n"); 
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade);
         printf("A PIB da cidade: ");
         scanf("%f", &pib1);
      
        //Carta 2
        printf("\n--Informações da carta 2--\n"); 
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade2);
        printf("PIB da cidade: ");
        scanf("%f", &pib2);
    
        //Comparação e resultado
        if (pib1 > pib2){
            printf("\nComparando: PIB\n");
            printf("Pais 1: %s - %.1f\n", nome_cidade , pib1);
            printf("Pais 2: %s - %.1f\n", nome_cidade2, pib2);
            printf("Resultado: %s venceu!\n", nome_cidade);
        } else if (pib1 < pib2){ 
            printf("\nComparando: PIB\n");
            printf("Pais 1: %s - %.1f\n", nome_cidade , pib1);
            printf("Pais 2: %s - %.1f\n", nome_cidade2, pib2);
            printf("Resultado: %s venceu!\n", nome_cidade);
        } else {
            printf("\nComparando: PIB\n");
            printf("Pais 1: %s - %.1f\n", nome_cidade , pib1);
            printf("Pais 2: %s - %.1f\n", nome_cidade2, pib2);
            printf("Resultado: empate! entre %s e %s\n!", nome_cidade, nome_cidade2);
        }
        break;
        
        case 4:
        // Carta 1
        printf("\n--Informações da carta 1--\n");
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade);  
        printf("Me informe o número de pontos turísticos: ");
        scanf("%d", &turistico1);
        
        // Carta 2 
        printf("\n--Informações da carta 2--\n");
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade2); 
        printf("Me informe o número de pontos turísticos: ");
        scanf("%d", &turistico2); 

        //Comparação e resultado
        if (turistico1 > turistico2){
            printf("\nComparando: População\n");
            printf("Pais 1: %s - %d pontos turísticos\n", nome_cidade , turistico1);
            printf("Pais 2: %s - %d\n", nome_cidade2, turistico2);
            printf("Resultado: %s venceu!\n", nome_cidade);
        } else if (turistico1 < turistico2) { 
            printf("\nComparando: População\n");
            printf("Pais 1: %s - %d pontos turísticos\n", nome_cidade, turistico1);
            printf("Pais 2: %s - %d pontos turísticos\n", nome_cidade2, turistico2);
            printf("Resultado: %s venceu!\n", nome_cidade2);
        } else {
            printf("\nComparando: População\n");
            printf("Pais 1: %s - %d pontos turísticos\n", nome_cidade, turistico1);
            printf("Pais 2: %s - %d pontos turísticos\n", nome_cidade2, turistico2);
            printf("Resultado: empate! entre %s e %s\n!", nome_cidade, nome_cidade2);
        } 
        break;
        case 5:
        // Carta 1
        printf("\n--Informações da carta 1--\n");
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade); 
        printf("População dessa cidade: ");
        scanf("%d", &populacao1); 
        printf("Área da cidade em km²: ");
        scanf("%f", &area1); 

        // Carta 2 
        printf("\n--Informações da carta 2--\n");
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome_cidade2); 
        
        printf("População dessa cidade: ");  
        scanf("%d", &populacao2);
        printf("Área da cidade em km²: ");
        scanf("%f", &area2); 

        // Cálculo da densidade demográfica/Densidade Populacional
        densidade1 = (float) populacao1 / area1;
        densidade2 = (float) populacao2 / area2;

        //Comparação e resultado
        if (densidade1 < densidade2){
            printf("\nComparando: Densidade Demográfica\n");
            printf("Pais 1: %s - %.2f hab/km²\n", nome_cidade , densidade1);
            printf("Pais 2: %s - %.2f hab/km²\n", nome_cidade2, densidade2);
            printf("Resultado: %s venceu por densidade menor!\n", nome_cidade);
        } else if (densidade1 > densidade2) { 
            printf("\nComparando: Densidade Demográfica\n");
            printf("Pais 1: %s - %.2f hab/km²\n", nome_cidade, densidade1);
            printf("Pais 2: %s - %.2f hab/km²s\n", nome_cidade2, densidade2);
            printf("Resultado: %s venceu por densidade menor!\n", nome_cidade2);
        } else {
            printf("\nComparando: Densidade Demográfica\n");
            printf("Pais 1: %s - %.2f hab/km²\n", nome_cidade, densidade1);
            printf("Pais 2: %s - %.2f hab/km²\n", nome_cidade2, densidade2);
            printf("Resultado: empate! entre %s e %s\n!", nome_cidade, nome_cidade2);
        } 
        break;
        case 6:
    //Carta 1
    printf("\n--Informações da carta 1--\n");
    printf("Digite o estado de 'A' a 'H': ");
    scanf(" %c", &estado1); 
    printf("Digite o código postal: ");
    scanf("%s", codigo1); 
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);  
    printf("População dessa cidade: ");
    scanf("%d", &populacao1); 
    printf("Área da cidade em km²: ");
    scanf("%f", &area1);
    printf("A PIB da cidade: ");
    scanf("%f", &pib1); 
    printf("Me informe o número de pontos turísticos: ");
    scanf("%d", &turistico1); 

    //Carta 2
    printf("\n--Informações da carta 2--\n");
    printf("Digite o estado de 'A' a 'H':");
    scanf(" %c", &estado2);
    printf("Digite o código postal: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2); 
    printf("População dessa cidade: ");  
    scanf("%d", &populacao2); 
    printf("Área da cidade em km²: ");
    scanf("%f", &area2); 
    printf("PIB da cidade: ");
    scanf("%f", &pib2); 
    printf("Me informe o número de pontos turísticos: ");
    scanf("%d", &turistico2); 

    //Tive que repitir, pq aqui ele n tava pegando o densidade1 e 2 lá na case 5.
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //Variaveis Antigas
    percap1 = (double) (pib1 * 1e9) / populacao1;
    percap2 = (double) (pib2 * 1e9) / populacao2;

    //calculo do densidade populacional per capita 1 E 2
    pib1edensidade1 = (double) densidade1 / percap1; // PIB per capita da cidade 1
    densinversa1 = 1.0 / densidade1; // valor inverso da densidade
    pib1edensidade2 = (double) densidade2 / percap2; // PIB per capita da cidade 2
    densinversa2 = 1.0 / densidade2; // valor inverso da densidade DIVIDE POR 1

    //PODERES SOMANDO ELES -----
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
    printf("\n ---- INFORMAÇÕES DA CARTA 2 ----\n");
    printf("ESTADO: %c\n", estado2);
    printf("Código Postal: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);  
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f\n hab/km²", densidade2); 
    printf("PIB per Capita: %.2f\n reais", percap2);

    //Comparação e resultados
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
    break;
    default:
    printf("O número %d não corresponde á uma opção do menu!", opcao);
    break;
}
    return 0;
}
