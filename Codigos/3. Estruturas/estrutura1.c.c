//Sem uso de Estruturas
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{	char nomes[100][60];
	long int telefones[100];
	char emails[100][30];

	int i;
	for(i=0; i<5; i++)
	{	printf("FICHA %d\n", i+1);
		printf("Entre com o nome: ");
		fgets(nomes[i], 30, stdin);
		nomes[i][strlen(nomes[i])-1] = '\0';
		printf("Entre com o telefone: ");
		//scanf("%d", &telefones[i]);
		//usar scanf aqui deixa um pula-linha no buffer
		//de teclado e atrapalha a próxima leitura
		char aux[15];
		fgets(aux, 15, stdin);
		telefones[i] = atoi(aux);
		printf("Entre com o e-mail: ");
		fgets(emails[i], 20, stdin);
		emails[i][strlen(emails[i])-1] = '\0';
	}
	for(i=0; i<5; i++)
	{	printf("FICHA %d\n", i+1);
		printf("Nome: %s\n", nomes[i]);
		printf("Telefone: %ld\n", telefones[i]);
		printf("E-mail: %s\n", emails[i]);
	}
	return 0;
}

