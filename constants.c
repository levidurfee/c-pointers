#include <stdio.h>

int lol_constants(void) {
    int num = 10;
    const int limit = 100;
    int *pi;        // pointer to int
    const int *pci; // pointer to const int
    
    pi = &num;
    pci = &limit;
    
    /* 
    * Dereferencing a constant pointer is okay if we are just reading the value
    */
    printf("%d\n", *pci);
    printf("%d\n", *pi);
    return 1;
}