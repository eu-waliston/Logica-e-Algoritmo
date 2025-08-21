// Exemplo 1 – Condições Aninhadas
#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%d", &nota);

    if(nota >= 0 && nota <= 10) {
        if(nota >= 7) {
            printf("Aprovado.\n");
        } else if (nota >= 5) {
            printf("Recuperação. \n");
        } else {
            printf("Reprovado. \n");
        }
    } else {
        printf("Nota inválida!\n");
    }

    return 0;

    /*
        👉 Conceito: Uso de if dentro de if para tratar casos mais específicos.
    */
}