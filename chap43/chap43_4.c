#include <stdio.h>

int main(void) {
    
    // 문자열 K O R E A \0
    char *p = "KOREA";

    // %s는 \0을 만날때까지 반복 출력
    printf("%s\n", p);        // KOREA
    printf("%s\n", p + 3);    // EA
    
    // %c는 한 글자만 출력
    printf("%c\n", *p);       // K
    printf("%c\n", *(p + 3)); // E
    printf("%c\n", *(p + 2)); // R

    return 0;
}