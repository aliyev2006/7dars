
#include <stdio.h>

int main() {
    int son, oinlik, birlik, kopaytma;

    printf("Ikki xonali son kiriting: ");
    scanf("%d", &son);

    oinlik = son / 10;
    birlik = son % 10;
    kopaytma = oinlik * birlik;

    printf("%d * %d = %d\n", oinlik, birlik, kopaytma);

    return 0;
}