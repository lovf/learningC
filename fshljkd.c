//1.字符串左旋,实现一个函数,左旋k个字符串
//例如: ABCD 左旋一个字符  BCDA 
//     ABCD 左旋两个字符  CDAB 
//解题思路: 1.先实现一个函数每一次只旋转一个字符 2.在实现一个函数依次左转N个字符
1>.先实现一个函数每一次只旋转一个字符
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftRotateOne(char str[],int len) {
	if (len == 1) {
		return;
	}
	char temp = str[0];
	for (int i = 1; i < len;i++) {
		str[i-1] = str[i];
	}
	str[len-1] = temp;
}

int main () {
	char str[] = "ABCD";
	int len = strlen(str);
	LeftRotateOne(str,len);
	printf("%s\n",str);

    system("color A");
    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
2>.在实现一个函数依次左转N个字符   (等于不断地调用一次旋转一个字符的函数)
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftRotateOne(char str[], int len) {
	if (len == 1) {
		return;
	}
	char temp = str[0];
	for (int i = 1; i < len; i++) {
		str[i - 1] = str[i];
	}
	str[len - 1] = temp;
}

void LeftRotateN(char str[], int len, int n) {
	int n1 = n % len; //避免了进行重复的调用,对于较大的字符串来说,节省了效率
	for (int i = 0; i < n1; i++) {
		LeftRotateOne(str, len);
	}
}

int main() {
	char str[] = {0};
	int n = 0;
	printf("请输入要旋转的字符串和旋转的次数:   ");
	scanf("%s %d",str,&n);

	int len = strlen(str);
	LeftRotateN(str, len, n);
	printf("%s\n", str);

	system("color A");
	system("pause");
	return 0;
}
2.判定一个字符串是不是另一个字符串旋转之后的字符串

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftRotateOne(char str[], int len) {
	if (len == 1) {
		return;
	}
	char temp = str[0];
	for (int i = 1; i < len; i++) {
		str[i - 1] = str[i];
	}
	str[len - 1] = temp;
}

int RotateCmp(char str1[],char str2[]) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2) {
		return 0;
	}
	for (int i = 0; i < len1; i++) {
		if (strcmp(str1, str2) == 0) {
			return 1;
		}
		else {
			LeftRotateOne(str1, len1);
		}
	}
	return 0;
}

int main() {
	char str1[] = "ABCD";
	char str2[] = "BCDA";
	printf("%d\n",RotateCmp(str1,str2));

	system("color A");
	system("pause");
	return 0;
}