#include <stdio.h>

int main() {

    char estado, estado2;
    char codigo [5], codigo2[5];
    char nome [20], nome2 [20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosturisticos, pontosturisticos2;

//carta 1
    printf("\nCarta 1\n ");
    printf("\nDigite uma letra de 'A' a 'H' para (representar um dos 8 estados): \n");
    scanf("%c", &estado);
    
    printf("Digite o codigo do estado usando um numero de 2 digitos (ex: A01, A02, ...): \n");
    scanf("%3s", codigo);

    printf("Digite o nome de uma cidade brasileira: \n");
    scanf("%s", nome);

    printf("Digite a quantide populacioal da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km²: \n");
    scanf("%f" , &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos);


    //carta 2
    printf("\nCarta 2\n ");
    printf("\nDigite uma letra de 'A' a 'H' para (representar um dos 8 estados): \n");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo do estado usando um numero de 2 digitos (ex: A01, A02, ...): \n");
    scanf("%3s", codigo2);

    printf("Digite o nome de uma cidade brasileira: \n");
    scanf("%s", nome2);

    printf("Digite a quantide populacioal da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²: \n");
    scanf("%f" , &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);



    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("Pib: %.2f bilhões de reais\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);

   

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Eodigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);


    return 0;
}

