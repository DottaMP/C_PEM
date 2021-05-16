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
	}
	printf("\nConversao em decimal = %d\n", soma);*/
	
    /*OU 
    int n, //número a converter
    copia, //cópia do valor original
    resto, //resto da divisão por 10
    quociente, // resultado da divisão por 10
    potenciaDe2 = 1, //primeira potência de 2 .... 2^0 = 1
    soma = 0; //soma acumulada das parcelas da conversão
    
    printf("Entre com um número em binário:");
    scanf("%d", &n);
    copia = n;
    while(n>0){
        quociente = n/10;
        resto = n%10;
        soma = soma + resto * potenciaDe2;
        n = quociente;
        potenciaDe2 = potenciaDe2 * 2;
    }
    printf("%d corresponde a %d", copia, soma);*/

    /*OU usando strings:
    #include <stdio.h>
    #include <string.h>
    int main(){   
    char entrada[50];
    printf("Entre com o número em binário:");
    gets(entrada);
    int tamanho = strlen(entrada);
    int i, soma = 0, potenciaDe2 = 1;
    for(i=tamanho-1; i>=0; i--)
    {   soma = soma + (entrada[i] - '0')*potenciaDe2;
        potenciaDe2 = potenciaDe2 * 2;
    }
    printf("Resultado = %d\n", soma);*/

    return 0;
}
