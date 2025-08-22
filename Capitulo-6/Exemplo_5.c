// Exemplo 5 – Strings em C

#include <stdio.h>

int main() {
    char nome[50]; //string com até 49 caracteres

    printf("Digite seu nome: ");
    scanf("%s", nome); // Lê até o primeiro espaço

    printf("Olá, %s! Seja bem-vinda.\n", nome);

    return 0;

    /*
        👉 Conceito: Strings em C são vetores de caracteres terminados com \0.
    */
}