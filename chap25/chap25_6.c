#include <stdio.h>

void func(int k) {
    if (k > 0) {
        func(k - 1);
        printf("%d", k);
    }
}

int main(void) {

    func(3);
    /*
    ㄴfunc(2)
      ㄴfunc(1)
        ㄴfunc(0)
          ㄴfunc(-1)
        ㄴprintf(1)
      ㄴprintf(2)
    ㄴprintf(3)
    */

    return 0;
}