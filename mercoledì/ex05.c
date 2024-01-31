#include <stdio.h>

void funzione2()
{
    printf("miao\n");
}

void funzione1()
{
    funzione2();
    int numero;
    int cubo;
    printf("inserisci un numero: ");
    scanf("%d", &numero);
    cubo = numero * numero * numero;
    printf("il cubo di %d è %d\n", numero, cubo);
}

int main()
{
    funzione1();
    funzione1();
    funzione1();
    funzione1();
    return(0);
}