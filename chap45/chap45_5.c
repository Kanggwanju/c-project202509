#include <stdio.h>

char Data[5] = {'B', 'A', 'D', 'E'};
char c;

// 2025년 1회차
int main(void) {
    
    int i, temp, temp2;
    c = 'C';

    // 참고: A: 65, a: 97, '0': 48
    // E - A = 5
    printf("%d\n", Data[3] - Data[1]);

    // i = 2
    for(i = 0; i < 5; ++i) {
        if(Data[i] > c)
            break;
    }

    temp = Data[i]; // Data[2] = D -> 68
    Data[i] = c;
    i++;

    for (; i < 5; ++i) {
        temp2 = Data[i];
        Data[i] = temp;
        temp = temp2;
    }

    // 정답: BACDE
    for (i = 0; i < 5; i++) {
        printf("%c", Data[i]);
    }

    return 0;
}