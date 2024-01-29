#include <stdio.h>

int main()
{
    int lucac;
    int lucar;
    int fra;
    int marco;
    printf("inserisci 4 numeri\n");
    scanf("%d", &lucac);
    scanf("%d",&lucar);
    scanf("%d", &fra);
    scanf("%d",&marco);
    printf("il risultato è: %d\n", lucac + lucar + fra + marco);
    return(0);
}