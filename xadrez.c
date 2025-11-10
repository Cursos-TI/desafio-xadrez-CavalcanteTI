#include  <stdio.h>

int main() {
    // === TORRE ===
    // A Torre vai se mover 5 casas para a direita.
    // Vamos usar o laço FOR para esse movimento.

    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // === BISPO ===
    // O Bispo vai se mover 5 casas na diagonal (Cima + Direita).
    // Vamos usar o laço WHILE para esse movimento.

    printf("\n=== Movimento do Bispo ===\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // === RAINHA ===
    // A Rainha vai se mover 8 casas para a esquerda.
    // Vamos usar o laço DO-WHILE para esse movimento.

    printf("\n=== Movimento da Rainha ===\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);

   return 0;
}
