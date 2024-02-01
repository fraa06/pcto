#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int y;
    int z;
    int sp;
    int area;

    printf("inserisci le misure dei lati del triangolo\n");
    scanf(" %d", &x);
    scanf(" %d", &y);
    scanf(" %d", &z);

    if ( x+y>z && y+z>x && x+z>y)
    {
        printf("il perimetro del triangolo è: %d\n", x+y+z );
        sp = ((x+y+z)/2);
        area = sqrt(sp*(sp-x)*(sp-y)*(sp-z));
        printf("l'area del triangolo è: %d\n", area );
    }
    else
    {
        printf("non è un triangolo\n");
    }

    return(0);
}