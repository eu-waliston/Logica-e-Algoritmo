//Exemplo 7 – Vetores (Arrays)
#include <stdio.h>

int main() {
    int notas[5]; //Vetor para armazenar 5 notas
    int soma = 0;

    //entrada de valores
    for(int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);

        soma += notas[i]; //Acumula as notas
    }

    //Calculo da média
    float media = soma / 5.0;

    printf("A média das notas é: %2.f\n", media);

    return 0;

    /*
        👉 Conceito:

        Uso de vetores (arrays).

        Estrutura de repetição com acumulação.

        Cálculo de média aritmética.
    */
}