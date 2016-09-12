#include <stdio.h>
#include "pointers.h"

int main() {
    if(indirection()) {
        printf("Completed 1\n");
    }
    if(movies()) {
        printf("Completed 2\n");
    }
    if(lol_constants()) {
        printf("Completed 3\n");
    }
    if(dma()) {
        printf("Completed 4\n");
    }
    printf("\nFunction Pointer\n");
    int n = 5;
    int (*fptr)(int);
    fptr = square;
    printf("%d squared is %d\n", n, fptr(n));
    return 0;
}