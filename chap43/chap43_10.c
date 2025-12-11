#include <stdio.h>

// 소수 판별
int isPrime(int number) {
    int i;
    for (i = 2; i < number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    
    int number = 13195, max_div = 0, i;

    for (i = 2; i < number; i++) {
        // i가 소수이고, i가 number(13195)의 약수일 경우
        if (isPrime(i) == i && number % i == 0) {
            max_div = i;
        }
    }

    // 13195의 소인수들: 5, 7, 13, 29
    // 정답: 29
    printf("%d", max_div);
    return 0;
}