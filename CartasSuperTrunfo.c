#include <stdio.h>

int main() {

    // carta 1
    char estado1; // estado: A 
    char codigo1 [4]; // codigo da carta: A01, com limite de letras
    char nomeCidade1 [50];// nome da cidade, com limite de letras
    int populacao1; // numero da populacao
    float area1; // area do estado
    float pib1; // valor total de bens do estado
    int pontosTuristicos1; // quantidade de pontos turisticos

    // carta 2
    char estado2;               
    char codigo2[4];             
    char nomeCidade2[50];        
    int populacao2;              
    float area2;                 
    float pib2;                  
    int pontosTuristicos2; 

    // entrada de dados da carta 1
     printf("=== Carta 1 ===\n");
    printf("Digite o estado da primeira carta: "); 
    scanf(" %c", &estado1);   // %c para um único caractere

    printf("Digite o código da carta (Ex:A01): ");
    scanf(" %s", codigo1);  //%s para string 

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);  //%s para string 


    printf("Digite o número da população: ");
    scanf("%d", &populacao1);  // %d para inteiro

    printf("Digite a área do estado: "); // %f para float
    scanf("%f", &area1);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib1); // %f para float

    printf("Digite a quantidade de pontos turísticos do estado: ");
    scanf("%d", &pontosTuristicos1); // %d para inteiro



    // entrada de dados da segunda carta
    printf("\n=== Segunda Carta ===\n");
    printf("Digite o estado da carta: "); 
    scanf(" %c", &estado2);   

    printf("Digite o código da carta (Ex:A01): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite o número da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área do estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos do estado: ");
    scanf("%d", &pontosTuristicos2);

    
    // exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


return 0;

}
