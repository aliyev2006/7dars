#include <stdio.h>

int main() {
    int son;

    printf("Son kiriting: ");
    scanf("%d", &son);

    son++;
    son++;
    son++;

    son--;
    son--;

    printf("Yakuniy natija: %d\n", son);

    return 0;
}