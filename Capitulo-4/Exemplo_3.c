// Exemplo 3 – Menu Interativo com Loop
#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n==== MENU ====\n");
        printf("1 - Dizer Olá\n");
        printf("2 - Mostrar Tabuada de 5\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);


        switch(opcao) {
            case 1:
                printf("Olá Usuário!\n");
                break;
            case 2:
                for(int i = 1; i <= 10; i++) {
                    printf("5 x %d = %d\n", i, 5 * i);
                }
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("opção inválida!\n");
        }

    } while(opcao != 3);

    return 0;

    /*
        👉 Conceito: Combinação de switch com do...while para criar menus repetitivos.
    */
}