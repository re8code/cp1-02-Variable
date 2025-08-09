#include <stdio.h>
#include <typeinfo>

int main () {
    printf("1) %s, %lu\n", typeid(1).name(),      sizeof(1));
    printf("2) %s, %lu\n", typeid(2L).name(),     sizeof(2L));     // 소문자 'l' 가능
    printf("3) %s, %lu\n", typeid(0.123).name(),  sizeof(0.123));
    printf("4) %s, %lu\n", typeid(0.123F).name(), sizeof(0.123F)); // 소문자 'f' 가능
    printf("5) %s, %lu\n", typeid('a').name(),    sizeof('a'));
    printf("6) %s, %lu\n", typeid("a").name(),    sizeof("a"));
    printf("7) %s, %lu\n", typeid(true).name(),   sizeof(true));
}