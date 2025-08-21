// Exemplo 3 – Estrutura Condicional (if/else)
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    //estrutura condicional
    if(numero > 0) {
        printf("O número é positivo.\n");
    } else if ( numero < 0 ) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;

    /*
        👉 Conceito:
            Primeiro contato com condicionais (if, else if, else).
    */
}
