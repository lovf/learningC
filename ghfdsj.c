//写一个函数,可以逆序一个字符串

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse_str(char str[],int len) {
	int left = 0;
	int right = len - 1;
	for (left = 0, right = len - 1; left <= right;left++,right--) {
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
	}
}

void Print(int str[]) {
	puts(str);
}
int main () {
	char str[] = "abcdef";
	int len = strlen(str);
	Reverse_str(str);
	Print(str,len);
    system ("pause");
    return 0;
}
//牛客网:
//正则法
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

	char str[101] = { 0 };
	//scanf("%s", str);  //假如这块直接%s 那么在输入时遇到空格的就会停止打印
	scanf("%[^\n]", str); //正则表达式
	int len = strlen(str);
	int left = 0;
	int right = len - 1;
		for (left = 0, right = len - 1; left <= right;left++,right--) {
			char temp = str[left];
			str[left] = str[right];
			str[right] = temp;
		}
	
	puts(str);
    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//有一个字符数组的内容为:"student a  am i",请将数组的内容改为"i am a student".要求:不能使用库函数,只能开辟有限个空间(空间个数和字符串的长度无关)
//思路: 将每一个单词逆序,然后在整体逆序
//student a  am i  ->  i  ma  a  tneduts  -> i am  a student 

#include <stdio.h>
#include <stdlib.h>

void reverse_word(char* start,char* end) {
	int len = end - start;
	char temp;
	int i, j;
	for (i = 0, j = len - 1; i < j;i++,j--) {
		temp = start[i];
		start[i] = start[j];
		start[j] = temp;
	}
}

void reverse(char* src) {
	char* start = src;
	char* end;
	int i;
	for (i = 0; src[i];i++) { //给前面的单词逆序
		if (src[i] == ' ') {
			end = src + i;
			reverse_word(start, end);//对前面的单词进行逆序
			start = end + 1;//下一个单词开始的位置
		}
	}
	reverse_word(start, src + i); //给最后一个单词逆序
	reverse_word(src, src + i); //整体逆序
}

int main () {

	char test[50] = "student a am i";
	
	//reverse_word(test, test + 8);
	reverse(test);
	puts(test);

    system ("pause");
    return 0;
}
//////
