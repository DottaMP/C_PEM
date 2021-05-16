// Estruturas 3
//strcmp = string compare -> comparação entre duas strings.


#include <stdio.h>
#include <string.h>
int main()
{   
    printf("a, b -> %d\n", strcmp("a", "b"));
    printf("b, a -> %d\n", strcmp("b", "a"));
    printf("a, a -> %d\n", strcmp("a", "a"));
    return 0;
}
