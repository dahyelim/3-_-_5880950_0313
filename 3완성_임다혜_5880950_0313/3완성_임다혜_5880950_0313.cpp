#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

int main() {
    char str[100]; // ���ڿ��� ������ �迭 ����

    printf("���ڿ��� �Է��ϼ��� : "); 
    scanf("%[^\n]s", str); // ����Ű ������ �Է¹��� ���ڿ��� str �迭�� ����

    int str_len = strlen(str); // �Էµ� ���ڿ��� ���̸� ���Ͽ� str_len�� ����

    // �Էµ� ���ڿ��� ��ҹ��� ��ȯ
    for (int i = 0; i < str_len; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') { // �ҹ��ڶ��
            str[i] -= 32; // �ҹ��ڸ� �빮�ڷ� ��ȯ (ASCII �� ����: 'a' - 'A' = 32)
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') { // �빮�ڶ��
            str[i] += 32; // �빮�ڸ� �ҹ��ڷ� ��ȯ (ASCII �� ����: 'A' - 'a' = -32)
        }
    }

    printf("���ڿ��� ���� : %d\n", str_len); // ��ȯ �� ���ڿ��� ���̸� ���
    printf("��ȯ�� ���ڿ� : %s", str); // ��ȯ�� ���ڿ��� ���

    return 0; // ���α׷� ����
}
