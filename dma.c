#include <stdio.h>
#include <stdlib.h>

/*
* It's easy to do something wrong when allocating memory.
* You can easily try to assign data outside of the allocated
* amount. The allocated memory's starting address can also 
* become lost. Your data can become currupt. Be careful.
*/

int dma(void) {
    int *pi = (int*) malloc(sizeof(int));
    *pi = 50;
    // might as well check to make sure you have a valid pointer
    if(pi != NULL) {
        printf("*pi: %d\n", *pi);
        printf("pi memory address:\t\t\t%p\n", &pi);
        
        // use calloc when memory needs zerod out
        pi = calloc(50, sizeof(int));
        free(pi);
        printf("pi still contains the memory address:\t%p\n", &pi);
        printf("pi is empty: %d\n", *pi);        
    }
    return 1;
}