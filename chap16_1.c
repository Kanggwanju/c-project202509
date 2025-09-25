#include <stdio.h>

int main(void) {
    // 배열, 예시: 자료형 배열이름[크기];

    // 배열 선언
    // int le_sserafim_ages[5];
    // 배열 선언과 동시에 초기화
    // int le_sserafim_ages[5] = {24, 26, 23, 21, 18};

    // 자동으로 크기 5로 설정
    int le_sserafim_ages[] = {24, 26, 23, 21, 18};

    // 100칸 모두 0
    int game_scores[100] = {0};


    // 배열 값 할당
    // le_sserafim_ages[0] = 24;
    // le_sserafim_ages[1] = 26;
    // le_sserafim_ages[2] = 23;
    // le_sserafim_ages[3] = 21;
    // le_sserafim_ages[4] = 18;

    // 배열 참조
    printf("르세라핌 리더 채원이의 나이는? %d\n", le_sserafim_ages[0]);
    printf("르세라핌 막내 은채의 나이는? %d\n", le_sserafim_ages[4]);

    // 인덱스 참조를 잘못해도 C언어는 문법 오류로 알려주지 않음
    // 이상한 값 가져옴 or 프로그램 종료됨
    // printf("르세라핌 막내 은채의 나이는? %d\n", le_sserafim_ages[5]);
    return 0;
}