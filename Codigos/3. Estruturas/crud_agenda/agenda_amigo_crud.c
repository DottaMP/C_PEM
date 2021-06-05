#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

//typedef struct data{int dia, mes, ano;} DATA;

struct ficha{
    char nome[60];
    char telefone[10];
    char endereco[50];
    char email[30];
    char idade[10];
    char aniversario[15];
    //DATA dataNascimento;
};

void menu(){
	printf("\n------------------------------\n");
	printf("Agenda Amigo, sempre com você!\n");
	printf("------------------------------\n");
	printf("\nEscolha uma opção:");
	printf("\n[1] Inserir ficha");
	printf("\n[2] Pesquisar por nome");
	printf("\n[3] Listar toda a base");
	printf("\n[4] Excluir por nome");
	printf("\n[5] Atualizar registro");
	printf("\n[6] Sair\n\n");
}

void mostrarConteudo(struct ficha user){
    printf("\nNome: %s", user.nome);
    printf("\nTelefone: %s", user.telefone);
    printf("\nEndereco: %s", user.endereco);
    printf("\nEmail: %s", user.email);
    printf("\nIdade: %s", user.idade);
    printf("\nAniversario: %s", user.aniversario);
}

void leia(char string[], int tamanho)
{   fgets(string, tamanho, stdin);
    string[strlen(string)-1] = '\0';
}

void minusculo(char str[])
{   int i, tam=strlen(str);
    for(i=0; i<tam; i++)
        str[i] = tolower(str[i]);
}

/* int procurar(char procurado[], struct ficha nome[], int numFichas, int i){
	char confirmacao[20], nomeMinusculo[40];
	
	minusculo(procurado);
	if (i == numFichas){
		printf("\nNão encontrado!\n");
		return menu;
	}
	
	for(i=0; i<numFichas; i++){
	    strcpy(nomeMinusculo, nome[i].nome);
	    minusculo(nomeMinusculo);
	    if(strstr(nomeMinusculo, procurado) != NULL){	
		    printf("Achei esta ficha:\nNome: %s\nTelefone: %s\n", nome[i].nome, nome[i].telefone);
            printf("É esta que procura (S/N)?");
            leia(confirmacao, 20);
            if(confirmacao[0] == 's' || confirmacao[0] == 'S'){
                mostrarConteudo(nome[i]);
		        return i;
            }
	    }else{
		    return procurar(procurado, nome, numFichas, i+1);	
	    }
	}
}*/

int procurarRecursivo(char procurado[], int inicio, struct ficha nome[], int num_fichas){   char confirmacao[20], nomeMinusculo[40];
    
    if(inicio >= num_fichas) return -1; //base
    //minusculo(procurado);
	strcpy(nomeMinusculo, nome[inicio].nome); //criando uma cópia do nome
	minusculo(nomeMinusculo); //cópia do nome em minúsculo
	if(strstr(nomeMinusculo, procurado) != NULL)
    {   printf("Achei esta ficha:\nNome: %s, Telefone: %s\n", nome[inicio].nome, nome[inicio].telefone);
        printf("É esta que procura (S/N)?");
        leia(confirmacao, 20);
        if(confirmacao[0] == 's' || confirmacao[0] == 'S')
            return inicio;
    }
	return procurarRecursivo(procurado, inicio+1, nome, num_fichas);
}


//retorna um novo registro para a agenda
struct ficha get_info(){
	struct ficha novo;
	printf("\nEntre com o nome:"); 
	leia(novo.nome, 60);
	printf("Entre com o telefone:"); 
	leia(novo.telefone, 10);
	printf("Entre com o endereco:");
	leia(novo.endereco, 50);
	printf("Entre com o email:");
	leia(novo.email, 30);
	printf("Entre com a idade:");
	leia(novo.idade, 10);
	printf("Entre com o aniversario:");
	leia(novo.aniversario, 15);
	return novo;
}


int main(){
    setlocale(LC_ALL, "Portuguese");
	struct ficha agenda[100];
	int fichas_existentes = 0, proxima = 0;
	char opcao[10]="0";

	while(opcao[0] != '6'){
		menu();
		leia(opcao, 10);
        
		//inserir novo registro
		if(opcao[0] == '1'){		
			agenda[proxima] = get_info();
			fichas_existentes++;
			proxima++;  
		}

        //pesquisar e exibir registro
		if(opcao[0] == '2'){
			if(fichas_existentes > 0){
				char procurado[40];
				printf("\nEntre com o nome procurado:");
				leia(procurado, 40);
				minusculo(procurado);
                int resposta = procurarRecursivo(procurado, 0, agenda, fichas_existentes);

			}else printf("\nNome não encontrado!\n");
		}
        
        //listar todos os registros
		if(opcao[0] == '3'){ 
			int i;
			printf("\n--- LISTA DE AMIGOS ---");
			for(i=0; i < fichas_existentes; i++){
			    mostrarConteudo(agenda[i]);
				printf("\n");
			}
			if(fichas_existentes == 0){
			    printf("\nBase vazia!\n");
			}
		}

        //excluir registro
		if(opcao[0] == '4')	{
			char procurado[40];
			printf("\nEntre com o nome que sera excluído:");
			leia(procurado, 40);
            int resposta = procurarRecursivo(procurado, 0, agenda, fichas_existentes);
            
			if(resposta != -1){   
			    printf("\n\nO nome %s e seus dados foram removidos com sucesso!\n%s\n%s\n%s\n%s\n%s\n", agenda[resposta].nome, agenda[resposta].telefone, 
			    agenda[resposta].endereco, agenda[resposta].email, agenda[resposta].idade, agenda[resposta].aniversario);
				agenda[resposta] = agenda[fichas_existentes-1];
				fichas_existentes--;
				proxima--;
			}else{
			    printf("\nNome não encontrado\n");			    
			}
		}
		
		//atualizar registro
		if(opcao[0] == '5'){
			if(fichas_existentes > 0){
				char procurado[40];
				printf("\nEntre com o nome que sera atualizado:");
				leia(procurado, 40);
				minusculo(procurado);
				int resposta = procurarRecursivo(procurado, 0, agenda, fichas_existentes);
				agenda[resposta] = get_info();

			}else printf("\nNome não encontrado!\n");
		}
	}
	return 0;
}
