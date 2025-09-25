#include <stdio.h>

int main(void) {
    // 2차원 배열: 자료형 이름[행][열];
    // 메모리 구조 상에서는 3x4 배열을 가로로 쭉 이어붙임

    // 3행 4열짜리 미니맵
    int mini_map[3][4];

    // 값을 할당
    mini_map[1][2] = 10;

    // 값을 참조
    printf("지도 [1][2]의 정보: %d\n", mini_map[1][2]);

    return 0;
}