/* Crie uma função recursiva que calcule multiplicações através de somas sucessivas:
	x*y = x + x + x + x ...... + x   -> y vezes
	Matematicamente, x*0 = 0  e  x*y = x + x*(y-1)
a) Base: y == 0 -> resultado = 0
b) x*(y-1) é um pouco mais simples que x*y
c)  x*y = x + x*(y-1)*/

#include <stdio.h>
int multiplicacao(int x, int y){   
    if(y == 0) return 0;
    else return x + multiplicacao(x, y-1);
}

int main(){
    int a, b;
    printf("Digite um número inteiro: ");
    scanf("%i", &a);
    printf("Digite um número inteiro positivo: ");
    scanf("%i", &b);
    printf("%i x %i = %i\n", a, b, multiplicacao(a,b));
    return 0;
}

/* Outra forma:
#include <stdio.h>
int multiplicacao(int x, int y)
{   if(x == 0) return 0;
    else return multiplicacao(x-1, y) + y;
}
int main()
{
    printf("7 vezes 5 resulta %d\n", multiplicacao(7,5));
    return 0;
}*/


