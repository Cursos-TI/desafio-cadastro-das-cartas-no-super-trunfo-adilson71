#include <stdio.h>
#include <stdlib.h>

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
    
    // Dados da carta 1
    char cidade1[50], estado1[20], codigo1[20];
    int populacao1, pontosturisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Dados da carta 2
    char cidade2[50], estado2[20], codigo2[20];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("qual o seu estado (sigla): \n");
    scanf("%s", &estado1);
    printf("qual eh a sua cidade (sigla): \n");
    scanf("%s", &cidade1);
    printf("qual a populacao: \n");
    scanf("%d", &populacao1);
    printf("Codigo da carta: \n");
    scanf("%s", &codigo1);
    printf("qual a area: \n");
    scanf("%f", &area1);
    printf("qual o pib: \n");
    scanf("%f", &pib1);
    printf("numeros de pontos turisticos!\n");
    scanf("%d", &pontosturisticos1);

     // Calcular densidade populacional
     densidade1 = populacao1 / area1;

     printf("==> Densidade populacional: %.2f hab/km² <==\n\n", densidade1);

     // Calcular Pib Per Capita
     pib_per_capita1 = pib1/populacao1 ;

     printf("==> Pib Per Capita: %.2f  <==\n\n", pib_per_capita1);

     printf("=================================\n\n");
     

    printf("=====carta 02=======\n\n");

    printf("qual o seu estado (sigla): \n");
    scanf("%s", &estado2);
    printf("qual eh a sua cidade (sigla): \n");
    scanf("%s", &cidade2);
    printf("qual a populacao: \n");
    scanf("%d", &populacao2);
    printf("Codigo da carta: \n");
    scanf("%d", &codigo2);
    printf("Area: \n");
    scanf("%f", &area2);
    printf("Pib: \n");
    scanf("%f", &pib2);
    printf("Numeros de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos2);


    // Calcular densidade populacional
    densidade2 = populacao2 / area2;

    printf("==> Densidade populacional: %.2f hab/km² <==\n\n ", densidade2);

    // Calcular Pib Per Capita
    pib_per_capita2 = pib2/populacao2 ;
    printf("==> Pib Per Capita: %.2f <==\n\n", pib_per_capita2);

    /*
    // comparação do resultado de menor densidade populacional

    printf("=================================================================================\n\n");
    printf("=====================Comparando Densidade Populacional===========================\n\n");
    printf("=================================================================================\n\n");

    printf("densidade populacional carta 1: %.2f hab/km\n\n", densidade1);
    printf("densidade populacional carta 2: %.2f hab/km\n\n", densidade2);


    if (densidade1 < densidade2) {
        printf("Resultado: (%s) Venceu por ter a menor Densidade Populacional!\n\n", estado1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: (%s) Venceu por ter a menor Densidade Populacional!\n\n", estado2);
    }
    */

    printf("=================================================================================\n\n");
    /*

    // comparacao das duas cartas 

    printf("====================================================================\n");

    printf("================== COMPARACAO ENTRE AS CARTAS ======================\n");

    printf("====================================================================\n\n");
    
    
    printf("Carta 1: (%s) tem populacao: %d\n\n", estado1, populacao1);
    printf("Carta 2: (%s) tem populacao: %d\n\n", estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: (%s) venceu por ter a maior populacao!\n\n", estado1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: (%s) venceu por ter a maior populacao!\n\n", estado2);
    }
    printf("===================================================================\n\n");
    */
      

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // comparacao das duas cartas 
    // criando opcao com switch
    // criando menu com switch

    printf("desafio super trunfo!\n");
    printf("novo commit!\n\n");
    printf("Menu Principal\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. pib_per_capita\n");
    printf("4. Pib\n ");
    printf("5. Densidade Populacional\n");
    printf("6. Pontos Turisticos\n");
    printf("7. Explicacao do jogo\n");
    printf("8. sair do jogo\n");
    printf("========================================================\n");
    printf("Escolha uma Opcao para comparacao: ");
    scanf("%d", &opcao);
    printf("========================================================\n");


    switch(opcao){
        case 1:
            if (populacao1 > populacao2){
                printf("A (%s) ganhou com maior Populacao!\n", &cidade1);  
            } else if (populacao1 < populacao2){
                printf("A (%s) ganhou com maior Populacao!\n", &cidade2);  
            }else {
                printf("AS CARTAS TEM O MESMO VALOR E POR ISSO DEU EMPATE!\n");
                printf("==================================================\n");
             }
             break;
            case 2:
               if (area1 > area2){
                printf("A (%s) ganhou com maior Area!\n", &cidade1);  
             }else if (area1 < area2){
                printf("A (%s) ganhou com maior Populacao!\n", &cidade2);  
            }else {
                printf("AS CARTAS TEM O MESMO VALOR E POR ISSO DEU EMPATE!\n");
                printf("==================================================\n");
             }
            break;
            case 3:
            if (pib_per_capita1 > pib_per_capita2){
                printf("A (%s) ganhou com maior Pib_per_capita!\n", &cidade1);  
            }else if (pib_per_capita1 < pib_per_capita2){
                printf("A (%s) ganhou com maior Populacao!\n", &cidade2);  
            }else {
                printf("AS CARTAS TEM O MESMO VALOR E POR ISSO DEU EMPATE!\n");
                printf("==================================================\n");
             }
            break;   
            case 4:
            if (pib1 > pib2){
                printf("A (%s)ganhou com maior Pib!\n", &cidade1);  
            }else if (pib1 < pib2){
                printf("A (%s) ganhou com maior Populacao!\n", &cidade2);  
            }else {
                printf("AS CARTAS TEM O MESMO VALOR E POR ISSO DEU EMPATE!\n");
                printf("==================================================\n");
             } 
            break;  
            case 5:
            if  (densidade1 < densidade2){
                printf("A (%s) ganhou com menor Densidade Populacional!\n", &cidade1);  
            }else if (densidade1 > densidade2){
                printf("A (%s) ganhou com maior Populacao!\n", &cidade2);  
            }else {
                printf("AS CARTAS TEM O MESMO VALOR E POR ISSO DEU EMPATE!\n");
                printf("==================================================\n");
             }
            break;
            case 6:
            if (pontosturisticos1 > pontosturisticos2){
                printf("A (%s) ganhou com maior Ponto turisco!\n", &cidade1);  
            }else if (pontosturisticos1 < pontosturisticos2){
                printf("A (%s) ganhou com maior Populacao!\n", &cidade2);  
            }else {
                printf("AS CARTAS TEM O MESMO VALOR E POR ISSO DEU EMPATE!\n");
                printf("==================================================\n");
             }
            break;
        case 7:
            printf("A explicacao do jogo!\n");
            break;
        case 8:
            printf("Saindo do jogo!\n");
            break;
            default:
            printf("Opcao Invalida!\n");
            
           
            
    }
    

    return 0;
}
