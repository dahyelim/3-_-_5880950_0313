#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	printf("문자열을 입력하세요 : ");
	scanf("%[^\n]s", str);
	int str_len = strlen(str);
	printf("str_len");
	for (int i = 0; i < str_len; ++i) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	printf("문자열의 길이 : %d\n", str_len);
	printf("변환된 문자열 : %s",str);

}