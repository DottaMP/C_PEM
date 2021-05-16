/*Exemplo de Recursividade
Contagem progressiva.*/

#include <stdio.h>

void progressivo(int inicio, int fim){
    if(inicio<=fim){
        printf("%i\n",inicio);
        progressivo(inicio+1, fim); //chama a própria função e incrementa +1.
    } 
}

int main()
{
    progressivo(1, 10); //começa com 1 e termina com 10
    
    return 0;
}
