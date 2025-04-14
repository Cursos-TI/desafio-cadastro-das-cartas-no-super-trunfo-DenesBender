#include <stdio.h>

int main() {
    
    int Populacao;
    float Area;
    double PIB;
    int PontosTuristicos;
    char Nome[50];
    char Codigo[5];

    printf("Desafio Super Trunfo - Paises!\n");
    
    printf("Dados da Carta 1!\n");
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome);

    printf("Digite o Codigo da Cidade: \n");
    scanf("%s", Codigo);

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area km²: \n");
    scanf("%f", &Area);
    
    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);

    printf("Carta 1!\n");
    printf("Nome da Cidade: %s\n", Nome);
    printf("Código da Cidade: %s\n", Codigo);
    printf("População: %d\n", Populacao);
    printf("Area km²: %.3f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    printf("Dados da Carta 2!\n");

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome);

    printf("Digite o Codigo da Cidade: \n");
    scanf("%s", Codigo);

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);

    printf("Carta 1!\n");
    printf("Nome da Cidade: %s\n", Nome);
    printf("Código da Cidade: %s\n", Codigo);
    printf("População: %d\n", Populacao);
    printf("Area: %.3f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos); 


    return 0;
}

