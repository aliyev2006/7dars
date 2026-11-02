#include <stdio.h>

int main(void){
    int tugilgan_yil;
    int yosh;

    printf("Tugilgan yilingizni kiriting: ");
    scanf("%d", &tugilgan_yil);

    yosh = 2026 - tugilgan_yil;
    printf("Siz 2026-yilda %d yoshda bo'lasiz.\n", yosh);

    return 0;
}