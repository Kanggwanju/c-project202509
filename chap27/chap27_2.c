#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int student_count;

    printf("성적을 입력할 학생 수 : ");
    scanf("%d", &student_count);

    // 학생 수만큼 배열의 공간을 할당
    int *scores = (int*) malloc(student_count * sizeof(int));

    if (scores == NULL) {
        printf("메모리가 할당되지 않았습니다.");
        return 1;
    }

    // 입력받기
    for (int i = 0; i < student_count; i++) {
        printf("%d번 학생의 성적: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("\n==== 입력된 성적 ====\n");
    for (int i = 0; i < student_count; i++) {
        printf("%d번 학생의 점수: %d점\n", i + 1, scores[i]);
    }

    printf("free전 scores의 주소: %p\n", scores);

    // free 하는 것을 깜빡했을 때
    // 그 메모리는 프로그램이 끝날 때까지 아무도 못 쓰는 '유령 공간'이 됨
    // 누수가 쌓이면, 프로그램 전체가 메모리 부족으로 멈춤
    free(scores);
    // scores = NULL; free후 명시적으로 NULL 값 할당하는게 좋음

    printf("free후 scores의 주소: %p\n", scores);
    printf("free후 scores[0]의 값: %d\n", scores[0]); // free후의 값이나 주소는 예측 불가능

    return 0;
}