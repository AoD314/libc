
#include <stdio.h>

#include "liba.h"
#include "libaa.h"

int boo(int a, int b) {
    printf("liba::boo\n");
    return foo(a) + b;
}
