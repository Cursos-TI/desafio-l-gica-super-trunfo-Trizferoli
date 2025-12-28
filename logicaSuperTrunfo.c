#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char state1;
    char cardCode1[3];
    char cityName1[100];
    int population1;
    float area1;
    float PIB1;
    int touristSitesCount1;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades

    printf("Digite o código da cidade: ");

    scanf("%c", &state1);

    printf("Digite o código da carta: ");
    scanf("%s", cardCode1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cityName1);

    printf("Digite a população da cidade: ");
    scanf("%d", &population1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &touristSitesCount1);


    char state2;
    char cardCode2[3];
    char cityName2[100];
    int population2;
    float area2;
    float PIB2;
    int touristSitesCount2;

    printf("AGORA INSIRA AS INFORMAÇÕES DA SEGUNDA CIDADE: \n");

    printf("Digite o código da cidade: ");
    scanf("%c", &state2);

    printf("Digite o código da carta: ");
    scanf("%s", cardCode2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cityName2);

    printf("Digite a população da cidade: ");
    scanf("%d", &population2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &touristSitesCount2);
    

    char *winsOfCity1[4];
    int winsOfCity1Index = 0;

    char *winsOfCity2[4];
    int winsOfCity2Index = 0;

    char *draws[4];
    int drawsIndex = 0;

    if (population1 > population2) {
        winsOfCity1[winsOfCity1Index] = "população";
        winsOfCity1Index++;
    } else if (population1 < population2) {
        winsOfCity2[winsOfCity2Index] = "população";    
        winsOfCity2Index++;
    } else {
        draws[drawsIndex] = "população" ;
        drawsIndex++;
    }


    if (area1 > area2) {
        winsOfCity1[winsOfCity1Index] = "área";
        winsOfCity1Index++;
    } else if (area1 < area2) {
        winsOfCity2[winsOfCity2Index] = "área";
        winsOfCity2Index++;
    } else {
        draws[drawsIndex] = "área";
        drawsIndex++;
    }

    if (PIB1 > PIB2) {
        winsOfCity1[winsOfCity1Index] = "PIB";
        winsOfCity1Index++;
    } else if (PIB1 < PIB2) {
        winsOfCity2[winsOfCity2Index] = "PIB";
        winsOfCity2Index++;
    } else {
        draws[drawsIndex] = "PIB";
        drawsIndex++;
    }

    if (touristSitesCount1 > touristSitesCount2) {
        winsOfCity1[winsOfCity1Index] = "pontos turísticos";
        winsOfCity1Index++;
    } else if (touristSitesCount1 < touristSitesCount2) {
        winsOfCity2[winsOfCity2Index] = "pontos turísticos";
        winsOfCity2Index++;
    } else {
        draws[drawsIndex] = "pontos turísticos";
        drawsIndex++;}

    if (winsOfCity1Index > winsOfCity2Index) {
        printf("A cidade %s venceu a comparação com %d vitórias e %d empates. \n", cityName1, winsOfCity1Index, drawsIndex);
        for (int i = 0; i < winsOfCity1Index; i++) {
            printf("Categoria: %s\n", winsOfCity1[i]);
        }
    } else if (winsOfCity1Index < winsOfCity2Index) {
        printf("A cidade %s venceu a comparação com %d vitórias e %d empates. \n", cityName2, winsOfCity2Index, drawsIndex);
        for (int i = 0; i < winsOfCity2Index; i++) {
            printf("Categoria: %s\n", winsOfCity2[i]);
        }
    } 
    else {
        printf("As duas cidades empataram");
    }

    return 0;
}
