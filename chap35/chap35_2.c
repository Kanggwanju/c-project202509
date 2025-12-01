#include <stdio.h>
#include <stdlib.h>

// 연결리스트의 노드 정의
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 큐 구조체
typedef struct {
    Node* front; // 큐의 시작점 (head)
    Node* rear;  // 큐의 끝점   (tail)
} LinkedQueue;

// 큐 초기화 함수
void init_queue(LinkedQueue* q) {
    // q->front = q->rear = NULL;
    q->front = NULL;
    q->rear = NULL;
}

// 큐가 비었는지 확인
int is_empty(LinkedQueue* q) {
    return q->front == NULL && q->rear == NULL;
}

// 연결리스트로 구현한 enqueue
void enqueue(LinkedQueue* q, int item) {
    // 1. 새 노드 생성
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = item;
    newNode->next = NULL;

    // 2. 큐가 비었는지 확인
    if (is_empty(q)) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// 연결리스트 큐로 dequeue 구현
int dequeue(LinkedQueue* q) {
    if (is_empty(q)) {
        printf("큐가 비어있습니다.\n");
        exit(1);
    }
    // 1. 임시포인터에 제거할 노드를 백업
    Node* temp = q->front;
    int removed = temp->data;

    // 2. front를 다음 노드로 이동
    q->front = q->front->next;

    // 3. 만약 dequeue후 큐가 비어있게 된다면
    if (q->front == NULL) {
        q->rear = NULL;
    }
    // 4. 제거된 노드를 메모리해제
    free(temp);
    return removed;
}

// 큐의 모든 요소를 출력하는 함수
void print_queue(LinkedQueue* q) {
    if (is_empty(q)) {
        printf("Queue [ ]\n");
        return;
    }

    printf("Queue: [ ");
    Node* temp = q->front;
    // front가 가리키는 위치부터 시작해서 연결리스트의 끝까지 순회
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("]\n");
}

int main(void) {
    
    // 연결리스트로 큐 구현
    // 크기 동적, 구현 직관적
    // 추가 메모리 필요
    // enqueue/dequeue 모두 O(1)
    // 크기를 예측 못 할 때

    LinkedQueue q;
    init_queue(&q);

    enqueue(&q, 11);
    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);
    print_queue(&q);

    printf("dequeue: %d\n", dequeue(&q));
    printf("dequeue: %d\n", dequeue(&q));
    printf("dequeue: %d\n", dequeue(&q));
    printf("dequeue: %d\n", dequeue(&q));
    printf("dequeue: %d\n", dequeue(&q));


    return 0;
}