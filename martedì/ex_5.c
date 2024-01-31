#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("inserisci 3 numeri per scoprire se sono una progressione aritmetica\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if (n1-n2 == n2-n3)
    {
        printf("questi numeri sono in progressione aritmetica\n");
    }
    else
    {
        printf("questi numeri non sono in progressione aritmetica\n");
    }
    return(0);
}