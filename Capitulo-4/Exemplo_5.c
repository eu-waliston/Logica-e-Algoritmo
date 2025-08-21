// Exemplo 5 – Validação de Entrada

#include <stdio.h>

int main() {
    int idade;

    do{
        printf("Digite sua idade (0 a 120): ");
        scanf("%d", &idade);

        if(idade < 0 || idade > 120) {
            printf("Idade inválida! Tente novamente.\n");
        }
    } while(idade < 0 || idade > 120);

    printf("Idade registrada: %d\n", idade);

    return 0;

    /*
        👉 Conceito: Uso de laço para validar entradas do usuário.
    */
}