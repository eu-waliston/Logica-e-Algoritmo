// Exemplo 2 – Busca em Vetor

#include <stdio.h>

int main() {
    int vetor[5] = {10,20,30,40,50};
    int valor, encontrado = 0;

    printf("Digite um número para buscar: ");
    scanf("%d", &valor);

    for(int i = 0; i < 5; i++) {
        if(vetor[i] == valor) {
            printf("Valor encontrado na posição: %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("Valor não encontrado");
    }

    return 0;

    /*
        👉 Conceito: Busca linear em vetor.
    */
}