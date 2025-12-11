#include <stdio.h>

int main(void) {
    
    // A r t \0
    char a[] = "Art";
    char* p = NULL;
    p = a;

    printf("%s\n", a);  // Art
    printf("%c\n", *p); // A
    printf("%c\n", *a); // A
    printf("%s\n", p);  // Art

    // Art
    for (int i = 0; a[i] != '\0'; i++) {
        printf("%c", a[i]);
    }

    return 0;
}