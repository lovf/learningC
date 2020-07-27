//编写一个函数reverse_string(char* string)  实现:将参数字符串中的字符反向排列
//解题思路: 将字符串的首位和末尾字符依次进行交换即可
//非递归
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
////递归实现
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
