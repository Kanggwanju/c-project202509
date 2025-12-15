#include <stdio.h>
#include <stdlib.h>

struct node {
    int p;
    struct node* n;
};

// 2025년 2회차, 연결 리스트
int main(void) {

    struct node a = {1, NULL};
    struct node b = {2, NULL};
    struct node c = {3, NULL};

    a.n = &b; b.n = &c; c.n = NULL; // a -> b -> c
    c.n = &a; a.n = &b; b.n = NULL; // c -> a -> b

    struct node* head = &c; // head -> c

    // 정답: 3 1 2
    printf("%d %d %d", head->p, head->n->p, head->n->n->p);
    
    return 0;
}