#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("desafio super trunfo!\n");
    printf("novo commit!\n\n");
    printf("=====CARTA 01======!\n\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int  populacao, turisticos;
    float area, pib, densidade, pib_per_capita;
    char cidade[50], codigo[20], estado[3];
    int divisao;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("qual o seu estado (sigla): \n");
    scanf("%s", &estado);
    printf("qual é a sua cidade: \n");
    scanf("%s", &cidade);
    printf("qual a populacao: \n");
    scanf("%d", &populacao);
    printf("Codigo da carta: \n");
    scanf("%s", &codigo);
    printf("qual a area: \n");
    scanf("%f", &area);
    printf("qual o pib: \n");
    scanf("%f", &pib);
    printf("numeros de pontos turisticos!\n");
    scanf("%d", &turisticos);

     // Calcular densidade populacional
     densidade = populacao / area;

     printf("==> Densidade populacional: %.2f hab/km² <==\n\n", densidade);

     // Calcular Pib Per Capita
     pib_per_capita = pib/populacao ;

     printf("==> Pib Per Capita: %.2f  <==\n\n", pib_per_capita);

     printf("=================================\n\n");
     

    printf("=====carta 02=======\n\n");

    printf("qual o seu estado: \n");
    scanf("%s", &estado);
    printf("qual é a sua cidade: \n");
    scanf("%s", &cidade);
    printf("qual a populacao: \n");
    scanf("%d", &populacao);
    printf("Codigo da carta: \n");
    scanf("%d", &codigo);
    printf("Area: \n");
    scanf("%f", &area);
    printf("Pib: \n");
    scanf("%f", &pib);
    printf("Numeros de Pontos Turisticos:\n");
    scanf("%d", &turisticos);


    // Calcular densidade populacional
    densidade = populacao / area;

    printf("==> Densidade populacional: %.2f hab/km² <==\n\n ", densidade);

    // Calcular Pib Per Capita
    pib_per_capita = pib/populacao ;

    printf("==> Pib Per Capita: %.2f <==\n\n", pib_per_capita);
    printf("==============================\n");
    
    


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
