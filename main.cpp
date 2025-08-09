#include <stdio.h>
#include <typeinfo>

int main () {
    char  a = 0x7f;
    short b = 0x7fff;
    printf("1) a = %d, (char)(a+1) = %d(%s)\n", a, (char)(a+1), typeid((char)(a+1)).name());
    printf("2) b = %d, (short)(b+1) = %d(%s)\n", b, (short)(b+1), typeid((short)(b+1)).name());

    long c = 2000000000  + 2000000000; //  int + int = int
    long d = 2000000000L + 2000000000; // long + int = long
    printf("3) c = %ld, d = %ld\n", c, d);
    printf("4) 2147483647(%s), 2147483647(%s)", typeid(2147483647).name(), typeid(2147483648).name());
}