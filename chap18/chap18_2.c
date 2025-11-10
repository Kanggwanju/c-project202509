#include <stdio.h>

int main(void) {
    
    char userName[20];

    printf("당신의 이름은 ?? ");

    // scanf 문자열 입력 주의점
    // 1. 문자열은 &를 붙이지 않음
    // 2. scanf에서는 공백을 만나면 입력 중단, 강관 주 -> 강관
    // 3. 정의된 char 배열 공간보다 큰 내용을 받으면 버퍼 오버플로우로 치명적 오류 발생 가능
    scanf("%s", userName);

    printf("당신은 %s님이시군요?? \n", userName);

    return 0;
}