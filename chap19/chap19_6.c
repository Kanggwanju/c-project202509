#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "123";
    // dest 배열의 크기는 최소 src 길이 + 1(널 문자)을 수용해야 안전
    // 현재는 배열 크기 5가 가득 차서 '\0'이 없음, 문자열이 아니라 문자 배열 상태임
    char dest[5] = "abcde";

    // 최대 3개의 문자를 dest에 복사 -> 앞부분이 수정되어 123de로 변경
    strncpy(dest, src, 3);

    // '\0'을 찾지 못함 -> dest 배열 메모리 바깥, 즉 이어지는 메모리 공간을 계속 읽음
    // 우연히 dest 배열 바로 뒤에 src 배열이 메모리에 배치되어 있다면 dest와 src의 내용을 출력하고
    // src 배열의 \0을 만나서 출력 종료
    // ex) 123de123
    printf("%s", dest);

    return 0;
}