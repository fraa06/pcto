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
    // Il salario minimo è uno strumento efficace per ridurre la disoccupazione. f // 
    // Il debito pubblico rappresenta la somma di tutti i debiti accumulati da un governo nel corso del tempo. v // 
    // Il Pil è la somma di consumi, investimenti, spesa pubblica e esportazioni nette. v //
    // La politica monetaria è gestita dal governo attraverso la regolamentazione delle tasse. f //
    // Il deficit di bilancio si verifica quando il governo spende più di quanto guadagna. v //
    // L'effetto a lungo termine dell'innovazione tecnologica è sempre positivo sull'economia. v //
    // L'intervento governativo nell'economia è sempre negativo. f //
    // L'economia di mercato è un sistema economico in cui il governo controlla l'allocazione delle risorse. f //
    // Il "concetto di offerta e domanda" suggerisce che il prezzo di un bene è determinato dall'interazione tra l'offerta e la domanda. v //
    // L'offerta è la quantità di un bene o servizio che i produttori sono disposti a vendere a un dato prezzo, v //
    // Il Pil reale tiene conto delle variazioni dei prezzi nel tempo. f //
    // Il mercato in concorrenza perfetta è caratterizzato da molti venditori e pochi acquirenti. f //
    // L'inflazione si verifica quando il livello generale dei prezzi diminuisce nel tempo. f //
}

int main ()
{
    printf("RISPONDI V O F ALLE DOMANDE");
    


    return(0);
}