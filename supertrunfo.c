#include <stdio.h> 


int main(){

    //Array e variáveis Carta 1
    
    char estado1[50], nome_cidade[50], codigo1[4]; // %c char é para ler um caractere
    int populacao1, turistico1; // %d População da cidade
    float area1, pib1;  // %f Área da cidade

   
    // Entrada de dados - Carta 1
    
    printf("\n--Informações da carta 1--\n");

    printf("Digite o estado de 'A' a 'H': ");
    scanf("%s", estado1); // %s string é para ler uma string (sequência de caracteres)
    printf("Digite o código postal: ");
    scanf("%s", &codigo1); // %s string é para ler uma string (sequência de caracteres)  
    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade);
    printf("População dessa cidade: ");
    scanf("%d", &populacao1); // %d inteiro é para ler um número inteiro
    printf("Área da cidade em km²: ");
    scanf("%f", &area1); // %f float é para ler um número de ponto flutuante (decimal)
    printf("A Pib da cidade em números: ");
    scanf("%f", &pib1); // %f float é para ler um número de ponto flutuante (decimal)
    printf("Me informe o número de pontos turísticos: ");
    scanf("%d", &turistico1); // %d inteiro é para ler um número inteiro

    //Array e variáveis arta 2

    char estado2[50], nome_cidade2[50], codigo2[4]; // %c char é para ler um caractere
    int populacao2, turistico2; // %d População da cidade   
    float area2, pib2;  // %f Área da cidade


    // Entrada de dados - Carta 2

 
    printf("\n--De as informações da carta 2--\n");
    
    printf("Digite o estado de 'A' a 'H':");
    scanf("%s", estado2);
    printf("Digite o código postal: ");
    scanf("%s", &codigo2);
    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade2);
    printf("População dessa cidade: ");   
    scanf("%d", &populacao2); // %d inteiro é para ler um número inteiro
    printf("Área da cidade em km²: ");
    scanf("%f", &area2); // %f float é para ler um número de ponto flutuante (decimal)
    printf("Pib da cidade em números: ");
    scanf("%f", &pib2); // %f float é para ler um número de ponto flutuante (decimal)
    printf("Me informe o número de pontos turísticos: ");
    scanf("%d", &turistico2); // %d inteiro é para ler um número inteiro

    //Saida dos sados - Carta 1

    printf("\nINFORMAÇÕES DA CARTA 1\n");

    printf("ESTADO: %s\n", estado1);
    printf("Código Postal: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turistico1);

    //Saida dos sados - Carta 2

    printf("\nINFORMAÇÕES DA CARTA 2\n");
    printf("ESTADO: %s\n", estado2);
    printf("Código Postal: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);	
    printf("Área: %.1f km²\n", area2); // %.3f float é para ler um número de ponto flutuante (decimal) com 3 casas decimais, ou seja , eu posso colocar a  área real 
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistico2);


    return 0;

}