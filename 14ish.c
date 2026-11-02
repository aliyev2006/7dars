#include <stdio.h>

int main() {
    int h1, m1, h2, m2, farq;

    printf("Boshlanish vaqti (soat va daqiqa): ");
    scanf("%d %d", &h1, &m1);

    printf("Tugash vaqti (soat va daqiqa): ");
    scanf("%d %d", &h2, &m2);

    farq = (h2 * 60 + m2) - (h1 * 60 + m1);

    printf("Vaqt farqi: %d daqiqa\n", farq);

    return 0;
}