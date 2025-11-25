#include <stdio.h>

// 배열을 반복해서 출력하는 함수
void print_scores(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    
    // 자료구조: 데이터의 특성에 맞춰, 효율적으로 저장하고 사용하기 위한 구조적인 방법
    // 핵심: 데이터에 '질서'와 '구조'를 부여

    // 추상 데이터 타입(Abstract Data Type, ADT): 설계도나 사용 설명서처럼 기능을 먼저 정의
    // 기능만 알면 운전 가능, 내부 동작 방식은 몰라도 됨

    // ADT 관점에서 바라본 배열
    // 동일한 자료형의 데이터만 저장 가능, 메모리 공간에 '빈틈없이 연속으로' 저장
    // 장점: 빠른 접근 속도 - 메모리가 연속적이므로 시작 주소에서 몇 칸 뛸지만 계산 -> 바로 접근 가능
    // 성능: 시간 복잡도 O(1)
    // 단점
    // 1. 배열 선언 시 크기가 고정되어 있음(정적 할당)
    // 2. 비효율적 중간 데이터 삽입/삭제 (모든 데이터 한 칸씩 밀거나 당겨야 함, 시간 복잡도 O(N))

    // 98 72 88 91 0 0 0 0 0 0
    int scores[10] = {98, 72, 88, 91};
    int count = 4; // 현재 저장된 실제 데이터 수

    printf("삽입 전: ");
    print_scores(scores, count);

    // 72와 88사이에 숫자 100을 중간에 삽입
    // 98 72 100 88 91
    // 둘 사이에 100을 넣으려면 뒤로 한 칸씩 밀려나야 함.
    int insert_data = 100;
    int insert_idx = 2;

    for (int i = count - 1; i >= insert_idx; i--) {
        scores[i + 1] = scores[i];
    }

    scores[insert_idx] = insert_data;

    count++;
    printf("삽입 후: ");
    print_scores(scores, count);

    return 0;
}