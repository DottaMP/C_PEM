/*Recursividade: Sequencia de fibonacci*/

#include <stdio.h>
#include <time.h>
int fibonacci(int ordem)
{   if(ordem <= 2) return 1;
    else return fibonacci(ordem-1) + fibonacci(ordem-2);
}

int fibonacciIterativo(int ordem)
{   int a=1, b=1, c=1, i;
    for(i=3; i<=ordem; i++)
    {   c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{   int i;
    printf("Mostrando os 12 primeiros números da sequência de Fibonacci:\n");
    for(i=1; i <= 12; i++)
    {   printf("%d\n", fibonacci(i));
    }
    printf("\nMostrando o cálculo da razão de ouro: %f",
        (float)fibonacci(6)/fibonacci(5));
    printf("\nMostrando o cálculo (um pouco mais preciso) da razão de ouro: %f",
        (float)fibonacci(15)/fibonacci(14));
    printf("\n\nAgora vamos testar a versão iterativa:\n");
    printf("Mostrando os 12 primeiros números da sequência de Fibonacci:\n");
    for(i=1; i <= 12; i++)
    {   printf("%d\n", fibonacciIterativo(i));
    }
    printf("\nMostrando o cálculo da razão de ouro: %f",
        (float)fibonacciIterativo(6)/fibonacciIterativo(5));
    printf("\nMostrando o cálculo (um pouco mais preciso) da razão de ouro: %f",
        (float)fibonacciIterativo(15)/fibonacciIterativo(14));
    return 0;
}