// Exemplo 6 – Fibonacci Recursivo

#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo de Fibonacci
int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n-1) + fibonacci(n-2); // chamada recursiva
}

int main() {
    int termos;
    printf("Digite quantos termos da sequência deseja: ");
    scanf("%d", &termos);

    printf("Sequência de Fibonacci:\n");

    for(int i = 0; i < termos; i++) {
        printf("%d", fibonacci(i));
    }

    printf("\n");

    return 0;

    /*
        👉 Conceito: A recursividade é poderosa, mas pode ser custosa em desempenho.
    */
}