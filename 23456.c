//输入一个字符判定它是否为大写字母，如果是将它转化为小写字母//
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
