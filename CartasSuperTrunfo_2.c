#include <stdio.h>

int main(){
    char estado01[20], codigo01[3], cidade01[20];
    int populacao01, ponto01; 
    float area01, pib01, densi_pop01, pib_per01;

    char estado02[20], codigo02[3], cidade02[20];
    int populacao02, ponto02; 
    float area02, pib02, densi_pop02, pib_per02;

    //A seguir vai ser a coleta de dados da carta 1
    printf("Digite os Dados da Carta 1\n ");
    printf("Nome do estado: ");
    scanf("%s", estado01);

    printf("Codigo da carta(letra do estado mais um número de 01 a 04): ");
    scanf("%s", codigo01);

    printf("Nome da cidade: ");
    scanf("%s", cidade01);

    printf("Tamanho da população: ");
    scanf("%d", &populacao01);

    printf("Área em km²: ");
    scanf("%f", &area01 );

    printf("PIB da cidade: ");
    scanf("%f", &pib01);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &ponto01);

    densi_pop01 = populacao01/area01; // Fazendo o calculo da densidade populacional da carta 1

    pib_per01 = (float)pib01*1000000000/populacao01;//Fazendo o calculo do PIB per Capita

    //Exibição da carta 1
    printf("-----Carta 1-----\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Nome da Cidade: %s\n",cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Números de Pontos Turísticos: %d\n", ponto01);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_pop01);
    printf("PIB per Capita: %.2f reais \n", pib_per01);
    printf("-----------------\n");

    //Coleta de dados da carta 2
    printf("Digite os Dados da Carta 2\n ");
    printf("Nome do estado: ");
    scanf(" %s", estado02);

    printf("Codigo da carta(letra do estado mais um número de 01 a 04): ");
    scanf(" %s", codigo02);

    printf("Nome da cidade: ");
    scanf(" %s", cidade02);

    printf("Tamanho da população: ");
    scanf("%d", &populacao02);

    printf("Área em km²: ");
    scanf("%f", &area02 );

    printf("PIB da cidade: ");
    scanf("%f", &pib02);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &ponto02);

    densi_pop02 = populacao02/ area02;//Calculando a densidade populacional da carta 2
    pib_per02 = (float) pib02*1000000000/ populacao02;//Calculando o PIB per Capita da carta 2

    // Exibiçao dos dados da carta 2
    printf("-----Carta 2-----\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Nome da Cidade: %s\n",cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Números de Pontos Turísticos: %d\n", ponto02);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_pop02);
    printf("PIB per Capita: %.2f reais \n", pib_per02);
    printf("-----------------\n");
}