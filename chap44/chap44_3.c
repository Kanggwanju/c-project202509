#include <stdio.h>
#include <stdlib.h>

typedef struct Data {
    char c;
    int *numPtr;
} Data;

// 2023년 3회차, 빈칸 찾기, 구조체 변수, 구조체 포인터
int main(void) {
    
    int num = 10;
    // 구조체 변수 d1.c, d1.numPtr
    Data d1;
    // 구조체 포인터 d2->c, d2->numPtr
    Data *d2 = malloc(sizeof(Data));

    d1.numPtr = &num;
    
    // d2 /* 빈칸 */ numPtr = &num;
    // 정답: ->
    d2->numPtr = &num;

    printf("%d\n", *d1.numPtr);
    printf("%d\n", *d2->numPtr);

    free(d2);

    return 0;
}