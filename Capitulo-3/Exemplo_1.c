// Exemplo 1 – Média de Notas (Vetor)

#include <stdio.h>

int main() {
    int notas[5], soma= 0;

    for(int i =0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    float media = soma / 5.0;
    printf("A média das notas é: %2.f\n", media);

    return 0;

    /*
        👉 Conceito: Uso de vetores para armazenar valores e calcular média.
    */
}