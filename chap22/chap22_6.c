#include <stdio.h>

int main(void) {
    
    // 새로운 문자열 선언 방식
    
    // 1. 새로운 배열 생성, 내용 수정 가능
    char str1[] = "Hello";

    str1[0] = 'J';

    printf("str1: %s\n", str1);

    // 2. 메모리 어딘가의 수정 불가능한 문자 배열 덩어리 주소를 가리킴
    char *str2 = "World";

    // str2[0] = 'Z'; // char 포인터로 문자열을 선언하면 수정이 불가능 (읽기 전용)
    printf("str2: %s\n", str2);

    return 0;
}