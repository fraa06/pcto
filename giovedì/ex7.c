#include <stdio.h>

int domande()
{
    char x;
    int p;

    d1:
    printf("L'inflazione è sempre dannosa per un'economia.\n");                //1
    scanf("% c", &x);
    if ( x == 70 || x == 102 )
    {
        p = p+1;
    }
    else if ( !(x == 86 || x == 118) )
    {
        printf("Puoi rispondere solamente v o f, riprova\n");
        goto d1;
    }

    d2:
    printf("Il tasso di disoccupazione misura la percentuale di persone in età lavorativa che sono senza lavoro e cercano attivamente un impiego.\n");                //2
    scanf("% c", &x);
    if ( x == 86 || x == 118 )
    {
        p = p+1;
    }
    else if ( x == 70 || x == 102 )
    {
        printf("Puoi rispondere solamente v o f, riprova\n");
        goto d2;
    }

    d3:
    printf("Il PIL pro capite è una misura del reddito medio di una nazione.\n");                //3
    scanf("% c", &x);
    if ( x == 86 || x == 118 )
    {
        p = p+1;
    }
    else if ( x == 70 || x == 102 )
    {
        printf("Puoi rispondere solamente v o f, riprova\n");
        goto d3;
    }

    d4:
    printf("Il mercato azionario è sempre un indicatore preciso delle condizioni economiche generali.\n");                //4
    scanf("% c", &x);
    if ( x == 70 || x == 102 )
    {
        p = p+1;
    }
    else if ( !(x == 86 || x == 118) )
    {
        printf("Puoi rispondere solamente v o f, riprova\n");
        goto d4;
    }
}

int main ()
{
    printf("RISPONDI V O F ALLE DOMANDE");
    


    return(0);
}