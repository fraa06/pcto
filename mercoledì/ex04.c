#include <stdio.h>

int main()
{
    int x;
    float y;

    while ( x>0 )
    {
       printf("inserisci numero pezzi\n");
       scanf("%d", &x);
       if ( x<=0 )
       {
            y = 0;
       }
       else if ( x<30 )
       {
            y = x*5;
       }
       else if (x>=30 && x<50)
       {
            y = (x*5) - (1.5/10)*(x*5);
       }
       printf("il prezzo è di %f euro\n", y);
    }
    
    return(0);
}