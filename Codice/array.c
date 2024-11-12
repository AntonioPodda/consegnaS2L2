#include <stdio.h>

int main(){
    int numeri[5];
    numeri[0] = 1;
    numeri[1] = 4;
    numeri[2] = 89;
    printf("0x%x = %d\n", &numeri [2], numeri[2]);
    int altri_num[] = {1,4,3,57,6,3};
    printf("0x%x = %d\n", &altri_num[4], altri_num[4]);

    float dec[] = {1.5, 2.75, 3.14};
    printf("0x%x = %2.f\n", &dec[0], dec[0]);
    return 0;
}