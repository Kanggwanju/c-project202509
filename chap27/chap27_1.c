#include <stdio.h>
#include <stdlib.h> // malloc을 쓰기위한 헤드선언

int main(void) {
    
    // malloc (맬록, Memory Allocation)
    // 역할: 운영체제에게 특정 양의 공간 빌리기 요청
    // 결과: 성공 시, 빌려준 공간의 시작 주소를 알려줌
    
    // 메모리 두 공간: 스택, 힙
    // 스택: 지역 변수들이 사는 곳, 함수 끝나면 자동 정리
    // 힙: malloc으로 빌리는 곳, 넓고 자유로움, 반드시 프로그래머가 직접 반납 필요

    // 1. int 4개를 저장할 공간을 실시간으로 메모리 힙에 할당해줘
    int *arr = (int*)malloc(4 * sizeof(int));

    // 2. 할당이 잘 되었는지 확인 (실무 필수 습관)
    if (arr == NULL) {
        printf("메모리가 할당되지 않았습니다.");
        return 1;
    }

    printf("메모리 할당 성공! 주소: %p\n", arr);

    // 3. 동적 할당 공간을 일반 배열처럼 사용
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    // 4. 출력으로 데이터 확인
    for (int i = 0; i < 4; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 5. 다 썻으니 메모리 반납
    free(arr);

    return 0;
}