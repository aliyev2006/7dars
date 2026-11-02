#include <stdio.h>

int main() {
    int son, yuzlik, onlar, birlik, teskari;

    printf("Uch xonali son kiriting: ");
    scanf("%d", &son);

    yuzlik = son / 100;
    onlar = (son / 10) % 10;
    birlik = son % 10;

    teskari = birlik * 100 + onlar * 10 + yuzlik;

    printf("Teskari tartibda: %d\n", teskari);

    return 0;
}