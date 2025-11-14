#include <stdio.h>

void func(int n) {
    if (n > 0) {
        func(n - 1);
        printf("%d ", n);
        func(n - 1);
    }
}

int main(void) {
    
    func(3);
    /*
    func(3)
    ㄴfunc(2)
      ㄴfunc(1)
        ㄴfunc(0)
        ㄴprintf("1 ")
        ㄴfunc(0)
      ㄴprintf("2 ")
      ㄴfunc(1)
        ㄴfunc(0)
        ㄴprintf("1 ")
        ㄴfunc(0)
    ㄴprintf("3 ")
    ㄴfunc(2)
      ㄴfunc(1)
        ㄴfunc(0)
        ㄴprintf("1 ")
        ㄴfunc(0)
      ㄴprintf("2 ")
      ㄴfunc(1)
        ㄴfunc(0)
        ㄴprintf("1 ")
        ㄴfunc(0)
    */

    return 0;
}