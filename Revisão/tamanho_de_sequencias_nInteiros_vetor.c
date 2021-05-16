/*Revisão de PEM
Dados n e uma sequência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento máximo.
Exemplos:
Na sequência 5, 10, 3, <<2, 4, 7, 9>>, 8, 5 o comprimento do segmento crescente máximo é 4.
Na sequência 10, 8, 7, 5, 2 o comprimento de um segmento crescente máximo é 1.
Outra sequência: 6, 4, 9, 10, 12, 13, 5, 2, 4, 8, 16, 32 -> 5*/

#include <stdio.h>
int main(int argc, char *argv[]){
    int tam=0, maior=0, n;
    int i=0;
    
    printf("Quantos números serão digitados?");
    scanf("%i", &n);
    int vet[n];
    
    while(i<n){
        printf("Digite o %iº número:", i+1);
        scanf("%i", &vet[i]);
        
        if(vet[i]>vet[i-1]){
            tam++;
        }else{
            tam=1;
        }
        
        i++;
        
        if(tam>maior){
            maior=tam;
        }
    }
    printf("Tamanho maximo: %i", maior);
    
    return 0;
}
    /*Ou
    int vet[]={5, 10, 3, 2, 4, 7, 9, 8, 5}, N=9;
	//int vet[]={10, 8, 7, 5, 2}, N=5;
	int cont=1, max=1, i;
	for(i=1; i<N; i++){	
	if(vet[i] > vet[i-1]){
	    cont++;
	}else {
	    cont = 1;
	}
	if(cont > max){
	    max = cont;
	}
	}
	printf("\nTamanho maximo crescente da sequencia = %i\n", max);
	return 0;
}*/