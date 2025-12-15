#include <stdio.h>
#define SIZE 3

typedef struct {
    int a[SIZE];
    int front;
    int rear;
} Queue;

void enq(Queue* q, int val) {
    q->a[q->rear] = val;
    q->rear = (q->rear + 1) % SIZE; // 모듈러 연산
}

int deq(Queue* q) {
    int val = q->a[q->front];
    q->front = (q->front + 1) % SIZE;
    return val;
}

// 2025년 2회차, 원형 큐
int main(void) {
    
    Queue q = {{0}, 0, 0};

    enq(&q, 1); enq(&q, 2); deq(&q); enq(&q, 3);

    int first = deq(&q);
    int second = deq(&q);

    // 정답: 2 그리고 3
    printf("%d 그리고 %d", first, second);

    return 0;
}