#include <stdio.h>

// 기본적으로 main 함수보다 위에 함수를 정의해야 사용 가능
void failedLevelUp(int myLevel) {
    printf("> 특수 훈련소 입장! 현재 레벨 : %d\n", myLevel);
    myLevel = 99;
    printf("> 특수 훈련소 입장! 현재 레벨 : %d\n", myLevel);
}

int main(void) {
    
    int myLevel = 10;
    printf("훈련소 가기 전 내 레벨: %d\n", myLevel);

    // call by value, 함수에 인자를 줄 때 원본을 주는게 아니라 사본을 줬기 때문
    // 함수에서 원본을 변경하는 방법은 포인터 강의에서 진행
    failedLevelUp(myLevel);

    printf("훈련소 다녀온 후 내 레벨: %d\n", myLevel);

    return 0;
}