#include <stdio.h>

int main() {

    int i, j;

    printf("=== DESAFIO XADREZ ===\n\n");

    // 🔷 TORRE - 5 casas para a direita (WHILE)
    printf("Torre (5 casas para a direita):\n");
    i = 0;
    while (i < 5) {
        printf("Direita\n");
        i++;
    }

    printf("\n");

    // 🔷 BISPO - 5 casas na diagonal (FOR)
    printf("Bispo (5 casas na diagonal superior direita):\n");
    for (i = 0; i < 5; i++) {
        printf("Cima + Direita\n");
    }

    printf("\n");

    // 🔷 RAINHA - 8 casas para a esquerda (DO-WHILE)
    printf("Rainha (8 casas para a esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    printf("\n");

    // ♞ CAVALO - movimento em L (loops aninhados)
    printf("Cavalo (movimento em L: 2 Cima + 1 Direita):\n");

    for (i = 0; i < 1; i++) { // controle do movimento

        // 2 casas para cima
        for (j = 0; j < 2; j++) {
            printf("Cima\n");
        }

        // 1 casa para direita
        for (j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    printf("\n");

    return 0;
}