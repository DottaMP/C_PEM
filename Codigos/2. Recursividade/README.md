# Recursividade 
<br>
Casting = conversão forçada. 
Ex.: int N; (float)N ----> Forçando a conversão de N para float.
### Função Recursividade é quando uma função chama a ela mesma.É uma técnica para resolver problemas que envolve o uso de soluções dos mesmos problemas, só que em versões menores; exemplificando:    

      Como faço para calcular o fatorial do número 4? Ora, é 1*2*3*4 ou 4*3*2*1    
      E o fatorial do número 3? É 1*2*3.    
      E o fatorial do número 2? É 1*2.    
      E o fatorial do número 1? É 1.    
      E o fatorial do número 0? É 1.    
<br>
      Reparem que o fatorial do número 3 é parte do cálculo do fatorial do número 4? Ou seja, fatorial de 4 é igual a 4 vezes o fatorial do 3, ou:    

	4! = 4 * 3!

      Genericamente definimos (recursivamente) o fatorial de N como:

	N! = N * (N-1)!

      Percebem como uso a solução do próprio fatorial em versão menor (fatorial de N-1) 
      para o cálculo do problema original (fatorial de N)?    
      Mas este raciocínio tem de parar em algum momento, pois senão seria uma repetição 
      infinita: para calcular o fatorial do 2 precisaria do fatorial do 1, para calcular 
      o fatorial do 1 precisaria do fatorial do 0, para calcular o fatorial do 0 precisaria 
      do fatorial do -1, e do fatorial do -2, -3, -4, ... Este ponto de parada é chamado 
      de base da recursão; consiste na versão mais simples possível do problema, cuja solução é óbvia.
      Para o problema do fatorial, a base é o fatorial de 0, que é definido como valendo 1:

	0! = 1

      Ao programarmos um algoritmo recursivo precisamos tomar um cuidado: testarmos a base da recursão 
      antes de fazermos a chamada recursiva, para evitarmos a criação de um laço infinito. Vejamos como 
      isso se aplica na implementação da função fatorial:

      int fatorial (int N)
      { 
            if(N==0) return 1;  //esta é a base da recursao
            else return N * fatorial (N-1); //a chamada recursiva
      }


Executando passo-a-passo o algoritmo do fatorial (recursivo):

fatorial(4)
 |----4*fatorial(3)-----> fatorial(3)
                                    |----3*fatorial(2)-----> fatorial(2)
                                                                       |----2*fatorial(1)-----> fatorial(1)
                                                                                                          |----1*fatorial(0)-----> fatorial(0)
                                                                                                                                                  |
                                                                                                                                                  v
                                                                                                         fatorial(1) = 1*1      <----   1
                                                                                                               |
                                                                                                               v
                                                                      fatorial(2) = 2*1      <----   1
                                                                             |
                                                                             v
                                    fatorial(3) = 3*2      <----   2
                                          |
                                          v
fatorial(4) = 4*6      <----    6
      |
      v
     24



#### Uma implementação cheia de printfs para ajudar o entendimento:    
 
    int fatorial (int N){    
        if(N==0){  
            printf("Cheguei finalmente na base... 0! = 1\n");    
            return 1;
        } else {   
            printf("Para calcular o fatorial de %d preciso calcular o de %d\n", N, N-1);    
            int aux = fatorial (N-1);    
            printf("Calculei o fatorial de %d que dá %d\n", N-1, aux);    
            return N * aux;}    
    }
    
    int main(){   
        int x;    
        printf("Entre com um número:");    
        scanf("%d", &x);    
        printf("O fatorial de %d é %d\n", x, fatorial(x));    
    return 0;    
    }    
