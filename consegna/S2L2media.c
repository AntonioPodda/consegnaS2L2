#include <stdio.h>

int main() {
    int primo, secondo;
    float media;

    printf("Inserisci il primo numero: ");
    scanf("%d", &primo);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &secondo);

    media = (primo + secondo) / 2.0;

    printf("La media aritmetica tra %d e %d è %.2f.\n", primo,secondo, media);

    return 0;
}