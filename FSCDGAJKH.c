//����1.дһ������,��������һ���ַ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Rever_str(char str[],int len) {
	int left = 0;
	int right = len - 1;
	char temp;

	for (left = 0, right = len - 1; left <= right; left++, right--) {
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
	}

}

int main() {
	char str[] = "abcdef";
	int len = strlen(str);
	Rever_str(str,len);
	puts(str);

	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����2:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str[1023] = { 0 };
	printf("�������Ӧ���ַ���: ");
	scanf("%[^\n]",&str);
	int len = strlen(str);
	int left = 0;
	int right = len - 1;
	for (left = 0, right = len - 1; left <= right;right--,left++) {
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
	}
 
	puts(str);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����3.��һ���ַ����������Ϊ:"student a  am i",�뽫��������ݸ�Ϊ"i am a student".Ҫ��:����ʹ�ÿ⺯��,ֻ�ܿ������޸��ռ�(�ռ�������ַ����ĳ����޹�)
//˼·: ��ÿһ����������,Ȼ������������
//student a  am i  ->  i  ma  a  tneduts  -> i am  a student 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Rever_word(char* start,char* end) {
	int len = end - start;
	int left = 0;
	int right = len - 1;
	char temp;

	for (left = 0, right = len - 1; left <= right; left++, right--) {
		temp = start[left];
		start[left] = start[right];
		start[right] = temp;
	}
}

void reverse(char* src) {
	char* start = src;
	char* end; 
	int i;
	for (i = 0; src[i];i++) {
		if (src[i] == ' ') {
			end = src + i;
			Rever_word(start, end);
			start = end + 1;
		}
	}
	Rever_word(start, src+i);
	Rever_word(src, src + i);

}

int main() {
	char test[50] = "student a am i";
	//int len = strlen(test);
	reverse(test);
	puts(test);

	system("pause");
	return 0;
}











































