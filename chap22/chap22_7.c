#include <stdio.h>

int main(void) {
    
    char str[] = "ACE";

    printf("*(str + 1)의 결과: %c\n", *(str + 1)); // C
    printf("*str + 1의 결과: %c\n", *str + 1); // B

    return 0;
}