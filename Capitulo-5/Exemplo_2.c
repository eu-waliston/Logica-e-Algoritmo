// Exemplo 2 – Função com Argumentos

#include <stdio.h>

// Função que recebe dois números e mostra a soma
void soma(int a, int b) {
    printf("Soma: %d\n", a+b);
}

int main() {
    int x = 5, y = 7;
    soma(x,y); //chama a função

    return 0;

    /*
        👉 Conceito: Funções podem receber parâmetros que mudam seu comportamento.
    */
}