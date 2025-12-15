#include <stdio.h>

// static 지역 변수는 함수가 종료되어도 값이 사라지지 않음
// main 함수의 x와 func 함수의 x를 별개의 존재로 생각해야 한다.
// 예: func()가 2번 호출되면 x가 4가 된다.
int func() {
    static int x = 0;
    x += 2;
    return x;
}

// 2024년 3회차, static
int main(void) {

    int x = 1;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        x++;
        sum += func();
    }
    
    // 정답: 20
    printf("%d", sum);
    
    return 0;
}