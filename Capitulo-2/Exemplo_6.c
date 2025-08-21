// Exemplo 6 – Sequência de Fibonacci

#include <stdio.h>

int main(){
    int n, t1 = 0, t2 = 1, prox;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci: ");

    for(int i = 0; i <= n; i++) {
        printf("%d ", t1);
        prox = t1 + t2;
        t1 = t2;
        t2 = prox;
    }

    printf("\n");

    return 0;

    /*
        👉 Conceito: Problema clássico de recorrência resolvido com repetição.
    */
}