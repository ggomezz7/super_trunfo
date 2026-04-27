#include <stdio.h>

    int main(){

        printf("-----------------------------\n");

        printf("Qual o estado?: ");
        char estado[30];
        scanf("%[^\n]", estado); // Lê o nome do estado
        
        printf("Escolha um código para a carta, ex(a0, b1...): ");
        char cod_carta[30];
        scanf(" %s", cod_carta); // Lê o código da carta

        printf("Escolha o nome da cidade: ");
        char cidade[30];
        scanf(" %[^\n]", cidade); // Lê o nome da cidade

        printf("Qual a população dessa cidade?: ");
        int populaçao;
        scanf(" %d", &populaçao); // Lê a população da cidade

        printf("Qual a area em km2 dessa cidade?: ");
        float area;
        scanf("%f", &area); // Lê a área em Km² da cidade

        printf("Qual o PIB dessa cidade?: " );
        float pib;
        scanf("%f", &pib); // Lê o produto interno bruto da cidade

        printf("Qual o número de pontos turísticos?: ");
        int pontos_turisticos;
        scanf("%d", &pontos_turisticos); // Lê a quantidade de pontos turísticos da cidade

        printf("---------------------------------\n");

        printf("O seu estado é: %s.\n", estado);
        printf("O seu código é: %s.\n", cod_carta);
        printf("A cidade do seu estado é %s.\n", cidade);
        printf("A população da sua cidade é: %d \n", populaçao);
        printf("A área da sua cidade é: %.2f\n", area);
        printf("O pib da sua cidade é %.2f\n", pib);
        printf("O número de pontos turísticos é: %d\n", pontos_turisticos);

        printf("------------------------------------\n");

        // Informações carta 2.

        printf("\nEscolha o segundo estado: ");
        char estado2[30];
        scanf(" %[^\n]", estado2);

        printf("Escolha o código para a segunda carta: ");
        char cod_carta2[30];
        scanf("%s", cod_carta2);

        printf("Qual a cidade do seu segundo estado?: ");
        char cidade2[30];
        scanf(" %[^\n]", cidade2);

        printf("Qual a população da segunda cidade?: ");
        int populaçao2;
        scanf(" %d", &populaçao2);

        printf("Qual a area em km2 da segunda cidade?: ");
        float area2;
        scanf("%f", &area2);

        printf("Qual o pib da segunda cidade?: ");
        float pib2;
        scanf("%f", &pib2);

        printf("Qual o número de pontos turísticos da segunda cidade?: ");
        int pontos_turisticos2;
        scanf("%d", &pontos_turisticos2);
    
        printf("-----------------------------\n");
    
        printf("O seu estado 2 é: %s.\n", estado2);
        printf("O seu código 2 é: %s.\n", cod_carta2);
        printf("A cidade do seu estado 2 é: %s.\n", cidade2);
        printf("A população da sua cidade 2 é: %d \n", populaçao2);
        printf("A área da sua cidade 2 é: %.2f\n", area2);
        printf("O pib da sua cidade 2 é: %.2f\n", pib2);
        printf("O número de pontos turísticos 2 é: %d\n", pontos_turisticos2);
        printf("------------------------------------\n");

        if (populaçao > populaçao2) {
            printf("A população da primeira cidade é maior do que a segunda.\n");
        } else if (populaçao < populaçao2) {
            printf("A população da segunda cidade é maior do que a primeira.\n");
        } else {
            printf("A população das duas cidades é igual.\n");
        }

        if (area > area2) {
            printf("A área da primeira cidade é maior do que a segunda.\n");
        } else if (area2 > area) {
            printf("A área da segunda cidade é maior do que a primeira.\n");
        } else {
            printf("A área das duas cidades é igual.\n");
        }

        if (pib > pib2) {
            printf("O pib da primeira cidade é maior do que a segunda.\n");
        } else if (pib2 > pib) {
            printf("O pib da segunda cidade é maior do que a primeira.\n");
        } else {
            printf("O pib das duas cidades é igual.\n");
        }

        if (pontos_turisticos > pontos_turisticos2) {
            printf("O número de pontos turísticos da primeira cidade é maior do que a segunda.\n");
        } else if (pontos_turisticos2 > pontos_turisticos) {
            printf("O número de pontos turísticos da segunda cidade é maior do que a primeira.\n");
        } else {
            printf("O número de pontos turísticos das duas cidades é igual.\n");
        }

        printf("\n-----------------------------\n");

        return 0;
    }   