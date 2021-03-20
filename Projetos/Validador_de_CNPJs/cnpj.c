//Projeto Validador de CNPJ

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool verificadorDigitosIguais(int cnpj[])
{   int i;
    for(i=0; i<13; i++)
    {   if(cnpj[i] != cnpj[i+1])
            return false;
    }
    return true;
}

int digitosVerificadores(int cnpj[], int mult[], int N)
{	int soma=0, i;
	for(i=0; i<N; i++)
	{	soma = soma + cnpj[i]*mult[i];
	}
	int resto = ((soma*10) % 11)%10;
	return resto;
}

void converterEntrada(char entrada[], int cnpj[]){   
    int i, j, tamanho;
    for(i=0; i<14; i++){ //Inicializando todo o vetor com zeros, assim caso algum cnpj tenha menos que 14 dígitos, irá completar com zeros na frente.
        cnpj[i]=0;
    }
    j=13;
    tamanho=strlen(entrada);
    for(i=tamanho-1; i>=0; i--){ //Será lido da direita para esquerda.
        if(entrada[i] >= '0' && entrada[i] <= '9'){ //Tabela ASCII, se for entre 0 e 9 (código 48 a 57 da tabela ASCII) é dígito.
            cnpj[j]=entrada[i]-'0'; //Conversão para número.
            j--;
        }
        if(j<0){ //Para proteger de entradas com mais de 14 dígitos.
            break;
        }
    }
}

int main(int argc, char *argv[]){	
    int cnpj[14];
    char entrada[50];
	int m1[12]={5,4,3,2,9,8,7,6,5,4,3,2};
	int m2[13]={6,5,4,3,2,9,8,7,6,5,4,3,2};

	printf("Entre com os 14 dígitos do CNPJ:");
	fgets(entrada, 50, stdin);
	
	converterEntrada(entrada, cnpj);

    if(!verificadorDigitosIguais(cnpj) && digitosVerificadores(cnpj, m1, 12) == cnpj[12] && digitosVerificadores(cnpj, m2, 13) == cnpj[13]){   
        printf("\nTudo certo, CNPJ válido.");
    }
	else printf("\nErro no CNPJ, entre com um CNPJ válido!.");
	
	return 0;
}

