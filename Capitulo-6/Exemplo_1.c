// Exemplo 1 – Vetor Unidimensional

#include <stdio.h>

int main() {
    int numeros[5]; // Vetor com 5 posições
    int i;

    //entrada dso valores
    for(i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i +1);
        scanf("%d", &numeros[i]);
    }

    // Exibição dos valores
    printf("Você digitou: ");
    for(int i = 0;  i < 5; i++) {
        printf("$d ", numeros[i]);
    }

    printf("\n");

    return 0;

    /*
        👉 Conceito: Vetores armazenam vários valores do mesmo tipo.
    */
}