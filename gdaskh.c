//问题3: 第一个只出现一次的字符
//在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母
//示例 :
//s = "abaccdeff"
//返回 "b"
//s = ""
//返回 " "
#include <stdio.h>
#include <stdlib.h>

char firstuniqChar(char* s) {
	int newStr[1024] = { 0 };
	for (int i = 0; s[i] != '\0'; i++) {
		newStr[s[i]]++;
	}
	for (int i = 0; s[i] != '\0'; i++) {
		if (newStr[s[i]] == 1) {
			return s[i];
		}
	}
	return ' ';
}

int main() {
	char s[] = "abaccdeff";
	char ret = firstuniqChar(&s);
	printf("第一次出现一次的字符是: %c\n", ret);
	system("pause");
	return 0;
}