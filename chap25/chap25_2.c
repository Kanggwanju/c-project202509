#include <stdio.h>

int factorial(int n) {

    if (n == 1) return 1;

    return n * factorial(n - 1);
}

int main(void) {
    
    int result = factorial(5);
    //           ㄴ return 5 * factorial(4);
    //                         ㄴ return 4 * factorial(3);
    //                                        ...
    //                                              ㄴ return 1;
    printf("5! = %d\n", result);

    return 0;
}