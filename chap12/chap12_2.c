#include <stdio.h>

int main(void) {

    // 변수 선언
    int my_age;
    float my_height;
    char my_initial;

    // 변수 값 할당
    my_age = 25;
    my_height = 180.5;
    my_initial = 'H'; // 한글자는 ''를 쓴다.

    // 변수의 선언과 동시에 할당
    int money = 10000;

    // printf
    // %d, 10진수 정수, int,long
    // %c, 문자 하나, char
    // %f, 실수, float, double
    // %s, 문자열, char[]

    printf("제 나이는 %d살 입니다.\n", my_age);

    // %f: 소수점 6자리까지 표현 강제
    // %.1f => 소수점 1자리까지
    printf("제 키는 %.1fcm입니다.\n", my_height);
    
    printf("제 이니셜은 %c입니다.\n", my_initial);

    int score1 = 100;
    int score2 = 8;
    int score3 = 9999;

    // %3d: 3칸 차지, 오른쪽으로 붙음
    printf("점수1: %3d\n", score1);
    printf("점수2: %3d\n", score2);
    // 3칸보다 큰 것을 넣으면 정상적으로 출력
    printf("점수3: %3d\n", score3);

    return 0;
}