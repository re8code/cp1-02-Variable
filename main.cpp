#include <stdio.h>
#include <typeinfo>

int main () {
    auto a1 = 10, a2 = 20;                  // O)
    auto b1 = 0b00001111, b2 = 0B11110000;  // 1) 02진수 표식자
    printf("1) b1 = %d[%s], b2 = %d[%s]\n", b1,typeid(b1).name(), b2,typeid(b2).name());

    auto c1 = 0xff00l, c2 = 0X00FFL;        // 2) 16진수 표식자
    printf("2) c1 = %ld[%s], c2 = %ld[%s]\n", c1,typeid(c1).name(), c2,typeid(c2).name());

    auto d1 = 0123456;                      // 3) 08진수 표식자
    printf("3) d1 = %d[%s]\n", d1, typeid(d1).name());

    auto e1 = 0.123456f, e2 = 0.456789F;    // 4) float 표식자
    printf("4) e1 = %.20f[%s], e2 = %.15f[%s]\n", e1,typeid(e1).name(), e2,typeid(e2).name());

    auto f1 = 0.123456;                     // 5)
    printf("5) f1 = %.20f[%s]", f1, typeid(f1).name());
}