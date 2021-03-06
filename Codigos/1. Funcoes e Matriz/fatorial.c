/*
	n! = 1*2*3*4*5*....*(n-1)*n
	3! = 1*2*3 = 6
	4! = 1*2*3*4 = 24
	
	Simulação para n=5:
    ---------------------------
    para n=5, passos:
	resposta{2} <- resposta{1} * i{2}
	resposta{6} <- resposta{2} * i{3}
	resposta{24} <- resposta{6} * i{4}
	resposta{120} <- resposta{24} * i{5}
*/

#include <stdio.h>

//Função fatorial
int fatorial(int x){	
    int resposta = 1;
	int i;
	for(i=2; i<=x; i++)
	{	resposta = resposta * i;
	}
	return resposta;
}

/*Aqui faremos o cálculo dos Arranjos simples 
de n elementos organizados em grupos de p:
An,p = n! / (n-p)! */

int main(int argc, char *argv[]){	
    int n, p, a;
	printf("Entre com o numero de elementos: ");
	scanf("%d", &n);
	printf("Entre com o tamanho dos grupos: ");
	scanf("%d", &p);
	//An,p = n! / (n-p)!
	a = fatorial(n) / fatorial(n-p);
	printf("\nHavera %d arranjos simples\n", a);
	
    return 0;
}
