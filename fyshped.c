//atoi 
//��c�����ַ���ת��int
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str[] = " 100";

	printf("%d\n",atoi(str));
    system("color A");
    system ("pause");
    return 0;
}
//ģ��ʵ��atoi
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int Myatoi(const char* str) {
	int flag = 1;
	int ret = 0;
	if (str == NULL || *str == '\0') {
		return 0;
	}
   //1.����հ��ַ�
	while (isspace(*str)) {
		str++;
	}
   //2.����+-����
	if (*str == '-') {
		flag = -1;
		str++;
	}
	if (*str == '+') {
		str++;
	}
   //3.���������ַ�
	while (*str != '\0') {
		if (isdigit(*str)) {
			ret = ret * 10 + (*str - '0');
		}
		else {
			return ret;
		}
		str++;
	}
	return ret*flag;
}

int main () {
	char str[] = "-100";
	printf("%d\n", Myatoi(str));

    system("color A");
    system ("pause");
    return 0;
}
//////isdgit  �ж��ַ������ж��ٸ�����?

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i = 0;
	int n = 0;
	char str[50] = { 0 };
	gets(str);

	int len = strlen(str);
	for (int i = 0; i < len;i++) {
		if (isdigit(str[i])) {
			n++;
		}
	}
	printf("There are %d numbers in str\n",n);

    system("color A");
    system ("pause");
    return 0;
}
