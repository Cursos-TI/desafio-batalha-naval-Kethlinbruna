#include <stdio.h>
// Desafio Batalha Naval - MateCheck
// Nível Novato - Posicionamento dos Navios

int main() {
    // Criar o tabuleiro 5x5 vazio (tudo começa com 0)
    int tabuleiro[5][5] = {0};

    // Navio 1 (vertical) - ocupa posições (0,0), (1,0), (2,0)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][0] = 1;  
        printf("Navio Vertical: (%d,%d)\n", i, 0);
    }

    // Navio 2 (horizontal) - ocupa posições (4,1), (4,2), (4,3)
    for (int j = 1; j <= 3; j++) {
        tabuleiro[4][j] = 1;  
        printf("Navio Horizontal: (%d,%d)\n", 4, j);
    }

    return 0;
}
