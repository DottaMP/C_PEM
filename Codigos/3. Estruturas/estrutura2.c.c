 //Estruturas 2
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct amigo {
	char nome[30];
	long int telefone;
	char email[40];
};

int main()
{	struct amigo vet[100];
	int i;
	for(i=0; i<5; i++)
	{	printf("FICHA %d\n", i+1);
		printf("Entre com o nome: ");
		fgets(vet[i].nome, 30, stdin);
		vet[i].nome[strlen(vet[i].nome)-1] = '\0';
		printf("Entre com o telefone: ");
		//scanf("%d", &vet[i].telefone);
		//usar scanf aqui deixa um pula-linha no buffer
		//de teclado e atrapalha a próxima leitura
		char aux[15];
		fgets(aux, 15, stdin);
		vet[i].telefone = atoi(aux);
		printf("Entre com o e-mail: ");
		fgets(vet[i].email, 20, stdin);
		vet[i].email[strlen(vet[i].email)-1] = '\0';
	}
	for(i=0; i<5; i++)
	{	printf("FICHA %d\n", i+1);
		printf("Nome: %s\n", vet[i].nome);
		printf("Telefone: %ld\n", vet[i].telefone);
		printf("E-mail: %s\n", vet[i].email);
	}
	return 0;
}
