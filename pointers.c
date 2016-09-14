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
    
    // Pointer Strings
    char *header = (char*)malloc(5);
    *(header + 0) = 'L';
    *(header + 1) = 'e';
    *(header + 2) = 'v';
    *(header + 3) = 'i';
    *(header + 4) = '\0';
    char *head = "Leeevi";
    printf("%s and %s\n", header, head);
    *(header + 0) = 'v';
    *(header + 1) = 'i';
    *(header + 2) = 'L';
    *(header + 3) = 'e';
    printf("%s and %s\n", header, head);
    return 0;
}