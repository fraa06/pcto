#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("inserisci due numeri\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    if ( n1 % n2 == 0 )
    {
        printf("il primo numero è multiplo del secondo\n");
    }
    else
    {
        printf("il primo numero non è multiplo del secondo\n");
    }
    
    return(0);
}