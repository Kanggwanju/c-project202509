#include <stdio.h>

typedef struct {
    char name[20]; // 이름
    char group[30]; // 그룹명
    int birth_year; // 출생년도
} IdolInfo;

// 아이돌 정보 출력함수 (call by value)
void printIdolInfoV1(IdolInfo idol) {
    printf("---- 아이돌 정보 (구조체 전체 전달) ----\n");
    // 구조체를 그대로 전달 받았으므로 점(.)으로 바로 접근 가능
    printf("이름: %s\n", idol.name);
    printf("그룹명: %s\n", idol.group);

    idol.birth_year = 3000;
    printf("출생년도: %d\n", idol.birth_year);
}

// 아이돌 정보 출력함수 (call by reference)
// 주소만 전달하는게 메모리 효율상 좋음 (8바이트)
void printIdolInfoV2(IdolInfo* idol) {
    printf("---- 아이돌 정보 (구조체 포인터 전달) ----\n");
    printf("이름: %s\n", idol->name);
    printf("그룹명: %s\n", idol->group);

    idol->birth_year = 3000;
    printf("출생년도: %d\n", idol->birth_year);
}

int main(void) {
    
    IdolInfo karina = {"카리나", "에스파", 2000};

    printIdolInfoV1(karina);
    // 함수에 사본 전달이므로 데이터 안 바뀜
    printf("V1 함수종료후 출생년도: %d\n", karina.birth_year);

    printIdolInfoV2(&karina); // 주소를 전달
    printf("V2 함수종료후 출생년도: %d\n", karina.birth_year);

    return 0;
}