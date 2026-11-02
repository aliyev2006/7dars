#include <stdio.h>

int main() {
    float daromad, xarajat, oylik_tejash, yillik_jamgarma;

    printf("Oylik daromadingizni kiriting: ");
    scanf("%f", &daromad);

    printf("Oylik xarajatingizni kiriting: ");
    scanf("%f", &xarajat);

    oylik_tejash = daromad - xarajat;
    yillik_jamgarma = oylik_tejash * 12;

    printf("1 oyda tejalgan pul: %.2f\n", oylik_tejash);
    printf("12 oyda jamg'arilgan pul: %.2f\n", yillik_jamgarma);

    return 0;
}