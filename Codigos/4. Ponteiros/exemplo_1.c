#include <stdio.h>
int main()
{
	int a=2, b=3;
	int *p, *q;
	p = &a;
	q = &b;
	printf("Endereco da variavel a em decimal = %u\n", p);
	printf("Endereco da variavel a em hexadecimal = %p\n", p);
	printf("Endereco da variavel b em decimal = %u\n", q);
	printf("Endereco da variavel b em hexadecimal = %p\n", q);
	printf("Qual o conteudo do endereco %p? Resposta: %d\n",	p, *p);
	printf("Qual o conteudo do endereco %p? Resposta: %d\n",	q, *q);
	return 0;
}