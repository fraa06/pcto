#include <stdio.h>

int main()
{
    char parola[100];
    int x=0;
    
    printf("inserisci una parola\n");
    scanf("%[^\n]", parola);

    while ( parola[x] != '\0' )
    {
        if ( parola[x]<=122 && parola[x]>=97 )
        {
            parola[x]=parola[x]-32;
        }
        x=x+1;
    }
    
    printf("%s\n", parola);

    return(0);
}