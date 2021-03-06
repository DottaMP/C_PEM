/*Imprimir as n primeiras linhas do triângulo de Pascal. 
Dicas:
a) a primeira coluna sempre contém 1.
b) o último elemento de cada linha sempre é 1.
c) todos os outros elementos podem ser calculados 
somando-se o de cima com o de cima à esquerda.
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
1   5  10  10   5   1 */

#include <stdio.h>

int main(int argc, char *argv[]){
    //Utilizando Matriz
    int n;
    printf("Informe o número de linhas do triangulo de Pascal: ");
    scanf("%i",&n);
    int mat[n][n], l,c;
    
    for(l=0; l<n; l++){
        for(c=0; c<=l; c++){
            if(c==0){
                mat[l][c]=1;
            } else if(l==c){
                mat[l][c]=1;
            } else{
                mat[l][c]=mat[l-1][c]+mat[l-1][c-1];
            }
            printf("%6i", mat[l][c]); //%6 -> o resultado será exibido com um espaço de 6 espaços entre os numeros
        }
        printf("\n");
    }
    
    /*Utilizando Vetor
    int n;
    printf("Informe o número de linhas do triangulo de Pascal: ");
    scanf("%i",&n);
    int vet[n], l,c;
    
    for(l=0; l<n; l++){
        for(c=l; c>=0; c--){
            if(c==0){
                vet[c]=1;
            } else if(l==c){
                vet[c]=1;
            } else{
                vet[c]=vet[c]+vet[c-1];
            }
            printf("%6i", vet[c]); //%6 -> o resultado será exibido com um espaço de 6 espaços entre os numeros
        }
        printf("\n");
    }*/
    
    return 0;
}


