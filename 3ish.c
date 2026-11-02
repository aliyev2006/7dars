#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Selsiy bo'yicha haroratni kiriting: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32;

    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    return 0;
}