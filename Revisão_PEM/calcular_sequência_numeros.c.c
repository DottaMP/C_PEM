/*Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas 
como dois números inteiros de n algarismos, calcular a sequência de 
números que representa a soma dos dois inteiros.
Exemplo: n = 8,
		1ª sequência		8 2 4 3 4 2 5 1
		2ª sequência		3 3 7 5 2 3 3 7  +
					     -----------------------
					     1 1 6 1 8 6 5 8 8       */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int vet1[]={1, 5, 2, 4, 3, 4, 2, 8}, n=8,
    vet2[]={7, 3, 3, 2, 5, 7, 3, 3},
    vet3[n+1],
    i, vaiUm=0, somaAux;
    
    for(i=0;i<n;i++){
        somaAux=vet1[i]+vet2[i]+vaiUm;
        vet3[i]=somaAux%10; //calcula o digito da soma
        vaiUm=somaAux/10;
    }
    vet3[n]=vaiUm;
    
    for(i=n;i>=0;i--){
        printf("%i", vet3[i]);
    }
    
    return 0;
}

/* Ou
    int num1[] = {8, 2, 4, 3, 4, 2, 5, 1};
    int num2[] = {3, 3, 7, 5, 2, 3, 3, 7};
    int n = 8;
    int soma[n+1];
    int i, vaium = 0;
    
    for(i = n-1; i >= 0; i--){
        soma[i + 1] = (num1[i] + num2[i] + vaium) % 10;
        vaium = (num1[i] + num2[i] + vaium) / 10;
    }
    soma[0] = vaium;
    for(i=0; i < n+1; i++){
        printf("%d ", soma[i]);        
    }
*/
