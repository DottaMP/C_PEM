# Ponteiros
<br>
 	Até hoje, nós acessávamos a memória da máquina através de modos de alto nível, como através de variáveis, vetores e matrizes. Nem sabíamos onde na memória estas variáveis ficavam.
	Ponteiros representam o recurso da linguagem C para acessar de modo direto a memória da máquina (ponteiro = endereço de memória).
	Usaremos 3 operadores para lidar com ponteiros, '&', '*' (como operadores unários¹) e '->' os quais terão 4 diferentes usos:

1) Operador '*' em declarações (declarações de variáveis e parâmetros de funções/procedimentos) diz que a variável/parâmetro vai guardar um endereço (ou ponteiro):

int *p;	//isso significa que p é uma
		//variável do tipo ponteiro, ou seja,
		//guarda um endereço de memória

double *x;	//também aqui estou declarando
			//uma variável que guarda um 
			//endereço de memória

char *q;	//idem

2) Operador '&' descobre qual é o endereço de uma variável:

int *p;	//p guardará um endereço de memória ou ponteiro
int x;
p = &x; 	//p conterá o endereço em que a variável x está guardada

printf("A variável x está armazenada no endereço %p\n", p); //%p vem de ponteiro, em hexadecimal

3) Operador '*' fora de declarações significa "conteúdo" de um endereço de memória:

int x = 2;
int *p; //p é um ponteiro; vai guardar um endereço de memória
p = &x; //p recebe o endereço da variável x
printf("O conteúdo da variável apontada por p é %d\n", *p); //conteúdo apontado por p
//mostrará  2, pois este é o conteúdo do endereço apontado por p


4) Um operador adicional é útil em algumas situações, '->'.
Ele permite acessar um campo de uma estrutura através do endereço ou ponteiro da estrutura:

	struct amigo
	{	int idade;	
		char nome[50];
	};

	typedef struct amigo AMIGO;

	......
	AMIGO vet[100];
	.....
	AMIGO *a;
	a = vet;
	for(i=0; i<5;i++)
	{	printf("\nIdade: %d", a->idade); //similar a vet[i].idade
		printf("\nNome: %s", a->nome); //similar a vet[i].nome
		a++;
	}



Como alocar memória dinamicamente
---------------------------------------------------

Até agora nós alocávamos memória através de variáveis, vetores e matrizes (alocação estática):

int x;
float vet[50];


Há chamadas próprias ao Sistema Operacional que reservam e modificam áreas de memória:

-malloc (memory allocation): forneço a quantidade de bytes que preciso e ela retorna para mim o endereço de início da área.
-realloc (memory reallocation): altera o tamanho de uma região de memória já alocada.


Dica: sizeof() descobre o tamanho em bytes de um tipo




Legenda:
------------

¹Operadores unários são aqueles que operam sobre um único operando. Exemplos (-, !, ++):
	-x é a mesma coisa que -1*x
	!true  resulta em  false
	++x  resulta em  x=x+1

Operadores binários são aqueles que operam sobre dois operandos. Exemplos (+ e *):
2+3 resulta em 5
2*3 resulta em 6

Operador ternário é aquele que opera sobre 3 operandos (?:):

resultado = x > 0 ? x : -x;

isso é similar a:

if(x>0) resultado = x;
else resultado = -x;
