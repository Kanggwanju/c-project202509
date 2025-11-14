#include <stdio.h>

void hanoi(int n, char from, char by, char to) {
    // 종료 조건: 원반이 1개면 그냥 옮긴다.
    if (n == 1) {
        printf("원반 1을 %c에서 %c로 옮긴다.\n", from ,to);
    } else {
        // 1. n-1개를 from에서 by로 (to를 보조로)
        hanoi(n - 1, from, to, by);

        // 2. n번 원반을 from에서 to로
        printf("원반 %d을(를) %c에서 %c로 옮긴다.\n", n, from, to);

        // 3. n-1개를 by에서 to로 (from을 보조로)
        hanoi(n - 1, by, from, to);
    }
}

int main(void) {
    
    // 하노이의 탑 문제
    // 1. 한 번에 하나의 원반만 옮김
    // 2. 작은 원반 위에 큰 원반을 올릴 수 없음
    // 목표: A기둥의 모든 원반을 C 기둥으로 옮기기.
    
    //       from  by  to
    hanoi(3, 'A', 'B', 'C');
    /*
    ㄴhanoi(2, A, C, B);
      ㄴhanoi(1, A, B, C);
        ㄴprintf("원반 1을 A에서 C로 옮긴다.");
      ㄴprintf("원반 2을(를) A에서 B로 옮긴다.");
      ㄴhanoi(1, C, A, B);
        ㄴprintf("원반 1을 C에서 B로 옮긴다.");

    ㄴprintf("원반 3을(를) A에서 C로 옮긴다.");

    ㄴhanoi(2, B, A, C);
      ㄴhanoi(1, B, C, A);
        ㄴprintf("원반 1을 B에서 A로 옮긴다.");
      ㄴprintf("원반 2을(를) B에서 C로 옮긴다.");
      ㄴhanoi(1, A, B, C);
        ㄴprintf("원반 1을 A에서 C로 옮긴다.");
    */

    return 0;
}