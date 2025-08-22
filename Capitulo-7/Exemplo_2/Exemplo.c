// ✅ Exemplo (valor vs referência):

#include <stdio.h>

int porValor(int x){
    x = x + 10;
}

void porReferencia(int *x){
    *x = *x + 10;
}

int main(){
    int a = 5, b = 5;

    porValor(a);
    porReferencia(&b);

    printf("a (por valor) = %d\n", a);      // continua 5
    printf("b (por referencia) = %d\n", b); // vira 15

    return 0;
}