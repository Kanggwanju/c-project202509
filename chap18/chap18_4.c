#include <stdio.h>

int main(void) {
    
    char s[] = "banana";
    int i = 0;

    while(s[i] != '\0') {
        if (s[i] == 'a') {
            printf("%c", 'A');
        } else {
            printf("%c", s[i]);
        }
        i++;
    }

    return 0;
}