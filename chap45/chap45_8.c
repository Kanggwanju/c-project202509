#include <stdio.h>

typedef struct student {
    char* name;
    int score[3];
} Student;

// 비트 연산 &: 두 개의 비트가 모두 1일때 1
int dec(int enc) {
    return enc & 0xA5;
}

int sum(Student* p) {
    return dec(p->score[0]) + dec(p->score[1]) + dec(p->score[2]);
}

// 2025년 1회차 구조체, 16진수, 비트연산
int main(void) {
    /*
        2진수로 변환
        A5: 1010 0101
        A0: 1010 0000
        DB: 1101 1011
        ED: 1110 1101
        81: 1000 0001
    */
    Student s[2] = { {"Kim", {0xA0, 0xA5, 0xDB}}, {"Lee", {0xA0, 0xED, 0x81}} };
    int result = 0;

    for (int i = 0; i < 2; i++) {
        result += sum(&s[i]);
    }

    // 정답: 908
    printf("%d", result);

    return 0;
}