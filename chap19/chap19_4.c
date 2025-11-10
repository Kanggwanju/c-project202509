#include <stdio.h>
#include <string.h>

int main(void) {

    // c언어에서 ==으로 문자열을 비교하면 주소를 비교하게 되는 것임
    
    // strcmp(): 문자열 내용 비교
    // 0 반환: 두 문자열 같음
    // -1 반환: 문자열1이 2보다 사전 순으로 앞
    // 1 반환: 문자열 1이 2보다 사전 순으로 뒤

    char password[] = "pass1234"; // 초기 비밀번호
    char input[20]; // 사용자가 입력할 비밀번호

    printf("비밀번호를 입력하세요: ");
    scanf("%s", input);

    if (strcmp(password, input) == 0) {
        printf("로그인 성공!!\n");
    } else {
        printf("비밀번호가 틀렸습니다!!\n");
    }

    return 0;
}