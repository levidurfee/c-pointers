/* Learning about pointers! */
/* 
 * Reading Understanding and Using C Pointers
 * by: by Richard M Reese
 */
#include <stdio.h>

void nl(void);

int main() {
    int num;
    int *p_num;
    num = 5;
    p_num = &num;
    printf("Address: %d Value: %d\n", &num, num);
    printf("Address: %d Value: %d\n", &p_num, p_num);
    nl();
    printf("Address: %d Value: %d\n", &p_num, p_num);
    printf("Address: %x Value: %x\n", &p_num, p_num);
    printf("Address: %o Value: %o\n", &p_num, p_num);
    printf("Address: %p Value: %p\n", &p_num, p_num);
    nl();
    printf("Value: %p\n", *p_num);
    nl();
    // change the value of num by using the pointer
    // must use the indirection operator* to assign 
    // a new value
    *p_num = 200;
    printf("Used indirection operator to change the value\n");
    printf("New number: %d\n", num);
    nl();
    printf("Setting pointer to null\n");
    p_num = NULL;
    if(p_num) {
        printf("Pointer not null\n");
    } else {
        printf("Pointer is null\n");
    }
    nl();
    
    void *pv; // pointer to void
    p_num = &num;
    pv = p_num;
    p_num = (int *)pv;
    printf("Pointer to void stuff: %d\n", *p_num);
    
    return 0;
}

void nl(void) {
    printf("\n");
}