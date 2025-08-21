// Exemplo 6 – Funções
#include <stdio.h>

// Função que calcula o quadrado de um número
int quadrado(int x){
    return x * x;
}

int main(){
    int numero;

    printf("Digite um númro: ");
    scanf("%d", &numero);

    printf("O quadrado do %d é %d\n", numero, quadrado(numero));

    return 0;

    /*
        👉 Conceito:

        Criação de funções.

        Reutilização de código.
    */
}