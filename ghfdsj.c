//дһ������,��������һ���ַ���

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
//ţ����:
//����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

	char str[101] = { 0 };
	//scanf("%s", str);  //�������ֱ��%s ��ô������ʱ�����ո�ľͻ�ֹͣ��ӡ
	scanf("%[^\n]", str); //������ʽ
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
//��һ���ַ����������Ϊ:"student a  am i",�뽫��������ݸ�Ϊ"i am a student".Ҫ��:����ʹ�ÿ⺯��,ֻ�ܿ������޸��ռ�(�ռ�������ַ����ĳ����޹�)
//˼·: ��ÿһ����������,Ȼ������������
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
	for (i = 0; src[i];i++) { //��ǰ��ĵ�������
		if (src[i] == ' ') {
			end = src + i;
			reverse_word(start, end);//��ǰ��ĵ��ʽ�������
			start = end + 1;//��һ�����ʿ�ʼ��λ��
		}
	}
	reverse_word(start, src + i); //�����һ����������
	reverse_word(src, src + i); //��������
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
