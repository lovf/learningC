//��дһ������reverse_string(char* string)  ʵ��:�������ַ����е��ַ���������
//����˼·: ���ַ�������λ��ĩβ�ַ����ν��н�������
//�ǵݹ�
#include <stdio.h>
#include <stdlib.h>

void reverse_string(char str[], int len) {
	int i, j;
	for (int i = 0, j = len - 1; i < j; i++, j--) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

int main() {
	char str[] = "abcdef";
	int	 len = strlen(str);
	reverse_string(str, len);
	puts(str);
	system("pause");
	return 0;
}
///////////
////�ݹ�ʵ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_string(char str[]) {
	if (*str) {
		int i = strlen(str) - 1;
		char temp;
		temp = str[0];
		str[0] = str[i];
		str[i] = '\0';
		reverse_string(str + 1);
		str[i] = temp;
	}
}

int main() {
	char str[] = "abcdef";
	reverse_string(str);
	puts(str);
	system("pause");
	return 0;
}
