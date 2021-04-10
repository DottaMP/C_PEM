/*Exemplo de Recursividade
Contagem regressiva da bomba.*/

#include <stdio.h>

void bomba(int N){
    if(N>0){
        printf("%i\n",N);
        bomba(N-1);
    } else{
        printf("BUUUUMMMMMM!!!");
    }
}

int main()
{
    bomba(10);
    
    return 0;
}
