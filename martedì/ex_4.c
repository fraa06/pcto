#include <stdio.h>

int main()
{
    int tC;
    printf("inserisci la temperatura in Celsius\n");
    scanf("%d", &tC);

    if (tC < -273)
    {
        printf("error: la temperatura va sotto lo zero assoluto\n");
    }
    else
    {
        printf("la temperatura in Kelvin è: %d\n", tC + 273 );
        printf("la temperatura in Fahrenheit è: %d\n", tC * (9/5) + 32 );
    }
    return(0);
}