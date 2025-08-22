// Exemplo 2 – Cálculo da Média com Vetores
#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;
    int i;

    //Entrada das notas e cálculo da soma
    for(i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i +1 );
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    //Cálculo e exibição da média
    printf("Média = %2.f\n", soma / 4);

    return 0;

    /*
        👉 Conceito: Vetores facilitam cálculos com vários valores.
    */

}