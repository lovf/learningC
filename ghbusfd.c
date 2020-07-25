///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.写一个程序,可以一直接收键盘字符,如果是小写,就输出对应的大写,如果接受的是大写字符,就输出对应的小写字符.如果是数字则不输出.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char ch = '\0';

	while (1) {
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z') {
			ch += 'a' - 'A';
		}
		else if (ch >= 'a'&& ch <= 'z') {

			ch -= 'a' - 'A';
		}
		else if (isdigit(ch)) {
			continue;
		}
		putchar(ch);	
	}
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//假如只要求大小写的转化,可以使用异或的方法进行计算.
#include <stdio.h>
#include <stdlib.h>

int main() {

	while (1) {
		char ch = getchar();
		if (ch > 'a' && ch < 'z' || ch > 'A' && ch < 'Z') {
			ch ^= 'a' - 'A';
		}
		putchar(ch);
	}
	system("pause");
	return 0;
}