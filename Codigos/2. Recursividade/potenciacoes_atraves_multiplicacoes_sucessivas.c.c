/* Crie uma função recursiva que calcule potenciações através de multiplicações sucessivas:
	x^y = x * x * x * x ......* x   --> y vezes
	Matematicamente, x^0 = 1  e  x^y = x * x^(y-1)
a) Base: expoente == 0 -> resultado = 1
b) x^(y-1) é um pouco mais simples que x^y
c) x^y = x * x^(y-1)
Simulando potenciacao(2, 5):
			potenciacao(2, 4) * 2
				(potenciacao(2, 3) * 2) * 2
					((potenciacao(2, 2) * 2) * 2) * 2
						(((potenciacao(2, 1) * 2) * 2) * 2) * 2
							((((potenciacao(2, 0) * 2) * 2) * 2) * 2) * 2
							(((((1)* 2) * 2) * 2) * 2) * 2
						((((2) * 2) * 2) * 2) * 2
						(((4) * 2) * 2) * 2
					((8) * 2) * 2
				(16) * 2
			32 */

#include <stdio.h>
int potenciacao(int x, int y){   
    if(y == 0) return 1;
    else return x * potenciacao(x, y-1);
}

int main(){
    int base, expoente;
    printf("Digite a base: ");
    scanf("%i", &base);
    printf("Digite o expoente: ");
    scanf("%i", &expoente);
    printf("%i elevado a %i vale %i\n", base, expoente, potenciacao (base,expoente));
    return 0;
}

/* Outra solução:

#include <stdio.h>
int potenciacao(int base, int expoente)
{   if(expoente == 0) return 1;
    else return potenciacao(base, expoente-1) * base;
}
int main()
{
    printf("2 elevado a 5 resulta %d\n", potenciacao(2,5));
    return 0;
}*/

