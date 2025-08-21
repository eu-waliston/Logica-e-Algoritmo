// Exemplo 4 – Fatorial de um Número

#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d\n", n, fatorial);

    return 0;

    /*
        👉 Conceito: Multiplicação acumulativa em laço.
    */
}