/*Alterando a entrada de dígitos para string, utilizando a tabela ASCII.
Código ASCII	Caractere	Correspondente (número)
	48				'0'			0
	49				'1'			1
	50				'2'			2 
	51				'3'			3
	52				'4'			4
	53				'5'			5
	54				'6'			6
	55				'7'			7
	56				'8'			8
	57				'9'			9
*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

//Primeira maneira de checagem no Estado.
void imprimeEstado1(int cpf[]){   
    if(cpf[8] == 0) printf("\nRio Grande do Sul");
    else if(cpf[8] == 1) printf("\nDistrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul e Tocantins");
    else if(cpf[8] == 2) printf("\nAmazonas, Pará, Roraima, Amapá, Acre e Rondônia");
    else if(cpf[8] == 3) printf("\nCeará, Maranhão e Piauí");
    else if(cpf[8] == 4) printf("\nParaíba, Pernambuco, Alagoas e Rio Grande do Norte");
    else if(cpf[8] == 5) printf("\nBahia e Sergipe");
    else if(cpf[8] == 6) printf("\nMinas Gerais");
    else if(cpf[8] == 7) printf("\nRio de Janeiro e Espírito Santo");
    else if(cpf[8] == 8) printf("\nSão Paulo");
    else if(cpf[8] == 9) printf("\nParaná e Santa Catarina");
}

//PSegunda maneira de checagem no Estado.
void imprimeEstado2(int cpf[]){   
    switch(cpf[8]){   
        case 0: printf("\nRio Grande do Sul"); break;
        case 1: printf("\nDistrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul e Tocantins"); break;
        case 2: printf("\nAmazonas, Pará, Roraima, Amapá, Acre e Rondônia"); break;
        case 3: printf("\nCeará, Maranhão e Piauí"); break;
        case 4: printf("\nParaíba, Pernambuco, Alagoas e Rio Grande do Norte"); break;
        case 5: printf("\nBahia e Sergipe"); break;
        case 6: printf("\nMinas Gerais"); break;
        case 7: printf("\nRio de Janeiro e Espírito Santo"); break;
        case 8: printf("\nSão Paulo"); break;
        case 9: printf("\nParaná e Santa Catarina");
    }
}

//Terceira maneira de checagem no Estado.
void imprimeEstado3(int cpf[]){   
    char estados[][80] = {  {"\nRio Grande do Sul"},
                            {"\nDistrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul e Tocantins"},
                            {"\nAmazonas, Pará, Roraima, Amapá, Acre e Rondônia"},
                            {"\nCeará, Maranhão e Piauí"},
                            {"\nParaíba, Pernambuco, Alagoas e Rio Grande do Norte"},
                            {"\nBahia e Sergipe"},
                            {"\nMinas Gerais"},
                            {"\nRio de Janeiro e Espírito Santo"},
                            {"\nSão Paulo"},
                            {"\nParaná e Santa Catarina"}  };
    printf("%s", estados[ cpf[8] ]);
}

bool todosDigitosIguais(int cpf[])
{   int i;
    for(i=0; i<10; i++)
    {   if(cpf[i] != cpf[i+1])
            return false;
    }
    return true;
}

int calculaDigito(int cpf[], int mult[], int N)
{	int soma=0, i;
	for(i=0; i<N; i++)
	{	soma = soma + cpf[i]*mult[i];
	}
	int resto = ((soma*10) % 11)%10;
	return resto;
}

int main(int argc, char *argv[]){	
    int cpf[11];
    char entrada[50];
	int m1[9]={10,9,8,7,6,5,4,3,2};
	int m2[10]={11,10,9,8,7,6,5,4,3,2};
	int i, j, tamanho;
	printf("Entre com os 11 digitos do CPF:");
	gets(entrada);

    j=0;
    tamanho=strlen(entrada);
    for(i=0; i<tamanho; i++){
        if(entrada[i] >= '0' && entrada[i] <= '9'){ //Tabela ASCII, se for entre 0 e 9 (código 48 a 57 da tabela ASCII) é dígito.
            cpf[j]=entrada[i]-'0'; //Conversão para número.
            j++;
        }
    }

    if(!todosDigitosIguais(cpf) &&
       calculaDigito(cpf, m1, 9) == cpf[9] && 
       calculaDigito(cpf, m2, 10) == cpf[10])
        {   printf("\nCPF válido.");
            imprimeEstado1(cpf);
            imprimeEstado2(cpf);
            imprimeEstado3(cpf);
        }
	else printf("\nErro no CPF.");
	return 0;
}