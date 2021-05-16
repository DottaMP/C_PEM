/*Faça um programa (ou uma função) que some os elementos da diagonal principal de uma matriz quadrada.
Exemplo de matriz 3x3:  5 9 6 
                        2 1 3
                        8 7 4
                        Diagonal Principal: 5 - 1 - 4
                        Acima da Diagonal: 9 - 6 - 3 --> Soma: 18
*/

#include <stdio.h>

//Função para somar aos valores acima da diagonal principal:
int somaAcimaDiagonalPrincipal(int l, int c, int mat[l][c]){

    int soma=0;
    
    for(int i=0; i<l; i++){
		for (int j=0; j<c; j++){
		    if(j>i){
		        soma = soma + mat[i][j];
		    }
		}
    }
    
    return soma;
}

int main(int argc, char *argv[]){
    /*int n, m;
    printf("Informe o tamanho da sua matriz (exemplo 4 4): ");
    scanf("%i%i", &n, &m);
    entrada(entrada, l, c, mat);
    
    if(n!=m){ //Caso o usuário informe valores diferentes para linha e coluna o programa irá parar.
        printf("Sua matriz deve possuir tamanhos iguais de linhas e colunas.\nTente novamente!");
        return 0;
    }
    int mat[n][m], l, c;*/
    
    //Outra forma de receber a informação do tamanho da matriz, sem precisar validar se o linha e coluna possuem o memso tamanho.
    
    int n;
    printf("Informe o tamanho da matriz.\nExemplo: Se digitado 3, sua matriz terá o tamanho de 3x3.\nEntre com o tamanho: ");
    scanf("%i", &n);
    
    int mat[n][n], l, c;

	printf("\nEntre com os valores da matriz quadrada: \n");
    for(l=0; l<n; l++){
        for(c=0; c<n; c++){
            scanf("%i", &mat[l][c]);
        }
        
    }
    printf("\nOs valores acima da Diagonal Principal são: ");
    for(l=0; l<n; l++){
        for(c=0; c<n; c++){
            if(c>l){
                printf("- %i - ", mat[l][c]); //Para imprimir os valores acima da diagonal principal informada pelo usuário.                
            }
        }
    }
    
	printf("\nSoma dos elementos acima da Diagonal Principal: %i",somaAcimaDiagonalPrincipal(l, c, mat));
	
    return 0;
}
