#include <stdio.h>
#include <math.h>

int main() {
    double a, b, kvadrat, kub, yigindi;

    printf("Birinchi sonni kiriting: ");
    scanf("%lf", &a);

    printf("Ikkinchi sonni kiriting: ");
    scanf("%lf", &b);

    kvadrat = pow(a, 2);
    kub = pow(b, 3);
    yigindi = kvadrat + kub;

    printf("Natija: %.2lf\n", yigindi);

    return 0;
}