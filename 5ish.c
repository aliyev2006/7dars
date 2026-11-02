#include <stdio.h>

int main() {
    float a, V, S;

    printf("Kubning tomon uzunligini kiriting (a): ");
    scanf("%f", &a);

    V = a * a * a;
    S = 6 * a * a;

    printf("Kub hajmi (V): %.2f\n", V);
    printf("To'la sirt yuzasi (S): %.2f\n", S);

    return 0;
}