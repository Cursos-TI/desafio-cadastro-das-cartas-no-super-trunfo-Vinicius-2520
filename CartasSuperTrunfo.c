#include <stdio.h>

int main() {
    // Definição das variáveis para as cidades e atributos
    char estado1 = 'G', estado2 = 'P';                     //Letra que representa a inicial do estado
    char codigo1[] = "G01", codigo2[] = "P02";            //codígo com a letra inicial do estado e numero da carta
    char nome1[] = "Goiânia", nome2[] = "Curitiba";      //nome das cidades
    float populacao1 = 1494599, populacao2 = 1774000;   //população em milhoes
    float area1 = 728.8, area2 = 432.0;                //área em Km²
    float pib1 = 59.8, pib2 = 98.0;                   //em bilhoes de Reais
    int pontos1 = 37, pontos2 = 35;                  //numeros de pontos turisticos

    int escolhaCidade;                             //variavel escolha de cidade
    int escolhaAtributo;                          //variavel escolha de atributo

    // Exibe uma saudação e as opções para o usuário
    printf("Bem-vindo ao jogo de Super Trunfo - Tema: Cidades!\n");
    printf("Escolha uma cidade:\n");
    printf("1. Goiânia\n");
    printf("2. Curitiba\n");
    scanf("%d", &escolhaCidade);

    // Verifica qual cidade foi escolhida
    if (escolhaCidade == 1) { // verifica se a cidade 1 foi escolhida e printa na tela o nome da mesma
        printf("\nVocê escolheu a cidade: %s\n", nome1); 
    } else if (escolhaCidade == 2) {  // verifica se a cidade 2 foi escolhida e printa na tela o nome da mesma
        printf("\nVocê escolheu a cidade: %s\n", nome2); 
    } else { //senao da opção invalida
        printf("Opção inválida!\n");
        return 0; // retorno do codigo a 0
    }

    // Exibe as opções de atributos para o usuário
    printf("\nEscolha um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    scanf("%d", &escolhaAtributo);

    // Exibe o atributo selecionado da cidade escolhida
    if (escolhaCidade == 1) {                                                 //variaves de escolhas de atributos para a cidade 1
        if (escolhaAtributo == 1) {
            printf("População de %s: %.0f\n", nome1, populacao1);            // especificador %.0f é usado para imprimir números da variante float
        } else if (escolhaAtributo == 2) {
            printf("Área de %s: %.1f km²\n", nome1, area1);                 //Este especificador %s é utilizado para imprimir variaveis de char.
        } else if (escolhaAtributo == 3) {
            printf("PIB de %s: %.1f bilhões de reais\n", nome1, pib1);     //%.1f faz com que o número de ponto flutuante seja impresso com uma casa decimal.
        } else if (escolhaAtributo == 4) {
            printf("Pontos turísticos de %s: %d\n", nome1, pontos1);
        } else {
            printf("Opção inválida!\n");
        }
    } else if (escolhaCidade == 2) {                                    // variaveis de escolhas de atributos para cidade 2
        if (escolhaAtributo == 1) {
            printf("População de %s: %.0f\n", nome2, populacao2);
        } else if (escolhaAtributo == 2) {
            printf("Área de %s: %.1f km²\n", nome2, area2);
        } else if (escolhaAtributo == 3) {
            printf("PIB de %s: %.1f bilhões de reais\n", nome2, pib2);
        } else if (escolhaAtributo == 4) {
            printf("Pontos turísticos de %s: %d\n", nome2, pontos2);
        } else {
            printf("Opção inválida!\n");
        }
    }

    return 0;
}


