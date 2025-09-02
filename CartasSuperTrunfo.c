#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

        char estado01[20], codigo01[3], cidade01[20];
    int populacao01, ponto01; 
    float area01, pib01;

    char estado02[20], codigo02[3], cidade02[20];
    int populacao02, ponto02; 
    float area02, pib02;

    printf("Digite os Dados da Carta 1\n ");
    printf("Nome do estado: ");
    scanf(" %s", estado01);

    printf("Codigo da carta(letra do estado mais um número de 01 a 04): ");
    scanf(" %s", codigo01);

    printf("Nome da cidade: ");
    scanf(" %s", cidade01);

    printf("Tamanho da população: ");
    scanf("%d", &populacao01);

    printf("Área em km²: ");
    scanf("%f", &area01 );

    printf("PIB da cidade: ");
    scanf("%f", &pib01);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &ponto01);

    printf("-----Carta 1-----\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Nome da Cidade: %s\n",cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Números de Pontos Turísticos: %d\n", ponto01);
    printf("-----------------");

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

    printf("-----Carta 2-----\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Nome da Cidade: %s\n",cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Números de Pontos Turísticos: %d\n", ponto02);
    printf("-----------------");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
