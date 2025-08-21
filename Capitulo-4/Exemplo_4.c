// Exemplo 4 – Laços Aninhados (Tabuada Completa)

#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        printf("\nTabuada do %d:\n", i);

        for(int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i,j, i*j);
        }
    }

    return 0;

    /*
        👉 Conceito: loops aninhados para problemas que envolvem mais de uma dimensão.
    */
}