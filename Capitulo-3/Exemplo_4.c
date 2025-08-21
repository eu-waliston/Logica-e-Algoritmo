// Exemplo 4 – Contagem de Vogais (Strings)

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[100];
    int vogais = 0;

    printf("Digite um afrase: ");
    fgets(texto, 100, stdin); //Lê string com espaços

    for(int i = 0; i < strlen(texto); i++) {
        char c = tolower(texto[i]); //converte para minuscula

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }

    printf("Número de vogais: %d\n", vogais);

    return 0;

    /*
        👉 Conceito: Manipulação de strings e contagem de caracteres.
    */
}