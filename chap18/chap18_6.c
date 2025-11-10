#include <stdio.h>

int main(void) {
    
    char src[] = "pass";
    char dest[10];
    
    int i;

    // src 복사
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    // 널문자를 추가해줘야 함
    // 추가하지 않으면 dest를 프린트 했을 때 쓰레기 값이 추가되어 출력됨
    dest[i] = '\0';

    printf("%s", dest);

    return 0;
}