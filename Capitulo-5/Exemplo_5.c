// Exemplo 5 – Recursividade (Fatorial)

#include <stdio.h>

// Função recursiva que calcula o fatorial
int fatorial(int n) {
    if(n == 0 || n == 1){
        return 1; //caso base
    } else {
        return n * fatorial(n - 1); // chamada recursiva
    }
}

int main() {
    int numero;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    printf("Fatorial de %d = %d\n", numero, fatorial(numero));
    return 0;

    /*
        👉 Conceito: Uma função que chama a si mesma até atingir um caso base.
    */
}