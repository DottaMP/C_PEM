/*Revisão de PEM
Dado um número natural na base decimal, transformá-lo para a base binária.
Exemplo: Dado 18 a saída deverá ser 10010.
Dica e explicação da ideia:
 18 |__2__
  0     9  |__2__
<-      1     4   |__2__
      <-       0      2   |__2__
            <-         0      1   |__2__
                   <-          1      0
                          <-
(10010)  == (18)
            2           10
            
0 x 1          =         0
1 x 10         =       10
0 x 100      =         0
0 x 1000    =         0
1 x 10000  = 10000    +
--------------------------- 
                     10010  */

#include <stdio.h>
int main(int argc, char *argv[]){
    int numero, multiplicador=1,soma=0;
    printf("Informe um número na base decimal: ");
    scanf("%i", &numero);
    while(numero>0){
        soma=soma+(numero%2)*multiplicador;
        numero/=2;   
        multiplicador*=10;
        
    }
    printf ("Número na base binária: %i", soma);
    
    /*Ou utilizando Vetor:
    
    int numero, i=0, vet[50];
    printf("Informe um número na base decimal: ");
    scanf("%i", &numero);
    while(numero>0){
        vet[i]=numero%2;
        numero/=2;
        i++;
    }
    printf ("Número na base binária: ");
    for(i=i-1; i>=0; i--){
        printf ("%i", vet[i]);
    }*/
    
    return 0;
}
