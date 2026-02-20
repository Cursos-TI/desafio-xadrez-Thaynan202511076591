#include <stdio.h>

// 1. Função Recursiva: Torre (5 casas para a Direita)
void moverTorre(int casas) {
    // Condição de parada da recursividade
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chama a si mesma diminuindo o número de casas
    }
}

// 2. Função Recursiva: Rainha (8 casas para a Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// 3. Função Recursiva + Loops Aninhados: Bispo (5 casas na Diagonal Cima/Direita)
void moverBispo(int casas) {
    if (casas > 0) {
        // Exigência do desafio: Loops aninhados dentro da movimentação do Bispo
        // Esses loops rodam apenas 1 vez por chamada recursiva para simular a diagonal
        for (int i = 0; i < 1; i++) {
            printf("Cima\n");
            
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
        
        // Chamada recursiva para o próximo passo
        moverBispo(casas - 1);
    }
}

int main() {
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(5);

    printf("\n--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(8);

    printf("\n--- Movimento do Bispo (Recursivo com Loops Aninhados) ---\n");
    moverBispo(5);

    printf("\n--- Movimento do Cavalo (Loops Complexos: 2 Cima, 1 Direita) ---\n");
    // O Cavalo se move em L para cima e à direita.
    // Loop com múltiplas variáveis (i e j) controlando os passos.
    for (int i = 1, j = 1; i <= 3; i++, j++) {
        
        // Nas duas primeiras iterações (passos 1 e 2), o cavalo vai para cima
        if (i <= 2) {
            printf("Cima\n");
            continue; // Pula o resto do bloco e vai para a próxima repetição do loop
        }
        
        // Quando chega no passo 3, o 'continue' não é lido, então ele vira à direita
        printf("Direita\n");
        break; // Interrompe o loop imediatamente, pois o movimento acabou
    }

    return 0;
}