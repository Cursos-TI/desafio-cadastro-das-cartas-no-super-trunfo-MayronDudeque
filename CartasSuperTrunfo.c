#include <stdio.h>

int main(){

    
    char Estado1[4], Estado2[4];

    char CodigoDaCarta1[4], CodigoDaCarta2[4]; 

    char Cidade1[50], Cidade2[50];

    int Carta1, Populacao1, Carta2, Populacao2;
    
    float Area1, PIB1, Area2, PIB2;

    int PontosTuristicos1, PontosTuristicos2;

    printf("Digite o numero da carta: ");
    scanf("%d", &Carta1);

    printf("\nDigite a opção referente ao Estado (de A ao H): ");
    scanf("%s", &Estado1);
    
    printf("\nDigite o código da carta: ");
    scanf("%s", &CodigoDaCarta1);
    
    printf("\nDigite o nome da cidade: ");
    scanf("%s", &Cidade1);
    
    printf("\nDigite o numero de habitantes: ");
    scanf("%d", &Populacao1);
    
    printf("\nDigite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area1);

    printf("\nDigite O Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB1);

    printf("\nDigite a  quantidade de pontos turísticos na cidade: ");
    scanf("%d", &PontosTuristicos1);

    // Outra Carta

    printf("\n\nDigite o numero da carta: ");
    scanf("%d", &Carta2);

    printf("\nDigite a opção referente ao Estado (de A ao H): ");
    scanf("%s", &Estado2);
    
    printf("\nDigite o código da carta: ");
    scanf("%s", &CodigoDaCarta2);
    
    printf("\nDigite o nome da cidade: ");
    scanf("%s", &Cidade2);
    
    printf("\nDigite o numero de habitantes: ");
    scanf("%d", &Populacao2);
    
    printf("\nDigite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area2);

    printf("\nDigite O Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB2);

    printf("\nDigite a  quantidade de pontos turísticos na cidade: ");
    scanf("%d", &PontosTuristicos2);

    printf("\n carta: %d\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d", Carta1, Estado1, CodigoDaCarta1, Cidade1, Populacao1, Area1, PIB1, PontosTuristicos1);

    printf("\n\n carta: %d\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d", Carta2, Estado2, CodigoDaCarta2, Cidade2, Populacao2, Area2, PIB2, PontosTuristicos2);

    return 0;
    










}
