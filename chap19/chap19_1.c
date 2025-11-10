#include <stdio.h>
#include <string.h> // 문자열 전용 함수를 사용 가능!

int main(void) {
    
    // strlen() 문자열 길이 계산, 널문자 포함 x
    // sizeof() 바이트 수를 계산, 널문자 포함 o
    char a[] = "apple";
    char b[] = "Hong Gildong";
    char c[20] = "hello";

    printf("단어 '%s'의 바이트 수는 %d입니다.\n", a, sizeof(a));

    printf("단어 '%s'의 글자 수는 %d입니다.\n", a, strlen(a));
    printf("단어 '%s'의 글자 수는 %d입니다.\n", b, strlen(b));
    printf("단어 '%s'의 글자 수는 %d입니다.\n", c, strlen(c));
    printf("단어 '%s'의 바이트 수는 %d입니다.\n", c, sizeof(c));

    return 0;
}