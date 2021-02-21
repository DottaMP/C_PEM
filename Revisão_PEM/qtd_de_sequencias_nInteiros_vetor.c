/*Revisão de PEM
Dados n e uma sequência de n números inteiros, determinar quantos segmentos de números iguais consecutivos compõem essa sequência.
Exemplo: A seguinte sequência é formada por 5 segmentos de números iguais: 5, 2, 2, 3, 4, 4, 4, 4, 1, 1
Ou seja, contarei assim: <<5>>,<< 2, 2>>,<< 3>>,<< 4, 4, 4, 4>>, <<1, 1>> 
Portanto, tenho 5 grupos.     */

#include <stdio.h>
int main(int argc, char *argv[]){
    int n=10, i, grupos=1, vet[]={5, 2, 2, 3, 4, 4, 4, 4, 1, 1};
    
    for(i=1; i<n;i++){
        if(vet[i] != vet[i-1]){
            grupos++;
        }
    }
    
    printf ("Quantidade de grupos: %i", grupos);
    
    return 0;
}    
    /*Ou:
    int N, i, grupos = 1;
    printf("Quantos números serão digitados?");
    scanf("%i", &N);
    int vet[N];
    printf("Digite os %i números:", N);
    scanf("%i", &vet[0]); //leitura do primeiro elemento
    for(i=1; i<N; i++){   
        scanf("%i", &vet[i]);
        if(vet[i] != vet[i-1]){
            grupos++;
        }
    }
    printf("Há %i grupos", grupos);
    return 0;
}

    Ou:
    int N, i, grupos = 1;
    printf("Quantos números serão digitados?");
    scanf("%i", &N);
    int vet[N];
    printf("Digite os %i números:", N);
    scanf("%i", &vet[0]);//leitura do primeiro elemento
    for(i=1; i<N; i++){   
        scanf("%i", &vet[i]);
        if(vet[i] != vet[i-1]){
            grupos++;
        }
    }
    printf("Há %i grupos", grupos);
    return 0;
}
    
    Ou:
    int vet[] = {5, 2, 2, 3, 4, 4, 4, 4, 1, 1}, N=10;
    int grupos = 1;
    int i = 1; //índice do segundo elemento
    printf("<<%i", vet[0]);
    while(i < N){   
        if(vet[i] != vet[i-1]){   
            grupos++;
            printf(">> <<%i", vet[i]);
        }else{   
            printf(" %i", vet[i]);
        }
        i++;
    }
    printf(">>\n");
    printf("Há %i grupos", grupos);
    return 0;
}*/
