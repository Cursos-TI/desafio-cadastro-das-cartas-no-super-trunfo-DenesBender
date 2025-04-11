#include <stdio.h>

int main() {
    
    int População;
    float Area;
    float PIB;
    int PontosTuristicos;
    char NomedaCidade[50];
    char CódigodaCidade[5];

    printf("Desafio Super Trunfo - Países!\n");
    
    printf("Carta 1!\n");
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomedaCidade);

    printf("Digite o Código da Cidade: \n");
    scanf("%s", CódigodaCidade);

    printf("Digite a População: \n");
    scanf("%d", &População);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%e", &PIB);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);



    printf("Nome da Cidade: %s\n", NomedaCidade);
    printf("Código da Cidade: %s\n", CódigodaCidade);
    printf("População: %d\n", População);
    printf("Area: %f\n", Area);
    printf("PIB: %e\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);


    return 0;
}
