#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

// 가짜 꽉 참 현상 방지를 위해 원형큐로 구현
typedef struct {
    int data[MAX_QUEUE_SIZE];
    int front, rear;
} CircularQueue;

// 큐 초기화 함수
void init_queue(CircularQueue* q) {
    // q->front = q->rear = 0;
    q->front = 0;
    q->rear = 0;
}

// 큐가 비어있는지 확인
int is_empty(CircularQueue* q) {
    return q->front == q->rear;
}

// 큐가 꽉찼는지 확인
int is_full(CircularQueue* q) {
    return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

// 큐에 데이터를 넣는 기능
// 의도적으로 첫칸을 비워두고 rear를 시작
// is_full 확인 -> rear를 모듈러 연산으로 이동 -> 데이터 삽입
void enqueue(CircularQueue* q, int item) {
    if (is_full(q)) {
        printf("큐가 꽉찼습니다!\n");
        return;
    }
    // rear를 한 칸 이동
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    // 이동한 자리로 데이터를 삽입
    q->data[q->rear] = item;
}

// 큐에서 데이터를 뽑아내는 기능
// 첫칸을 비워두고 rear를 시작했으므로 1로 시작
// is_empty 확인 -> front를 모듈러 연산으로 이동 -> 이동한 위치의 데이터 반환
int dequeue(CircularQueue* q) {
    if (is_empty(q)) {
        printf("큐가 비었습니다!");
        exit(1);
    }
    // front를 한 칸 이동
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}

// 원형 큐의 모든 요소를 출력하는 함수
void print_queue(CircularQueue* q) {
    if (is_empty(q)) {
        printf("Queue [ ]\n");
        return;
    }
    printf("Queue: [ ");
    int i = q->front;
    // front의 다음 위치부터 시작해서 rear까지 순회
    while (i != q->rear) {
        i = (i + 1) % MAX_QUEUE_SIZE;
        printf("%d ", q->data[i]);
    }
    printf("]\n");
}

int main(void) {
    
    // 배열로 큐 구현
    CircularQueue q;
    init_queue(&q);

    enqueue(&q, 11);
    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);

    print_queue(&q);

    printf("dequeue: %d\n", dequeue(&q));
    printf("dequeue: %d\n", dequeue(&q));

    enqueue(&q, 48);

    print_queue(&q);

    return 0;
}