#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("desafio super trunfo!\n");
    printf("novo commit!\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int  populacao, turisticos;
    float area, pib;
    char cidade, codigo, estado;

    printf("qual o seu estado: \n");
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





    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
