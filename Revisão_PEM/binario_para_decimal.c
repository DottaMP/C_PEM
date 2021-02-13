/*Revisão de PEM
Dado um número natural na base binária, transformá-lo para a base decimal.
Exemplo: Dado 10010 a saída será 18, pois 1. 2^4 + 0. 2^3 + 0. 2^2 + 1. 2^1 + 0. 2^0 = 18
101010 a saída será 42*/
#include <stdio.h>
#include <stdbool.h> //Incluir os booleanos

int main(int argc, char *argv[]){
    
    int digito, potencia=1, binario, soma=0; 
    bool erro = false; //Por enquanto não tem erro
    
    printf("Informe um numero em binario: ");
	scanf("%i", &binario);
    
    while (binario > 0){
        digito=binario%10;
        if (digito!=0 && digito!=1){
            erro = true;
            break;
        }
        binario=binario/10;
        soma=soma+(digito*potencia);
        potencia=potencia*2;
    }
    if(erro==true){
        printf("Número digitado não está na base Binária!");
    }else{
        printf("Número equivalente em Decimal: %i", soma);
    }
    
    /*OU 
    while( n > 0){	
    	soma = soma + (n%10)*mult;
		printf("%d . ", n%10);
		printf("%d\n", mult);
		n= n/10;
		mult = mult * 2;
	}*/
	
    return 0;
}
