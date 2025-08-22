// Exemplo 3 – Função com Retorno

#include <stdio.h>

// Função que retorna o quadrado de um número
int quadrado(int n) {
    return n * n;
}

int main() {
    int numero = 6;
    int resutlado = quadrado(numero);

    printf("O quadrado de %d é %d\n", numero, resutlado);

    return 0;

    /*
        👉 Conceito: Uso de return para devolver valores ao programa principal.
    */
}