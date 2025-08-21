// Exemplo 3 – Matriz Identidade

#include <stdio.h>

int main() {
    int n;

    printf("Digite o tamanho da matriz identidade: ");
    scanf("%d", &n);

    int matriz[n][n];

    //preenchimento a matriz de identidade
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    //Exibe a mtriz
    printf("Matriz identidade:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

    /*
        👉 Conceito: Uso de matriz e preenchimento condicional.
    */

}