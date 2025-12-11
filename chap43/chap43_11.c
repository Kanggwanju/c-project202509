#include <stdio.h>

int main(void) {
    
    int number = 1234;
    int div = 10;
    int result = 0;

    // 빈칸 1. number와 0 사이의 비교연산자 ( > 또는 != )
    while (number > 0) {
        result = result * div;
        // 빈칸 2. number와 div 사이의 연산자 ( % )
        result = result + number % div;
        // 빈칸 3. number와 div 사이의 연산자 ( / )
        number = number / div;

    }

    // 출력결과가 4321이 되게끔 만드는 빈칸 채우기
    printf("%d", result);
    return 0;
}