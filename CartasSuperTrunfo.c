#include <stdio.h>

int main() {
    
    int População;
    float Area;
    float PIB;
    int Pontos Turisticos;
    char Nome da Cidade[50];
    char Código da Cidade[50];

    printf("Desafio Super Trunfo - Países!\n");
    
    printf("Carta 1!\n");
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome da Cidade);

    printf("Digite o Código da Cidade: \n");
    scanf("%s", Código da Cidade);

    printf("Digite a População: \n");
    scanf("%d", &População);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%e", &PIB);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &Pontos Turisticos);



    printf("Nome da Cidade: %s\n", Nome da Cidade);
    printf("Código da Cidade: %s\n", Código da Cidade);
    printf("População: %d\n", População);
    printf("Area: %f\n", Area);
    printf("PIB: %e\n", PIB);
    printf("Pontos Turisticos: %d\n", Pontos Turisticos);


    return 0;
}
