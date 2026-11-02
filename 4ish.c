#include <stdio.h>

int main() {
    float narx, foiz, chegirma_summasi, yakuniy_narx;

    printf("Mahsulot narxini kiriting: ");
    scanf("%f", &narx);

    printf("Chegirma foizini kiriting: ");
    scanf("%f", &foiz);

    chegirma_summasi = narx * (foiz / 100);
    yakuniy_narx = narx - chegirma_summasi;

    printf("Chegirma summasi: %.2f\n", chegirma_summasi);
    printf("Chegirmadan keyingi narx: %.2f\n", yakuniy_narx);

    return 0;
}