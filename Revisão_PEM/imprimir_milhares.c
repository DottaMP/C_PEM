/*Qualquer número natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus dois primeiros e dois últimos dígitos.
Exemplos:
 1297: 12 e 97.
 5314: 53 e 14.
Escreva um programa que imprime todos os milhares (4 algarismos) cuja raiz quadrada seja a soma das dezenas formadas pela divisão acima.

Exemplo: raiz de 9801 = 99 = 98 + 01.
Portanto 9801 é um dos números a ser impresso.*/

#include <stdio.h>

int main(int argc, char *argv[]){
    
    int i, dezena1, dezena2, raiz;
    
    for(i=1000; i<=9999; i++){
        dezena1 = i / 100;
        dezena2 = i % 100;
        raiz = (dezena1+dezena2);
        
        if((raiz*raiz)==i){
            
            printf("%i\n", i);
        }
    }
    
    return 0;
}
