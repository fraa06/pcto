#include <stdio.h>

int main()
{
    printf("inserire due numeri\n");
    int x;
    int y;
    char segno;
    scanf(" %d", &x);
    scanf(" %d", &y);
    printf("inserire in segno dell'operazione desiderata\n");
    scanf(" %c", &segno);
    if ( segno == '+' )
    {
        printf("il risultato è: %d\n", x + y);
    }
    else if ( segno == '-' )
    {
        printf("il risultato è: %d\n",x - y);
    }
    else if ( segno == '*' )
    {
        printf("il risultato è: %d\n",x * y);
    }
    else if ( segno == '/' )
    {
        printf("il risultato è: %d\n",x / y);
    }
}
    