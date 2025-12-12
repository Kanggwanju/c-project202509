#include <stdio.h>

// 2023년 3회차, 문자열 포인터, 아스키 값
int main(void) {
    
    char* p = "KOREA";

    printf("%s\n", p);        // KOREA
    printf("%s\n", p + 1);    // OREA
    printf("%c\n", *p);       // K
    printf("%c\n", *(p + 3)); // E
    printf("%c\n", *p + 4);   // K + 4 -> 75 + 4 -> 79 -> O

    // 참고: A: 65, a: 97, '0': 48

    return 0;
}