#include <stdio.h>

int main () {
    int a;                       // 1) O
    int b, c;                    // 2) O
    b = c = 0;                   // 3) O
    // long g = 0L, char h = 0;  // 4) X
    // int i, j = 0, 0;          // 5) X
    {
        int k = 0;               // 6) variable scope
        printf ("%d", a);        // 7) O
    }
    // printf ("%d", k);         // 8) X
}