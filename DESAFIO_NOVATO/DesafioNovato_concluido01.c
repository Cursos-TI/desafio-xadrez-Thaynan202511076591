#include <stdio.h>

int main() {
    // Definindo as constantes para facilitar a manutenção do código
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    // 1. Movimento da Torre: 5 casas para a direita (usando FOR)
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    // 2. Movimento do Bispo: 5 casas na diagonal superior direita (usando WHILE)
    printf("\n--- Movimento do Bispo ---\n");
    int j = 0; // Variável de controle fora do loop
    while (j < MOV_BISPO) {
        // A diagonal é simulada movendo para Cima e depois para a Direita no mesmo passo
        printf("Cima\n");
        printf("Direita\n");
        j++; // Não esquecer de incrementar para evitar loop infinito
    }

    // 3. Movimento da Rainha: 8 casas para a esquerda (usando DO-WHILE)
    printf("\n--- Movimento da Rainha ---\n");
    int k = 0; // Variável de controle
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA); // O teste é feito no final

    return 0;
}