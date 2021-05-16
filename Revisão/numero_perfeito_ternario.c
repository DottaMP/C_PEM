/*Revisão de PEM
Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores 
positivos diferentes de n. Dado um inteiro positivo n, verificar se n é perfeito.
Exemplo 1: 6 é perfeito, pois 1+2+3 = 6	
Exemplo 2: 20 não é perfeito, pois 1+2+4+5+10 = 22*/

#include <stdio.h>

int main(int argc, char *argv[]){
    
    int numero, i, soma=0;
    
    printf("Informe um numero inteiro: ");
	scanf("%i", &numero);
    
    for(i=1; i<numero; i++){
        if(numero%i==0) { 
            soma+=i;
        }
	}
	
	if(numero==soma){
		printf("É um número perfeito!");
	}else {
	    printf("Não é perfeito!");
	}
	
	/*Utilizando o operador ternário ao invés dos ifs/else
	(condição, interrogação, valor verdadeiro : valor falso).
	
	for(i=1; i<numero; i++){
        soma = numero%i == 0 ? soma + i : soma;
	}
	printf("%s", numero==soma ? "É um número perfeito!" : "Não é perfeito!") */
	
	
	/*Utilizando for para imprimir todos os números perfeitos até 10.000:
	    for(numero=1, numero<=10000; numero++){
	        soma=0;
	        for(i=1; i<=numero/2; i++){ //otimiza utilizando o numero/2, pois o número que vai dividir o número nunca será maior que a metade dele.
	            if(numero%i==0){
	                soma+=i;
	            }
	        }
	        if(numero==soma){
	            printf("%i\n", numero);
	        }
	    }*/
	
    return 0;
}
