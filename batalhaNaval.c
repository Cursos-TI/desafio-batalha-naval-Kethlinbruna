#include <stdio.h>

// Define o tamanho do tabuleiro
#define LINHAS 10
#define COLUNAS 10

int main() {
    // Cria o tabuleiro usando uma matriz bidimensional
    char tabuleiro[LINHAS][COLUNAS];
    int i, j;

    // Inicializa o tabuleiro com 'A' (Água)
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 'A';
        }
    }

    // --- Posicionamento Manual dos Navios ---

    // Navio 1 (Horizontal - 3 posições)
    // Coordenadas: (2, 3), (2, 4), (2, 5)
    int navio1_linha = 2;
    int navio1_coluna_inicial = 3;
    int tamanho_navio1 = 3;
    for (j = 0; j < tamanho_navio1; j++) {
        tabuleiro[navio1_linha][navio1_coluna_inicial + j] = 'N';
    }

    // Navio 2 (Vertical - 4 posições)
    // Coordenadas: (5, 7), (6, 7), (7, 7), (8, 7)
    int navio2_linha_inicial = 5;
    int navio2_coluna = 7;
    int tamanho_navio2 = 4;
    for (i = 0; i < tamanho_navio2; i++) {
        tabuleiro[navio2_linha_inicial + i][navio2_coluna] = 'N';
    }

    // --- Exibição das Coordenadas dos Navios ---

    printf("Coordenadas do Navio 1 (Horizontal):\n");
    for (j = 0; j < tamanho_navio1; j++) {
        printf("  - Linha: %d, Coluna: %d\n", navio1_linha, navio1_coluna_inicial + j);
    }

    printf("\nCoordenadas do Navio 2 (Vertical):\n");
    for (i = 0; i < tamanho_navio2; i++) {
        printf("  - Linha: %d, Coluna: %d\n", navio2_linha_inicial + i, navio2_coluna);
    }

    // (Opcional) Exibir o tabuleiro completo para visualização
    printf("\n--- Tabuleiro Completo ---\n");
    printf("  ");
    for (j = 0; j < COLUNAS; j++) {
        printf("%d ", j);
    }
    printf("\n");
    for (i = 0; i < LINHAS; i++) {
        printf("%d ", i);
        for (j = 0; j < COLUNAS; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
