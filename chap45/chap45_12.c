#include <stdio.h>
#include <stdlib.h>

struct node {
    char c;
    struct node* p;
};

struct node* func(char* s) {
    struct node* h = NULL, *n;

    while (*s) {
        n = malloc(sizeof(struct node));
        n->c = *s++;
        n->p = h;
        h = n;
    }
    return h;
}

// 2025년 2회차, 연결리스트, 단일 문자 출력
int main(void) {

    // n -> node4(T) -> node3(S) -> node2(E) -> node1(B)
    struct node* n = func("BEST");

    // 정답: TSEB
    while (n) {
        putchar(n->c); // 한글자 출력
        struct node* t = n;
        n = n->p;
        free(t);
    }
    
    return 0;
}