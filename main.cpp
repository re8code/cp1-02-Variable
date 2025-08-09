#include <stdio.h>
#include <typeinfo>

int main () {
    char a = 0x7f;
    printf("1) %d(%s), %d(%s)\n", a,typeid(a).name(), a+1,typeid(a+1).name());

    short b = 0x7fff;
    printf("2) %d(%s), %d(%s)\n", b,typeid(b).name(), b+1,typeid(b+1).name());

    int c = 0x7fffffff;
    printf("3) %d(%s), %d(%s)\n", c,typeid(c).name(), c+1,typeid(c+1).name());

    long d = 0x7fffffffffffffff; // 자동 형변환
    printf("4) %ld(%s), %ld(%s)", d,typeid(d).name(), d+1,typeid(d+1).name());
}