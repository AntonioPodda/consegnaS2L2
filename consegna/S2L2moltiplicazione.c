#include <stdio.h>

int main()
{
    int primo;
    int secondo;
    int risultato;
   

    printf("\nInserisci il primo numero: ");
    scanf("%d", &primo);

    printf("\nInserisci il secondo numero: ");
    scanf("%d", &secondo);

    risultato = primo * secondo;
    
    printf("\nIl risultato della moltiplicazione tra %d e %d è %d.\n", primo, secondo, risultato);

    return 0;
}