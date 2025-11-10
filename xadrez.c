#include  <stdio.h>

int main() {
    // === TORRE ===
    // A Torre vai se mover 5 casas para a direita.
    // Vamos usar o laço FOR para esse movimento.

    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // === BISPO ===
    // O Bispo vai se mover 5 casas na diagonal (Cima + Direita).
    // Vamos usar o laço WHILE para esse movimento.

    printf("\n=== Movimento do Bispo ===\n");
    int i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // === RAINHA ===
    // A Rainha vai se mover 8 casas para a esquerda.
    // Vamos usar o laço DO-WHILE para esse movimento.

    printf("\n=== Movimento da Rainha ===\n");
    int j = 1;
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= 8);

    printf("\nMovimentos concluídos!\n");

    return 0;
}