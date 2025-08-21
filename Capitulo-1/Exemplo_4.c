// Exemplo 4 – Estrutura de Repetição (while)

#include <stdio.h>

int main() {
    int contador = 1;

    //loop que repete enquanto contador <= 5
    while(contador <= 5) {
        printf("Contador: %d\n", contador);
        contador++; //incrementa o valor
    }

    return 0;

    /*
        👉 Conceito:

        Uso do laço de repetição while.

        Incremento de variáveis (contador++).
    */
}