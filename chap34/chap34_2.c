#include <stdio.h>
#include <stdlib.h>

// 연결리스트의 노드 정의
typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} LinkedStack;

void init_stack(LinkedStack* s) {
    s->top = NULL;
}

int is_empty(LinkedStack* s) {
    return s->top == NULL;
}
// is_full: 안 만들어도 됨, 어차피 동적으로 생성

void push(LinkedStack* s, int item) {
    // 1. 새 노드 생성
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = item;

    // 2. 새 노드가 기존의 top을 가리키도록 연결
    newNode->next = s->top;
    // 3. top포인터가 새 노드를 가리키도록 함
    s->top = newNode;
}

int pop(LinkedStack* s) {
    if (is_empty(s)) {
        printf("스택이 텅 비었습니다.\n");
        exit(1);
    }

    // 1. 임시포인터에 현재 top 노드를 백업한 뒤 값추출
    Node* temp = s->top;
    int item = temp->data;

    // 2. top을 이동
    s->top = s->top->next;

    // 3. 이전 top의 메모리 해제
    free(temp);
    return item;
}

int main(void) {
    
    // 스택 연결 리스트 구현
    // head 포인터가 스택의 top 역할을 수행
    // 장점: 크기 동적
    // 단점: 추가 메모리 필요
    // 크기를 예측 못 할 때 사용

    LinkedStack s;
    init_stack(&s);

    push(&s, 100);
    push(&s, 200);
    push(&s, 300);
    push(&s, 400);
    push(&s, 500);

    printf("pop: %d\n", pop(&s));
    printf("pop: %d\n", pop(&s));
    printf("pop: %d\n", pop(&s));
    printf("pop: %d\n", pop(&s));
    printf("pop: %d\n", pop(&s));
    printf("pop: %d\n", pop(&s));

    return 0;
}