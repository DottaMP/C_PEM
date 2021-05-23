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

void minusculo(char str[])
{   int i, tam=strlen(str);
    for(i=0; i<tam; i++)
        str[i] = tolower(str[i]);
}

int procurar(char procurado[], struct ficha nome[], int numFichas, int i){
	char confirmacao[20], nomeMinusculo[40];
	
	minusculo(procurado);
	    
	if (i == numFichas){
		printf("\nNão encontrado!\n");
		return menu;
	}
	
	for(i=0; i<numFichas; i++){
	    /*if(strcasecmp(procurado, nome[i].nome) == 0){	
		printf("\nRegistro encontrado!\n");
		mostrarConteudo(nome[i]);
		return i;
	    }*/
	    strcpy(nomeMinusculo, nome[i].nome);
	    minusculo(nomeMinusculo);
	    if(strstr(nomeMinusculo, procurado) != NULL){	
		    printf("Achei esta ficha:\nNome: %s\nTelefone: %s\n", nome[i].nome, nome[i].telefone);
            printf("É esta que procura (S/N)?");
            gets(confirmacao);
            if(confirmacao[0] == 's' || confirmacao[0] == 'S'){
                mostrarConteudo(nome[i]);
		        return i;
            }
	    }else{
		    return procurar(procurado, nome, numFichas, i+1);	
	    }
	}
}

//retorna um novo registro para a agenda
struct ficha get_info(){
	struct ficha novo;
	printf("\nEntre com o nome:"); 
	gets(novo.nome);
	printf("Entre com o telefone:"); 
	gets(novo.telefone);
	printf("Entre com o endereco:");
	gets(novo.endereco);
	printf("Entre com o email:");
	gets(novo.email);
	printf("Entre com a idade:");
	gets(novo.idade);
	printf("Entre com o aniversario:");
	gets(novo.aniversario);
	return novo;
}


int main(){
    setlocale(LC_ALL, "Portuguese");
	struct ficha agenda[100];
	int fichas_existentes = 0, proxima = 0;
	char opcao[10]="0";

	while(opcao[0] != '6'){
		menu();
		gets(opcao);
        
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
				gets(procurado);
				procurar(procurado, agenda, fichas_existentes, 0);

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
			gets(procurado);
            int resposta = procurar(procurado, agenda, fichas_existentes, 0);
            
			if(resposta != -1)
			{   printf("\n\nO nome %s e seus dados foram removidos com sucesso!\n", agenda[resposta].nome, agenda[resposta].telefone, 
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
				char atualizado[40];
				int registro;

				printf("\nEntre com o nome que sera atualizado:");
				gets(atualizado);
				registro = procurar(atualizado, agenda, fichas_existentes, 0);
				agenda[registro] = get_info();

			}else printf("\nNome não encontrado!\n");
		}
	}
	return 0;
}