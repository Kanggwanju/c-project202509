#include <stdio.h>

int main(void) {
    // 변수
    // 자료형
    // char 문자 하나 1byte
    // int 정수 4byte
    // long 정수 4 또는 8byte
    // float 실수 4 byte
    // double 정밀한 실수 8byte

    int my_age = 20;
    char *my_name = "김철수";

    printf("나이: %d\n", my_age);

    printf("char size: %dbyte\n", sizeof(char));
    printf("int size: %dbyte\n", sizeof(int));
    printf("double size: %dbyte\n", sizeof(double));
    printf("float size: %dbyte\n", sizeof(float));

    return 0;
}
