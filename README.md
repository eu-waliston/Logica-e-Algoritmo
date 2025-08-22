# 📚 Repositório de Lógica e Algoritmos – Linguagem C

Bem-vindo ao repositório de **Lógica e Algoritmos**, com exemplos e exercícios práticos em **C**. Aqui você encontrará todos os conteúdos das unidades, exemplos comentados e material de referência para estudo.

---

## 🔗 Sumário
- [📘 Capítulo 1 – Introdução e Conceitos](#-capítulo-1--introdução-e-conceitos)  
- [📘 Capítulo 2 – Lógica da Programação](#-capítulo-2--lógica-da-programação)  
- [📘 Capítulo 3 – Metodologias de Projetos de Programas](#-capítulo-3--metodologias-de-projetos-de-programas)  
- [📘 Capítulo 4 – Dados, Expressões e Algoritmos Sequenciais](#-capítulo-4--dados-expressões-e-algoritmos-sequenciais)  
- [📘 Capítulo 5 – Algoritmos Estruturados](#-capítulo-5--algoritmos-estruturados)  
- [📘 Capítulo 6 – Dados Estruturados](#-capítulo-6--dados-estruturados)  
- [📘 Capítulo 7 – Modularização](#-capítulo-7--modularização)  
- [📚 Bibliografia](#-bibliografia)  

---

## 📘 Capítulo 1 – Introdução e Conceitos
### Conteúdos
- Terminologia básica  
- Noções de arquitetura e organização  
- Noções básicas de sistemas operacionais  

> **Exemplo de código:**
```c
#include <stdio.h>

int main() {
    printf("Bem-vindo ao estudo de Lógica e Algoritmos!\n");
    return 0;
}
```

---

## 📘 Capítulo 2 – Lógica da Programação
### Conteúdos
- Conceito de problemas e enunciados de problemas  
- Conceito de algoritmo  
- Conceito de programa  
- Etapas da solução de um problema  

> **Exemplo de código:**
```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", a + b);
    return 0;
}
```

---

## 📘 Capítulo 3 – Metodologias de Projetos de Programas
### Conteúdos
- Dado e resultado  
- Instruções (comandos)  
- Métodos para representação de algoritmos  
- Prática de solução de pequenos problemas  

> **Exemplo de código:**
```c
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
        printf("Número par\n");
    else
        printf("Número ímpar\n");
    return 0;
}
```

---

## 📘 Capítulo 4 – Dados, Expressões e Algoritmos Sequenciais
### Conteúdos
- Tipos de dados  
- Constantes e variáveis  
- Expressões e atribuição  
- Entrada e saída  

> **Exemplo de código:**
```c
#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você tem %d anos.\n", idade);
    return 0;
}
```

---

## 📘 Capítulo 5 – Algoritmos Estruturados
### Conteúdos
- Execução condicional  
- Estruturas de repetição  
- Contadores e acumuladores  

> **Exemplo de código:**
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Número %d\n", i);
    }
    return 0;
}
```

---

## 📘 Capítulo 6 – Dados Estruturados
### Conteúdos
- Vetores unidimensionais  
- Matrizes bidimensionais  
- Strings  
- Structs e vetores de structs  

> **Exemplo de código (vetor e struct):**
```c
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int main() {
    struct Aluno aluno1;
    printf("Digite o nome: ");
    scanf("%s", aluno1.nome);
    printf("Digite a idade: ");
    scanf("%d", &aluno1.idade);
    printf("Digite a média: ");
    scanf("%f", &aluno1.media);
    printf("Aluno: %s, Idade: %d, Média: %.2f\n", aluno1.nome, aluno1.idade, aluno1.media);
    return 0;
}
```

---

## 📘 Capítulo 7 – Modularização
### Conteúdos
- Subprogramas (funções)  
- Argumentos e retorno  
- Recursividade  

> **Exemplo de código (função recursiva – fatorial):**
```c
#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fatorial(n - 1);
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Fatorial de %d = %d\n", numero, fatorial(numero));
    return 0;
}
```

---

## 📚 Bibliografia
**Básica:**  
- FARRER, H. & BECKER, C. Algoritmos estruturados. Rio de Janeiro: LTC, 1998.  
- Software de apoio: Sistema operacional, editor de textos, compilador, depurador.  

**Complementar:**  
- KERNIGHAN, B. & RITCHIE, D. C: a linguagem de programação. Rio de Janeiro: Campus, 1990.  
- KOTANI, A.; SOUZA, R. L.; UCCI, W. Lógica de programação. São Paulo: Érica, 1991.  
- PINTO, W. S. Introdução ao desenvolvimento de algoritmos e estrutura de dados. São Paulo: Érica, 1990.  
- SALIBA, W. L. C. Técnicas de programação. São Paulo: Makron Books, 1992.  
- TERADA, R. Desenvolvimento de algoritmo e estruturas de dados. São Paulo: Makron Books, 1991.  
- VILLAS, M. V. Programação, conceitos, técnicas e linguagens. Rio de Janeiro: Campus, 1998.
