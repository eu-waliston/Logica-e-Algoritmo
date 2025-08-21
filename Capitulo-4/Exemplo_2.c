// Exemplo 2 – Switch/Case (Calculadora Simples)

#include <stdio.h>

int main() {
    int opcao;
    float a,b;

    printf("Digite dois números: ");
    scanf("%f %f", &a, &b);

    printf("Escolha uma operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Resultado: %.2f\n", a+b);
            break;
        case 2:
            printf("Resultado: %2.f\n", a - b);
            break;
        case 3:
            printf("Resultado: %2.f\n", a * b);
            break;
        case 4:
            if(b != 0) {
                printf("Resultado: %2.f\n", a / b);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Opção Ibválida!\n");
    }

    return 0;

    /*
        👉 Conceito: Estrutura switch/case para menus de múltipla escolha.
    */
}