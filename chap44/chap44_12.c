#include <stdio.h>

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

// 2024년 2회차, Call by Value, Switch 폴쓰루
int main(void) {
    
    int a = 11;
    int b = 19;

    // Call by Value로 a와 b의 값이 바뀌지 않음
    swap(a, b);

    switch(a) {
        case 1: b += 1;
        case 11: b += 2;
        default: b += 3;
        break;
    }

    // 정답: a - b = 11 - 24 = -13
    printf("%d", a - b);

    return 0;
}