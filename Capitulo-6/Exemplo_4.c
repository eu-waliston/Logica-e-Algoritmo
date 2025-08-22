// Exemplo 4 – Matriz Identidade

#include <stdio.h>

int main(){
    int n, i, j;

    printf("Digite o tamanho da matriz identidade: ");
    scanf("%d", &n);

    int matriz[n][n]; // Matriz quadrada NxN

    // Preenchendo a matriz identidade
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matriz[i][j] = (i == j) ? 1 : 0;
        }
    }

    // Exibindo a matriz
    printf("Matriz identidade %dx%d:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

    /*
        👉 Conceito: A matriz identidade possui 1 na diagonal principal e 0 nas demais posições.
    */
}