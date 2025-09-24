C 개발환경 설정

컴파일러 설치 (코드를 실행 가능하도록 기계어로 해석해줌)
- https://www.msys2.org/
- msys2-x86_64-20250830.exe 다운로드 후 실행

MSYS2 UCRT64 검색 후 실행, 명령어 입력
- pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
- 중간에 엔터, y 엔터

Path 추가
- 내 PC 우클릭: 속성 메뉴
- 고급 시스템 설정: 환경 변수 버튼
- Path 변수 편집: '사용자 변수' 목록에서 Path를 찾아 더블클릭
- 경로 추가: 새로 만들기 누르고 C:\msys64\ucrt64\bin 입력

설치확인
- cmd 열기
- gcc --version 입력

vsCode 설치
- 운영체제에 맞게 설치

vsCode 실행 - 파일 - 자동저장 체크

vsCode 확장
- C/C++ Extension Pack
- Code Runner (Jun Han)

Code Runner 설정
- 파일 -> 기본설정 -> 설정 -> code runner 검색
- Run Code configuration
- Run In Terminal 활성화

코드 파일 생성
- hello.c 파일 만들기
- 코드 실행은 Ctrl + Alt + N

빌드 설정
- Ctril + Shift + P, C/C++:IntelliSense 구성 선택 검색 후
- C/C++: gcc.exe 활성 파일 빌드를 선택


코드 실행이 안 된다면
Ctrl + Shift + P
- Configure Default Build Task(기본 빌드 작업 구성)
- C/C++: gcc.exe 활성 파일 빌드


실행 파일 자동 삭제
- Ctrl + Shift + P -> settings.json 검색 -> Preferences: Open User Settings (JSON) 선택
- "c" : "cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt.exe && del $fileNameWithoutExt.exe"

한글 깨짐
- Ctrl + Shift + P -> settings.json 검색 -> Preferences: Open User Settings (JSON) 선택
둘중에 한가지 선택
- "c" : "chcp 65001 && ..."
- "c": "cd $dir && gcc -fexec-charset=CP949 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt.exe && del $fileNameWithoutExt.exe"

!c 자동 완성(기본 포맷)
- Ctrl + Shift + P -> snippets 검색 -> 코드 조각 구성(Configure Snippets) -> C 클릭
- 아래 내용 그대로 넣음
```json
{
    "C 기본 템플릿 생성": {
        "prefix": "!c",
        "body": [
            "#include <stdio.h>",
            "",
            "int main(void) {",
            "\t$1",
            "\treturn 0;",
            "}"
        ],
        "description": "C언어 기본 main 함수 템플릿을 생성합니다."
    }
}
```

만약 .c 파일에서 자동완성이 띄지 않는 경우
- .c 파일을 실행한 상태에서 우측 하단의 언어가 C인지 확인
- 파일 -> 기본설정 -> 설정 -> Editor: Suggest On Trigger Characters 활성화
- 파일 -> 기본설정 -> 설정 -> Editor: Quick Suggestions에서 other 항목의 값이 on인지 확인