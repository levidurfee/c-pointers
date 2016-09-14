#include <stdlib.h>
#include <stdio.h>
int lol_strings(void) {
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
    free(header);
    return 1;
}
