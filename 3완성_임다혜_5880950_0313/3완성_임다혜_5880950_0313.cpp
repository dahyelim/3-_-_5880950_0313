#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

int main() {
    char str[100]; // 문자열을 저장할 배열 선언

    printf("문자열을 입력하세요 : "); 
    scanf("%[^\n]s", str); // 엔터키 전까지 입력받은 문자열을 str 배열에 저장

    int str_len = strlen(str); // 입력된 문자열의 길이를 구하여 str_len에 저장

    // 입력된 문자열을 대소문자 변환
    for (int i = 0; i < str_len; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') { // 소문자라면
            str[i] -= 32; // 소문자를 대문자로 변환 (ASCII 값 차이: 'a' - 'A' = 32)
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') { // 대문자라면
            str[i] += 32; // 대문자를 소문자로 변환 (ASCII 값 차이: 'A' - 'a' = -32)
        }
    }

    printf("문자열의 길이 : %d\n", str_len); // 변환 후 문자열의 길이를 출력
    printf("변환된 문자열 : %s", str); // 변환된 문자열을 출력

    return 0; // 프로그램 종료
}
