#include <stdio.h>

int main() {
    float km, metr, sm;

    printf("Masofani kilometrda kiriting: ");
    scanf("%f", &km);

    metr = km * 1000;
    sm = km * 100000;

    printf("%.2f km = %.2f metr\n", km, metr);
    printf("%.2f km = %.2f santimetr\n", km, sm);

    return 0;
}