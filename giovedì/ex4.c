#include <stdio.h>

int main()
{
    int array[5]={5, 6, 8, 2, 42};                          //i numeri nelle graffe corrispondono da 0 a 5-1//
    printf("%d\n", array[3]);                               //array[3]=8//
    array [1]=18;                                           //modo per cambiare i valori nell'array, la grandezza dell'array non si può cambiare durante//

    char stringa[5]={'c', 'i', 'a', 'o', '\0'};             //bisogna segnare con un carattere in più per il \0 che è fondamentale sennò il computer leggerà oltre//
    char stringa[]={"ciao"};                                //si può anche scrivere così e lasciare il computer capire, solo per le stringhe non per l'array//

    char parola[100];                                       //per prevenire il numero di cartteri inseriti dall'utente//
    scanf("%s", parola);                                    //niente & perchè l'array di per se è un puntatore al primo valore/carattere//%s per indicare che è una stringa//



    return(0);
}