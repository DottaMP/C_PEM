/*Programa para somar os elementos de uma matriz quadrada conforme escolha do usuário:
Exemplo de matriz 3x3:  5 9 6 
                        2 1 3
                        8 7 4
                    1. Diagonal Principal: 5 - 1 - 4 = Soma 10
                    2. Diagonal Secundária: 6 - 1 - 8 = Soma 15
                    3. Acima da Diagonal Principal: 9 - 6 - 3 = Soma 18
                    4. Abaixo da Diagonal Principal: 2 - 8 - 7 = Soma 17
                    5. Acima da Diagonal Secundaria: 5 - 9 - 2 = Soma 16
                    6. Abaixo da Diagonal Secundaria: 3 - 7 - 4 = Soma 14
Exemplo de matriz 4x4:  5 9 6 1
                        2 1 3 2
                        8 7 4 3
                        4 5 6 7
                    1. Diagonal Principal: 5 - 1 - 4 -7 = Soma 17
                    2. Diagonal Secundária: 1 - 3 - 7 - 4 = Soma 15
                    3. Acima da Diagonal Principal: 9 - 6 - 1 - 3 - 2 - 3 = Soma 24
                    4. Abaixo da Diagonal Principal: 2 - 8 - 7 - 4 - 5 - 6 = Soma 32
                    5. Acima da Diagonal Secundaria: 5 - 9 - 6 - 2 - 1 - 8 = Soma 31
                    6. Abaixo da Diagonal Secundaria: 2 - 4 - 3 - 5 - 6 - 7 = Soma 27
*/

#include <stdio.h>

//Função Mostra Matriz 
void mostraMatriz(int l, int c, int mat[l][c]){	
    
    printf("\nMatriz Informada:\n");
	for(int i=0; i<l; i++)
	{	for(int j=0; j<c; j++){	
	        printf( "%i\t", mat[i][j]);
		}
		printf( "\n");
	}
}

//Função Mostra Diagonal Principal 
void mostraDiagonalPrincipal(int l, int c, int mat[l][c]){	
    
    printf("\nValores da Diagonal Principal:\n");
	for(int i=0; i<l; i++)
	{	for(int j=0; j<c; j++){	
	        if(i==j){
	            printf( "%i\t", mat[i][j]);
	        }
		}
	}
}

//Função Mostra Diagonal Secundária 
void mostraDiagonalSecundaria(int l, int c, int mat[l][c]){	
    
    printf("\nValores da Diagonal Principal:\n");
	for(int i=0; i<l; i++)
	{	for(int j=0; j<c; j++){	
	        if(j==c-i-1){
	            printf( "%i\t", mat[i][j]);
	        }
		}
	}
}

//Função Mostra Acima Diagonal Principal 
void mostraAcimaDiagonalPrincipal(int l, int c, int mat[l][c]){	
    
    printf("\nValores da Diagonal Principal:\n");
	for(int i=0; i<l; i++)
	{	for(int j=0; j<c; j++){	
	        if(j>i){
	            printf( "%i\t", mat[i][j]);
	        }
		}
	}
}

//Função Mostra Abaixo Diagonal Principal 
void mostraAbaixoDiagonalPrincipal(int l, int c, int mat[l][c]){	
    
    printf("\nValores da Diagonal Principal:\n");
	for(int i=0; i<l; i++)
	{	for(int j=0; j<c; j++){	
	        if(j<i){
	            printf( "%i\t", mat[i][j]);
	        }
		}
	}
}

//Função Mostra Acima Diagonal Secundaria 
void mostraAcimaDiagonalSecundaria(int l, int c, int mat[l][c]){	
    
    printf("\nValores da Diagonal Principal:\n");
	for(int i=0; i<l; i++)
	{	for(int j=0; j<c; j++){	
	        if(j<=c-i-2){
	            printf( "%i\t", mat[i][j]);
	        }
		}
	}
}

//Função Mostra Abaixo Diagonal Secundaria 
void mostraAbaixoDiagonalSecundaria(int l, int c, int mat[l][c]){	
    
    printf("\nValores da Diagonal Principal:\n");
	for(int i=0; i<l; i++)
	{	for(int j=0; j<c; j++){	
	        if(j>=c-i){
	            printf( "%i\t", mat[i][j]);
	        }
		}
	}
}


//Função para somar aos valores:
int somaDiagonal(int l, int c, int mat[l][c]){
    
    int soma=0, i, j;
    int opcao;
    
    printf("\nEscolha o tipo de soma que deseja realizar: ");
	printf("\n[1] - Soma dos elementos da diagonal principal: ");
	printf("\n[2] - Soma dos elementos da diagonal secundária: ");
	printf("\n[3] - Soma dos elementos acima da diagonal principal: ");
	printf("\n[4] - Soma dos elementos abaixo da diagonal principal: ");
	printf("\n[5] - Soma dos elementos acima da diagonal secundária: ");
	printf("\n[6] - Soma dos elementos abaixo da diagonal secundária: ");
	printf("\nDigite a opção desejada: ");
	scanf("%d", &opcao);
	
    switch (opcao){
        
	case 1 : // Soma dos elementos da diagonal principal
	    mostraDiagonalPrincipal(l, c, mat);
	    for(i=0; i < l; i++){
		    for (j=0; j < c; j++){
	            	if(i==j){
		            soma = soma + mat[i][j];
	            	}
		    }
	    }
	    return soma;

	case 2 : // Soma dos elementos da diagonal secundária
	    mostraDiagonalSecundaria(l, c, mat);
	    for(i=0; i < l; i++){
		    for (j=0; j < c; j++){
	           	 if(j==c-i-1){
		            soma = soma + mat[i][j];
	            	}
		    }
	    }
	    return soma;

	case 3 : // Soma dos elementos acima da diagonal principal
	    mostraAcimaDiagonalPrincipal(l, c, mat);
	    for(i=0; i < l; i++){
		    for (j=0; j < c; j++){
	           	 if(j>i){
		            soma = soma + mat[i][j];
	            	}
		    }
	    }
	    return soma;

	case 4 : // Soma dos elementos abaixo da diagonal principal
	    mostraAbaixoDiagonalPrincipal(l, c, mat);
	    for(i=0; i < l; i++){
		    for (j=0; j < c; j++){
	            	if(j<i){
		            soma = soma + mat[i][j];
	            	}
		    }
	    }
	    return soma;
	    
	case 5 : // Soma dos elementos acima da diagonal secundária
	    mostraAcimaDiagonalSecundaria(l, c, mat);
	    for(i=0; i < l; i++){
		    for (j=0; j < c; j++){
	            	if(j<=c-i-2){
		            soma = soma + mat[i][j];
	            	}
		    }
	    }
	    return soma;
	    
	case 6 : // Soma dos elementos abaixo da diagonal secundária
    	mostraAbaixoDiagonalSecundaria(l, c, mat);
	    for(i=0; i < l; i++){
		    for (j=0; j < c; j++){
	            	if(j>=c-i){
		            soma = soma + mat[i][j];
	            	}
		    }
	    }
	    return soma;
    }
}

int main(int argc, char *argv[]){
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
    
    mostraMatriz(l, c, mat); //função mostraMatriz

	printf("\n\nSoma: %i\n",somaDiagonal(l, c, mat)); //função soma Diagonal
	
    return 0;
}