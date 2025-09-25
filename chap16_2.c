#include <stdio.h>

int main(void) {
    
    int ages[] = {24, 26, 23, 21, 18, 100, 100};

    // sizeof: 몇 바이트인지 알려줌, int가 7개인 배열은 28바이트
    // 배열 크기: sizeof(배열) / sizeof(자료형)
    int len = sizeof(ages) / sizeof(int);
    printf("len: %d\n", len);

    for (int i = 0; i < len; i++) {
        printf("%d번째 나이는 %d살\n", (i + 1), ages[i]);
    }
    

    return 0;
}