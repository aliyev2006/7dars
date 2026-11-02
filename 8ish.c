#include <stdio.h>

int main() {
    int umumiy_kun, yil, hafta, kun;

    printf("Umumiy kunlar sonini kiriting: ");
    scanf("%d", &umumiy_kun);

    yil = umumiy_kun / 365;
    hafta = (umumiy_kun % 365) / 7;
    kun = (umumiy_kun % 365) % 7;

    printf("%d yil, %d hafta, %d kun\n", yil, hafta, kun);

    return 0;
}