// Exemplo 3 – Soma dos N Primeiros Números


#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um número N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma dos %d primeiros números é: %d\n", n, soma);

    return 0;

    /*
        👉 Conceito: Estrutura de repetição com acumulador.
    */
}
