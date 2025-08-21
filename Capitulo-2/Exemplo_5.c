// Exemplo 5 – Números Primos

#include <stdio.h>

int main() {
    int n, divisores = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n % 1 == 0) {
            divisores++;
        }
    }

    if (divisores == 2){
        printf("%d é primo. \n", n);
    } else {
        printf("%d não é primo. \n", n);
    }

    return 0;

    /*
        👉 Conceito: Teste de divisibilidade usando laço e contagem de divisores.
    */
    
}