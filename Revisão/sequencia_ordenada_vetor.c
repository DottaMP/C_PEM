/*Dados dois números naturais m e n e duas sequências ordenadas com m e n números inteiros, obter uma única sequência ordenada contendo todos os elementos das sequências originais sem repetição.
Sugestão: Imagine uma situação real, por exemplo, dois fichários de uma biblioteca.
Exemplo: 
Sequência 1:  1, 1, 2, 3, 4, 8, 9
Sequência 2:  1, 3, 5, 7, 10
Sequência gerada (com repetição): 1, 1, 1, 2, 3, 3, 4, 5, 7, 8, 9, 10
Sequência gerada (sem repetição): 1, 2, 3, 4, 5, 7, 8, 9, 10*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    //Com repetição:
    int vet1[]={1, 1, 2, 3, 4, 8, 9},
    vet2[]={1, 3, 5, 7, 10},
    n1=7, n2=5,
    n3=n1+n2, i=0, j=0, k=0,
    vet3[n3];
    
    for(k=0;k<n3;k++){
        if(i<n1 && j<n2){
            if(vet1[i]<=vet2[j]){
                vet3[k]=vet1[i];
                i++;
            }else{
                vet3[k]=vet2[j];
                j++;
            }
        }else if(i<n1){
            vet3[k]=vet1[i];
            i++;
        }else{
            vet3[k]=vet2[j];
            j++;
            
        }
        printf("%i ",vet3[k]);
    }

    return 0;
    
    /*Sem repetição:
    int vet1[]={1, 1, 2, 3, 4, 8, 9},
    vet2[]={1, 3, 5, 7, 10},
    n1=7, n2=5,
    n3=n1+n2, i=0, j=0, k, l,
    vet3[n3],
    vet4[n3];
    
    for(k=0;k<n3;k++){
        if(i<n1 && j<n2){
            if(vet1[i]<=vet2[j]){
                vet3[k]=vet1[i];
                i++;
            }else{
                vet3[k]=vet2[j];
                j++;
            }
        }else if(i<n1){
            vet3[k]=vet1[i];
            i++;
        }else{
            vet3[k]=vet2[j];
            j++;
            
        }
        
    }
    vet4[0]=vet3[0];
    printf("%i ",vet4[0]);
    for(k=1;k<n3;k++){
        if(vet3[k]!=vet3[k-1]){
            vet4[l]=vet3[k];
            printf("%i ",vet4[l]);
            l++;
        }
    }
    return 0;*/
    
}
