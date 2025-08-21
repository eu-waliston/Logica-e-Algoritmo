//Exemplo 2 – Entrada e Saída de Dados
#include <stdio.h>

int main() {
    int idade; //variavel do tiipo inteiro

    //pede que o usuário digite a idade
    printf("Digite sua idade: ");
    scanf("%d", &idade); //Lê o vlaor e armazena em 'idade'

    //Exibe o valor informado
    printf("Você tem %d anos.\n", idade);

    return 0;

    /*
        👉 Conceito:

        Uso de variáveis.

        Entrada com scanf.

        Saída formatada com printf.u
    */
}