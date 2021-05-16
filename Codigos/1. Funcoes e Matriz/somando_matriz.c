#include<stdio.h>

void somaMatriz(int L, int C, int A[L][C], int B[L][C], int SOMA[L][C])
{	int l, c;
	for(l=0; l<L; l++)
	{	for(c=0; c<C; c++)
		{	SOMA[l][c] = A[l][c] + B[l][c]; 
		}
	}
}

void mostraMatriz(int L, int C, int M[L][C])
{	int l, c;
	for(l=0; l<L; l++)
	{	for(c=0; c<C; c++)
		{	printf( "%d\t", M[l][c]);
		}
		printf("\n");
	}
}

int main()
{	int A[2][2] = {{0, -1}, {2, -3}};
	int B[2][2] = {{6, 7}, {9, 4}};
	int SOMA[2][2];
	
	somaMatriz(2, 2, A, B, SOMA);
	mostraMatriz(2, 2, SOMA);
	
	return 0;
}