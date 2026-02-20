#include <stdio.h>

int main() {
    // Definindo as constantes para o movimento em L do Cavalo
    // O Cavalo anda 2 casas para um lado e 1 para o lado perpendicular
    const int PASSO_BAIXO = 2;
    const int PASSO_ESQUERDA = 1;

    printf("--- Movimento do Cavalo ---\n");
    printf("O cavalo vai andar em L: 2 casas para Baixo e 1 para a Esquerda.\n\n");

    // Loop externo: controla o movimento principal (usando FOR)
    for (int i = 0; i < PASSO_BAIXO; i++) {
        // A cada repetição, o cavalo desce uma casa
        printf("Baixo\n");

        // Condição: O movimento lateral só acontece quando o cavalo terminar de descer.
        // Ou seja, na última repetição do loop externo (quando i for igual a PASSO_BAIXO - 1).
        if (i == PASSO_BAIXO - 1) {
            
            int j = 0;
            // Loop aninhado (interno): controla o movimento lateral (usando WHILE)
            while (j < PASSO_ESQUERDA) {
                printf("Esquerda\n");
                j++; // Incrementa para não causar loop infinito
            }
            
        }
    }

    return 0;
}