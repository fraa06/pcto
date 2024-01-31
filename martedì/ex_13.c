#include <stdio.h>

int main()
{
    int x;
    int result=1;
    printf("inserisci un numero\n");
    scanf("%d", &x);
    while (x>0)
    {
        result = result*x;
        x = x-1;
    }
    printf("%d\n", result);
    
    return(0);
}