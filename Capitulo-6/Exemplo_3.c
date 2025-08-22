// Exemplo 3 – Matriz Bidimensional
#include <stdio.h>

int main() {
    int  matriz[3][3]; // Matriz 3x3
    int i,j;

    // Preenchendo a matriz
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i,j);
            scanf("%d", matriz[i][j]);
        }
    }

    // Exibindo a matriz
    printf("Matriz digitada: \n");
    for(i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;

    /*
        👉 Conceito: Matrizes armazenam dados em linhas e colunas.
    */
}