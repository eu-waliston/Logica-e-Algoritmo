// Exemplo 5 – Soma de Elementos de uma Matriz

#include <stdio.h>

int main() {
    int matriz[2][2];
    int soma = 0;

    //entrada de valores
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Digite o valor [%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    printf("A soma de todos os elementos é: %d\n", soma);

    return 0;

    /*
        👉 Conceito: Entrada de matriz e acumulação de valores.
    */
}