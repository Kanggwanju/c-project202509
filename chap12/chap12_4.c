#include <stdio.h>

int main(void) {
    
    // 1번, printf
    int a = 10;
    char b = 'A';
    float c = 3.14;

    printf("%c is %d, %.2f", b, a, c);
    printf("\n===============\n");

    // 2번, scanf
    int age;
    char initial;

    scanf("%d", &age); // 50 엔터 (\n처리)
    // 1칸을 띄워줘야 이니셜에 \n이 들어가지 않고 정상적으로 들어감
    scanf(" %c", &initial);

    printf("나이: %d, 이니셜: %c", age, initial);
    printf("\n===============\n");

    // 4번 printf
    float pi = 3.14;
    // 컴파일러에 따라 0또는 의미 없는 임의의 정수값이 출력된다.
    printf("pi의 값은: %d\n", pi);
    printf("\n===============\n");

    // 5번 sizeof
    double aa = 1.0;
    int bb = sizeof(aa);
    int cc = sizeof(bb);

    printf("%d, %d", bb, cc);

    return 0;
}