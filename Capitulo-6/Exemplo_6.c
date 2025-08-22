// Exemplo 6 – Struct Simples

#include <stdio.h>

//Definição da stuct Aluno
struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int main() {
    struct Aluno aluno;


    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);

    printf("Digite a idade: ");
    scanf("%d", &aluno.idade);

    printf("Digite a média final: ");
    scanf("%f", &aluno.media);

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Média: %.2f\n", aluno.media);

    return  0;

    /*
        👉 Conceito: Structs permitem agrupamento de diferentes tipos de dados.
    */
}