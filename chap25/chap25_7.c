#include <stdio.h>

int func(int n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + func(n / 10);
}

int main(void) {
    
    printf("%d", func(253));
    /*
    func(253) (10)
    ㄴ(253 % 10) + func(25) (3 + 7)
                   ㄴ(25 % 10) + func(2) (5 + 2)
                                 ㄴreturn 2
    */

    return 0;
}