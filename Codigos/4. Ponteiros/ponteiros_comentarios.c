/* 1) a) Qual o valor de y no final do programa?
   b) Escreva um comentário em cada comando de atribuição explicando 
   o que ele faz e o valor da variável à esquerda do '=' após sua execução.
   c) Explique o porquê de a atribuição *q = 10  causar problemas.*/
#include <stdio.h>
int main(){
    
    int x, y, *p, *q; //x e y são var. inteiras; p e q são var. ponteiro (end. memória)
    y = 19; //y recebe 19
    p = &y; //p recebe o endereço de memória de y
    x = *p; //x recebe p, que por esse possuí o valor de y (19) 
    x = 7; //x recebe 7
    (*p)++; //é incrementado + 1 no em p (fazendo com que y passe a valer 20)
    x--; //é decrementado - 1 em x (x vale 6)
    (*p) = (*p) + x; // ponteiro p recebe ele mesmo + x (ou seja, recebe ele mesmo 20 mais x 6 = fazendo com que y valha 26)
    printf ("y = %d\n", y); //mostrar o conteúdo da variável y (que vale 26).
    *q = 10; //ponteiro q recebe 10. Causa problema pois não tem como saber o valor do endereço ponteiro.
return 0;
}


/* 2) Comente o trecho abaixo linha-a-linha e mostre o que será impresso pelo comando printf:*/
#include <stdio.h>
int main(){
    
    int a = 10, b = 7, c; //a recebe 10, b recebe 7, c não inicializado
    int * p = &a; // p recebe o endereço de a (vale 10)
    int * q = &b; // q recebe o endereço de b (vale 7)
    int * r = &c; // r recebe o endereço de c (vale 0)
    *r = *p; // r recebe p (passa a valer 10)
    *p = *q; // p recebe q (passa a valer 7)
    *q = *r; // q recebe r (passa a valer 10)
    printf("%d  -  %d", a, b);  // p que aponta para a vale 7 (pois a última atribuição recebida por *p foi *q que vale 7)
                                // q que aponta para b vale 10 (pois a última atribuição recebida por *q foi r que vale 10 )
    
return 0;
}


/* 3) Comente o trecho abaixo linha-a-linha e mostre o que será impresso pelo comando printf:*/
#include <stdio.h>
int main(){
    
    int vet[ ] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; // vetor do tipo inteiro declarado, recebendo 9 posições com valores definidos de 2 a 20, sendo de 2 em 2.
    int * p = &(vet[2]); // ponteiro p do tipo inteiro declarado recebe o endereço do vetor da posição 2 (que vale 6)
    int i; // variável i do tipo inteira declarada
    for ( i = 1; i <= 6; i++ ) { // loop for, onde i começa com 1 e enquanto i for <=6 é incrementado + 1.
        printf ("%d -  ", *p); // Mostra o conteúdo do ponteiro p até i menor ou igual a 6, sendo que no primeiro laço p vale 6
        p++; // é incrementado + 1 em p.
    }
    
    //Saída: 6 -  8 -  10 -  12 -  14 -  16 
    
return 0;
}


/* 4) Por que o primeiro scanf abaixo usa o operador '&' e o segundo não?
Porque está passando o endereço da variável x para função scanf(), não está passando o valor de x, pois esse varia de valor.
Não tem porque usar o & no segundo, pois o scanf() espera um ponteiro e sua variável já guarda um endereço de memória definido*/
#include <stdio.h>
int main(){
    
    int x; // variável x do tipo inteira declarada
    scanf("%d", &x); // função scanf recebe o que o usuário digitou.

    char nome[50]; // variável nome do tipo char de tamanho 50 declarada.
    scanf("%s", &nome); //// função scanf recebe o que o usuário digitou.

    
return 0;
}