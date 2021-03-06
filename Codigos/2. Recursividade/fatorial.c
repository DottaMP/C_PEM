/*Exemplo de Recursividade: Fatorial.

#include <stdio.h>
int fatorial(int n)
{   if(n == 0) return 1;
    else return n * fatorial(n-1);
}

int fatorialIterativo(int n)
{   int i, produto = 1;
    for(i=2; i<=n; i++)
    {
        produto = produto * i;
    }
    return produto;
}

int main()
{   printf("O fatorial (cálculo recursivo) de 4 vale %d\n", fatorial(4));
    printf("O fatorial (cálculo iterativo) de 4 vale %d\n", fatorialIterativo(4));
    return 0;
}