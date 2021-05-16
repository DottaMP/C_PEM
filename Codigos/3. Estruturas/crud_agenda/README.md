# Crud - Agenda Amigos

## Todos estes exercícios a seguir têm por base o código-base, que é um mini CRUD (Create-Read-Update-Delete, ou Criar-Ler-Atualizar-Remover).    
    
#### 1) Inclua novos campos, como endereço, e-mail, data de nascimento, etc.    
    
#### 2) Crie uma função procurar, com a assinatura abaixo, de modo que ela possa ser aproveitada tanto na funcionalidade procurar, quanto na excluir:    
    
int procurar(char procurado[], struct ficha vetor[], int num_fichas)    
    
 	O retorno dessa função será o índice do elemento encontrado, ou -1, caso o mesmo não tenta sido localizado.    

#### 3) Reimplemente a função procurar de modo recursivo (particularmente não há nenhuma vantagem nesta alteração, é só para treinarmos recursividade).

	DICA: Exercício de recursividade:

	Crie uma função recursiva que procure um número dentro de um vetor, a partir de um dado índice. Se achar o mesmo, o método retorna o índice onde ele se encontra, senão, retorna -1.

-> Só para entendermos melhor o problema, a versão interativa (não-recursiva) seria assim:

	int busca(int vet[ ], int N, int indiceInicio, int procurado)
	{	int i;
		for(i=indiceInicio; i < N; i++)
		{	if(procurado == vet[i])
			{	return i;
			}
		}
		return -1;
	}

	Agora vamos pensar na versão recursiva.... 

	int buscaRecursiva(int vet[ ], int N, int indiceInicio, int procurado)
	{	if(indiceInicio >= N) return -1;		//não existe no vetor
		if(vet[ indiceInicio ] == procurado) return indiceInicio;	//achei!!!
		return buscaRecursiva(vet, N, indiceInicio+1, procurado);
	}


Com o main....

#include <stdio.h>
int busca(int vet[ ], int N, int indiceInicio, int procurado)
{	int i;
	for(i=indiceInicio; i < N; i++)
	{	if(procurado == vet[i])
		{	return i;
		}
	}
	return -1;
}

int buscaRecursiva(int vet[ ], int N, int indiceInicio, int procurado)
{	if(indiceInicio >= N) return -1;		//não existe no vetor
	if(vet[ indiceInicio ] == procurado) return indiceInicio;	//achei!!!
	return buscaRecursiva(vet, N, indiceInicio+1, procurado);
}

int main()
{   int vet[] = {4, 8, 1, 7, 3, 12, 34, 97, -1, 2};
    printf("Procurando o elemento 12 (iterativa) => %d\n", 
        busca(vet, 10, 0, 12));
    printf("Procurando o elemento 72 (iterativa) => %d\n", 
        busca(vet, 10, 0, 72));
    printf("Procurando o elemento 12 (recursiva) => %d\n", 
        buscaRecursiva(vet, 10, 0, 12));
    printf("Procurando o elemento 72 (recursiva) => %d\n", 
        buscaRecursiva(vet, 10, 0, 72));
    return 0;
}



#### 4) Refaça a funcionalidade de exclusão de modo a não ter que copiar todos os elementos abaixo do excluído.

	Código a ser substituído:
				int j;
			        for(j=i+1; j<fichas_existentes; j++)
			        {
				    	agenda[j-1] = agenda[j];
			        }
			        fichas_existentes--;
			        proxima--;


#### 5) Refaça o procurar de modo a trabalhar mesmo com pedaços de nomes (dica: pesquise uma função chamada "strstr").

DICA: exemplo de uso da função strstr()
--------

#include <stdio.h>
#include <string.h>
int main () {
	char texto[20] = "Joao da Silva";
	char pedaco1[10] = "Silva";
	char pedaco2[10] = "Santos";
	
	if(strstr(texto, pedaco1) != NULL)
		printf("O pedaco %s existe dentro de %s\n",
		pedaco1, texto);
	else printf("O pedaco %s NAO existe dentro de %s\n",
		pedaco1, texto);
		
	if(strstr(texto, pedaco2) != NULL)
		printf("O pedaco %s existe dentro de %s\n",
		pedaco2, texto);
	else printf("O pedaco %s NAO existe dentro de %s\n",
		pedaco2, texto);
	return 0;
}

#### 6) Crie uma funcionalidade de alterar (Update do crud).
