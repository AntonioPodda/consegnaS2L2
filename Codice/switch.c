#include <stdio.h>

int main()
{
int scelta;    
printf("\nBuongiorno, qui il manicomio:\1 se sei schizofrenico\n2 se sei paranoico\n3 se hai bassa autostima");
    scanf("d", &scelta);
    switch (scelta)
    {
        case 1:
            printf("\n Vorremmo parlare con una delle tue personalità");
        case 2:
            printf("\nTi avvisiamo che questa chiamata è condivisa con i poteri forti");
        case 3:
            printf("\nI nostri operatori stanno parlando con persone più importanti di te");
            break;
        default:
            printf("Grazie per averci contattato");
    }
    return 0;

}