#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Definindo a estrutura da carta
typedef struct {
    char estado;                 // Letra de A a H
    char codigo[4];             // Código da carta (ex: A01)
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // População
    float area;                // Área em km²
    float pib;                 // PIB
    int pontosTuristicos;     // Número de pontos turísticos

} CartaCidade;

void lerCarta(CartaCidade *carta, int indice) {
    printf("=== Cadastro da Carta %d ===\n", indice + 1);

    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nomeCidade); // Lê até o fim da linha (inclui espaços)

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    printf("\n");
}

void exibirCarta(CartaCidade carta, int indice) {
    printf("=== Carta %d ===\n", indice + 1);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("\n");
}

int main() {
    CartaCidade cartas[2];

    for (int i = 0; i < 2; i++) {
        lerCarta(&cartas[i], i);
    }

    printf("=== Cartas Cadastradas ===\n\n");
    for (int i = 0; i < 2; i++) {
        exibirCarta(cartas[i], i);
    }

    return 0;
}