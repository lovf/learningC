//����һ���ַ��ж����Ƿ�Ϊ��д��ĸ������ǽ���ת��ΪСд��ĸ//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	ch = (ch >= 'A'&&ch <= 'Z') ? (ch + 32) : ch;
	printf("%c\n", ch);
	system("pause");
	return 0;
}
