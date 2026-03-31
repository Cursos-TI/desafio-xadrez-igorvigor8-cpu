#include <stdio.h>

// 🔷 TORRE (recursiva)
void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// 🔷 RAINHA (recursiva)
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// 🔷 BISPO (recursivo + loop aninhado)
void moverBispo(int casas) {
    if (casas == 0) return;

    // loop aninhado (simulação da diagonal)
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima + Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {

    printf("=== DESAFIO FINAL XADREZ ===\n\n");

    // 🔷 TORRE
    printf("Torre (5 casas para a direita):\n");
    moverTorre(5);

    printf("\n");

    // 🔷 BISPO
    printf("Bispo (5 casas na diagonal superior direita):\n");
    moverBispo(5);

    printf("\n");

    // 🔷 RAINHA
    printf("Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    printf("\n");

    // ♞ CAVALO (loops com múltiplas variáveis + break/continue)
    printf("Cavalo (movimento em L: 2 Cima + 1 Direita):\n");

    for (int i = 0, j = 0; i < 3; i++) {

        if (i == 2) {
            printf("Direita\n");
            continue;
        }

        if (i > 2) break;

        printf("Cima\n");
    }

    return 0;
}