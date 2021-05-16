/* Calcule recursivamente o valor da expressão: expressao(n) = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + ...+ 1/(n-1) + 1/n
a)  n=1 -> expressao(1) = 1/1
    n=2 -> expressao(2) = 1/1 + 1/2
    n=3 -> expressao(3) = 1/1 + 1/2 + 1/3
    n=4 -> expressao(4) = 1/1 + 1/2 + 1/3 + 1/4
Situação (instância) mais simples: n=1 -> expressao(1) = 1.0
b) expressao(n) = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + ...+ 1/(n-1) + 1/n
A um pouco mais simples: expressao(n-1) = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + ...+ 1/(n-1) 
c) expressao(n) = expressao(n-1) + 1/n */

#include <stdio.h>
double expressao(int n){   
    if(n == 1) return 1.0;
    else return expressao(n-1) + 1.0/n;
}

int main(){
    int n;
    printf("Digite n: ");
    scanf("%i", &n);
    printf("expressao =  %lf", expressao(n));
    return 0;
}

/*Outra forma:
#include <stdio.h>
float expressao(int n)
{   if(n == 1) return 1.0;
    else return expressao(n-1) + 1.0/n;
}
int main()
{
    printf("expressao(100) vale %f\n", expressao(100));
    return 0;
}*/

/*Versão interativa:
#include<stdio.h>
int main(){
    int n;
    double soma = 0;
    printf("Digite n: ");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++){
        soma = soma + 1/(double)i;
    }

    printf("soma = %lf", soma);
    return 0;
}*/
