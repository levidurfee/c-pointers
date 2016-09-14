#include <stdio.h>
#include <stdlib.h>
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
    // Function Pointer
    printf("\nFunction Pointer\n");
    int n = 5;
    // return type (*function ptr var name)(params);
    // void (*foo)();
    // int (*bar)(int);
    int (*fptr)(int);
    fptr = square;
    printf("%d squared is %d\n", n, fptr(n));
    
    typedef int (*fptrOp)(int, int);
    
    int compute(fptrOp op, int num1, int num2) {
        // op is the function pointer, so depending on which function
        // pointer is passed will depend on the result of compute
        return op(num1, num2);
    }
    printf("%d\n", compute(add, 50, 60));
    printf("%d\n", compute(sub, 50, 60));
    if(lol_strings()) {
        printf("Completed 6\n");
    }    
    return 0;
}