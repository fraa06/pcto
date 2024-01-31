#include <stdio.h>

int main()
{
    char lettera;

    printf("inserisci una lettera\n");
    scanf(" %c", &lettera);
   
    if ( lettera>=97 && lettera<=122 )
    {
         if ( lettera == 'a' || lettera == 'e' || lettera == 'i'|| lettera == 'o' || lettera == 'u' )
        {
            printf("è una vocale\n");
        }
        else 
        {
            printf("è una consonante\n");
        }
    }
    else
    {
        printf("ti ho detto una lettera\n");
    }

    return(0);
}