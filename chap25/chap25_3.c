#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    
    printf("%d번째 피보나치 수: %d\n", 7, fibonacci(7));

    // fibonacci(7)  (13)
    // ㄴ fib(6) + fib(5)  (8 + 5) - 뒤의 fib(5)도 재귀가 있음, 성능 악영향
    //    ㄴ fib(5) + fib(4)  (5 + 3)
    //       ㄴ fib(4) + fib(3)  (3 + 2)
    //          ㄴ fib(3) + fib(2)  (2 + 1)
    //             ㄴ fib(2) + fib(1)  (1 + 1)
    //                ㄴ fib(1) + fib(0) (1 + 0)

    return 0;
}