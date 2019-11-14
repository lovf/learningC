
//如果是小写字符就输出对应的大写字符,如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	printf("请输入要验证的字符\n");
	scanf("%c", &ch);
	while (ch != EOF){
		if (ch >= 'a' && ch <= 'z'){
			ch = ch - 32;
			putchar(ch);
			break;
		}
		else if (ch >= 'A'&&ch <= 'Z'){
			ch = ch + 32;
			putchar(ch);
			break;
		}
	}
	system("pause");
	return 0;
}