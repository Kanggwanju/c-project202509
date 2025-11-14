#include <stdio.h>

void countdown(int n) {

    // 1. 종료 조건
    if (n <= 0) {
        printf("발사!\n");
        return;
    }

    printf("%d...\n", n);
    // 2. 재귀 호출
    countdown(n - 1);
}

int main(void) {
    
    // 재귀: 함수 정의문 안에서, 자기 자신을 다시 호출하는 함수
    // 재귀의 2대 핵심 요소
    // 1. 종료 조건: 재귀의 무한 반복을 멈추게 하는 탈출구
    // 2. 재귀 호출: 문제를 더 작은 단위로 만들며 자기 자신을 호출하는 부분

    // 컴퓨터가 재귀를 기억하는 방식
    // - 콜 스택(Call Stack) 자료구조: 가장 나중에 들어온 것이 가정 먼저 나감(LIFO)

    // 재귀 함수 문제 푸는 방법: 아래처럼 그리면서 순서대로 그리면서 하기
    // countdown(3);
    //   ㄴ printf(3...)
    //   ㄴ countdown(2)
    //      ㄴ printf(2...)
    //      ㄴ countdown(1)
    //         ㄴ printf(1...)
    //         ㄴ countdown(0)
    //            ㄴ printf("발사!")
    //            ㄴ return;
    countdown(3);

    return 0;
}