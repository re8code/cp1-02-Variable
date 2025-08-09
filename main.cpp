#include <stdio.h>

int main () {
    double d = 0.12345678901234567890;
    printf("1) %.20f\n", d);

    float  f = 0.12345678901234567890F;
    printf("2) %.20f\n", f);

    f = (float)d;
    printf("3) %.20f\n", f);

    printf("4) %.20f\n", 1.0  / 3);
    printf("5) %.20f\n", 1.0f / 3);
}