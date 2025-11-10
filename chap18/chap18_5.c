#include <stdio.h>

int main(void) {
    
    // 버퍼 오버플로우 예시 코드
    char a[5] = "hello";
    char b[5];

    printf("문자열 입력: ");
    scanf("%s", b); // world 입력

    printf("a: %s\n", a);
    printf("b: %s\n", b);
    
    // 결과:
    // a:
    // b: world

    // b에 word를 입력하면 a에는 hello 뒤에 쓰레기 값 들어감. 

    return 0;
}