#include <stdio.h>

#include "liba.h"
#include "libb.h"

int main(int argc, char ** argv) {
    int a = 2;
    int b = 3;
    int c = boo(a, b); // libaa::foo(2) + 3 => (2 + 1) + 3 => 6
    int d = foo(2);    // libb::(2-1) => 1

    printf("a: %d  \n", a);
    printf("b: %d  \n", b);
    printf("c: %d  \n", c);
    printf("d: %d  \n", d);
    return 0;
}
