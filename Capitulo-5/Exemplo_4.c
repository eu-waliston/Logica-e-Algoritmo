// Exemplo 4 – Função de Maior Número

#include <stdio.h>

// funçaõ que retorna o maior entre dois numeros
int maior(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x,y;

    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    printf("O maior número é: %d\n", maior(x,y));

    return 0;

    /*
        👉 Conceito: Reaproveitamento de lógica dentro de funções.
    */
}