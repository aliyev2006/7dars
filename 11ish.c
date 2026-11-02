#include <stdio.h>

int main() {
    int son, minglik, yuzlik, onlik, birlik, yigindi;

    printf("To'rt xonali son kiriting: ");
    scanf("%d", &son);

    minglik = son / 1000;
    yuzlik = (son / 100) % 10;
    onlik = (son / 10) % 10;
    birlik = son % 10;

    yigindi = minglik + yuzlik + onlik + birlik;

    printf("Minglik: %d\n", minglik);
    printf("Yuzlik: %d\n", yuzlik);
    printf("O'nlik: %d\n", onlik);
    printf("Birlik: %d\n", birlik);
    printf("Raqamlar yig'indisi: %d\n", yigindi);

    return 0;
}