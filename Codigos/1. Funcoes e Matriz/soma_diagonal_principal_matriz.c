/*Faça um programa (ou uma função) que some os elementos da diagonal principal de uma matriz quadrada.
Exemplo de matriz 3x3:  5 9 6 
                        2 1 3
                        8 7 4
                        Diagonal Principal: 5 - 1 - 4  --> Soma: 10
*/
#include <stdio.h>

//Função para somar a diagonal
int somaDiagonalPrincipal(int l, int c, int mat[l][c]){

    int soma=0;
    
    for(int i=0; i<l; i++){
        soma = soma+mat[i][i];
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
    printf("Sua Diagonal Principal: ");
    for(int i=0; i<l; i++){
        printf("- %i - ", mat[i][i]); //Para imprimir a diagonal principal informada pelo usuário.
    }
    
	printf("\nSoma da Diagonal Principal: %i",somaDiagonalPrincipal(l, c, mat));
	
    return 0;
}

