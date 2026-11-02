#include <stdio.h>

int main() {
    float km, litr, sarf;

    printf("Bosib o'tilgan masofani kiriting (km): ");
    scanf("%f", &km);

    printf("Sarflangan yoqilg'ini kiriting (litr): ");
    scanf("%f", &litr);

    sarf = (litr / km) * 100;

    printf("100 km uchun yoqilg'i sarfi: %.2f litr\n", sarf);

    return 0;
}