#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    
    // Call by Reference 구현 3단계 법칙
    // 법칙 1: 함수 정의 - 매개변수는 포인터로
    // 법칙 2: 함수 내부 - 역참조로 원본에 접근
    // 법칙 3: 함수 호출 - 함수에게 값이 아닌 변수의 주소를 전달

    int x = 10, y = 20;
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    
    return 0;
}