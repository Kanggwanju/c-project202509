#include <stdio.h>

struct jsu {
    char name[12];
    int os, db, hab, hhab;
};

int main(void) {
    
    struct jsu st[3] = { {"데이터1", 95, 88}, {"데이터2", 84, 91}, {"데이터3", 86, 75} };
    struct jsu* p;

    // p는 st의 0번 인덱스를 바라봄.
    p = &st[0];

    //                84       +     75      = 159
    (p + 1)->hab = (p + 1)->os + (p + 2)->db;

    //                  159      +  95   +  88   = 342
    (p + 1)->hhab = (p + 1)->hab + p->os + p->db;

    //                 159      +      342       = 501
    printf("%d\n", (p + 1)->hab + (p + 1)->hhab);

    return 0;
}