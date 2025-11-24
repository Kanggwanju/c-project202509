#include <stdio.h>
#include <string.h>

// 1. 구조체 정의
// 아이돌의 설계도
struct Idol {
    char name[20]; // 이름
    char group[30]; // 그룹명
    int birth_year; // 출생년도
};

// typedef 사용
typedef struct Idol IdolInfo;

// 구조체를 만들면서 typedef를 바로 선언해두기
typedef struct {
    char name[20]; // 이름
    char group[30]; // 그룹명
    int birth_year; // 출생년도
} IdolInfomation;

int main(void) {
    
    // 구조체: 서로 다른 종류의 데이터들을 묶어 나만의 새로운 자료형처럼 사용

    // 2. 구조체 변수 선언
    // 구조체 변수를 만들면
    // 이 순간 메모리에 yujin이라는 이름으로 name, group, birth_year가 생성된다.
    struct Idol yujin = {"안유진", "아이브", 2003}; // 선언과 동시에 초기화 가능, 순서대로 값 나열

    // 4.typedef로 별명 붙여줘서 사용
    // struct Idol 대신 IdolInfo라고만 써도 가능
    IdolInfo chaewon = {"김채원", "르세라핌", 2000};
    // 구조체 정의 + typedef 바로 선언
    IdolInfomation wonyoung = {"장원영", "아이브", 2004};

    // 3. 멤버 접근: 구조체 안의 각 변수를 멤버라고 부름
    // 구조체의 변수에 접근 . 을 사용
    // strcpy(yujin.name, "안유진");
    // strcpy(yujin.group, "아이브");
    // yujin.birth_year = 2003;

    // 참조
    printf("이름: %s\n", yujin.name);
    printf("그룹명: %s\n", yujin.group);
    printf("출생년도: %d\n", yujin.birth_year);
    printf("이름: %s\n", chaewon.name);
    printf("그룹명: %s\n", chaewon.group);
    printf("출생년도: %d\n", chaewon.birth_year);
    printf("이름: %s\n", wonyoung.name);
    printf("그룹명: %s\n", wonyoung.group);
    printf("출생년도: %d\n", wonyoung.birth_year);
    
    return 0;
}