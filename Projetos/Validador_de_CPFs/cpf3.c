//2) Função

#include <stdio.h>

int calculaDigito(int cpf[], int mult[], int n){
    int soma=0, i;
	for(i=0; i<n; i++){	
	    soma = soma + cpf[i]*mult[i];
	}
	int resto = ((soma*10) % 11)%10;
	return resto;
}

int main(int argc, char *argv[]){
	int cpf[11];
	int m1[9]={10,9,8,7,6,5,4,3,2};
	int m2[10]={11,10,9,8,7,6,5,4,3,2};
	int i;
	printf("Entre com os 11 digitos do CPF: ");
	for(i=0;i<11;i++){	
	    scanf("%d", &cpf[i]);
	}
	
	if(calculaDigito(cpf, m1, 9) == cpf[9] && calculaDigito(cpf, m2, 10) == cpf[10]){
		printf("\nCPF valido.");
	}
	else{
		printf("\nCPF invalido.");
	}
	
	return 0;
}
	
	/*if(calculaDigito(cpf, m1, 9) == cpf[9]){
		printf("\nPrimeiro verificador valido.");
	}
	else{
		printf("\nErro no primeiro verificador.");
	}
	
	if(calculaDigito(cpf, m2, 10) == cpf[10]){
		printf("\Segundo verificador valido.");
	}
	else{
		printf("\nErro no segundo verificador.");
	}*/
