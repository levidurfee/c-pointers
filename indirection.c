#include <stdio.h>
int indirection(void) {
    char *names[] = {"Levi", "Tadd", "John", "Megan", "Tom"};
    
    char **developers[3];
    char **designers[4];
    
    developers[0] = &names[0];
    developers[1] = &names[1];
    developers[2] = &names[2];
    
    designers[0] = &names[3];
    designers[1] = &names[4];
    
    printf("Developer: %s\n", *developers[0]);
    printf("Designer: %s\n", *designers[0]);
    
    designers[0] = &names[0];
    printf("Designer: %s\n", *designers[0]);
    
    names[0] = "Chris";
    printf("Developer: %s\n", *developers[0]);
    printf("Designer: %s\n", *designers[0]);
    return 1;
}