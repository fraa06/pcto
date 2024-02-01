#include <stdio.h>

void massimo()
{
    int x;
    int y;

    printf("inserisci due numeri\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if ( x>y )
    {
        printf("il massimo è: %d\n", x);
    }
    else if ( y>x )
    {
        printf("il massimo è: %d\n", y);
    }
    else
    {
        printf("i numeri sono uguali\n");
    }
}

int main()
{
    massimo();
    return(0);
}