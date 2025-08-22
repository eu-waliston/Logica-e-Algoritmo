// Exemplo 7 – Vetor de Structs

#include <stdio.h>

struct Produto
{
    int id;
    char nome[30];
    float preco;
};

int main()
{
    struct Produto estoque[3];

    // Cadastro de produtos
    for (int i = 0; i < 3; i++)
    {
        printf("\nProduto %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &estoque[i].id);
        printf("Nome: ");
        scanf("%s", estoque[i].nome);
        printf("Preço: ");
        scanf("%f", &estoque[i].preco);
    }

    // Exibição dos produtos
    printf("\n---- Estoque ----\n");
    for (int i = 0; i < 3; i++)
    {
        printf("ID: %d | Nome: %s | Preço: R$ %2.f\n", estoque[i].id, estoque[i].nome, estoque[i].preco);
    }

    return 0;

    /*
        👉 Conceito: Combinação de vetores e structs cria listas de registros, como em cadastros ou bancos de dados simples
    */
}