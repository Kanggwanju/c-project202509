#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20]; // 이름
    char group[30]; // 그룹명
    int birth_year; // 출생년도
} IdolInfo;

int main(void) {
    
    // 구조체 동적 할당: 구조체 수가 변경 가능
    // malloc을 구조체에 적용, 필요할 때 필요한 만큼의 구조체를 메모리에 만든다.
    IdolInfo* ptr_idol = (IdolInfo*) malloc(sizeof(IdolInfo));

    int n = 5; // 아이브 멤버 5명 저장 가정
    // IdolInfo 5개 만큼의 크기를 통째로 할당 받음
    IdolInfo* ive_members = (IdolInfo*)malloc(n * sizeof(IdolInfo));

    // 구조체 포인터로 작업
    // 역참조를 먼저, 포인터가 가리키는 곳에 가서 이름에 접근 (.이 우선순위 높아서 괄호 침)
    // (*ptr_idol).name
    // 점 사용은 번거로움, 화살표 문법 사용가능
    // ptr_idol->name;

    strcpy(ptr_idol->name, "사쿠라");
    strcpy(ptr_idol->group, "르세라핌");
    ptr_idol->birth_year = 1998;

    printf("이름: %s\n", ptr_idol->name);
    printf("그룹명: %s\n", ptr_idol->group);
    printf("출생년도: %d\n", ptr_idol->birth_year);

    free(ptr_idol);
    free(ive_members);

    return 0;
}