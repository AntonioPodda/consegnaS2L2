#include <stdio.h>

int main()
{
    int primo;
    int secondo;
    int risultato;

    printf("\nInserisci primo numero:");
    scanf("%d", &primo);
    if (secondo != 0)
    {
        printf("\nInserisci il secondo numero: ");
        scanf("%d", &secondo);
    }
    else
    {
        printf("\n Non dividere per zero e non mi va di mostrarti il perchè");
    }

    printf("\n%d / %d =%d\n", primo, secondo, primo / secondo);
    printf("\n / %d diviso %d ha resto %d\n", primo, secondo, primo % secondo);
    

    return 0;
}