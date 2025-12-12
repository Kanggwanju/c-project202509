#include <stdio.h>
#define MAX_SIZE 10

int isWhat[MAX_SIZE];
int point = -1;

int isEmpty() {return point == -1; }
int isFull() {return point == MAX_SIZE - 1; }

// push
void into(int num) {
    if (!isFull()) isWhat[++point] = num;
}

// pop
int take() {
    if (isEmpty()) return -1;
    else return isWhat[point--];
}


// 2023년 2회차, 스택
int main(void) {
    
    into(5); into(2);

    while (!isEmpty()) {
        printf("%d ", take());
        into(4); into(1); printf("%d ", take());
        into(3); printf("%d ", take()); printf("%d ", take());
        into(6); printf("%d ", take()); printf("%d ", take());
    }

    // 정답: 2 1 3 4 6 5

    return 0;
}