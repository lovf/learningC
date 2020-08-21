//1.�ַ�������,ʵ��һ������,����k���ַ���
//����: ABCD ����һ���ַ�  BCDA 
//     ABCD ���������ַ�  CDAB 
//����˼·: 1.��ʵ��һ������ÿһ��ֻ��תһ���ַ� 2.��ʵ��һ������������תN���ַ�
1>.��ʵ��һ������ÿһ��ֻ��תһ���ַ�
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
2>.��ʵ��һ������������תN���ַ�   (���ڲ��ϵص���һ����תһ���ַ��ĺ���)
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
	int n1 = n % len; //�����˽����ظ��ĵ���,���ڽϴ���ַ�����˵,��ʡ��Ч��
	for (int i = 0; i < n1; i++) {
		LeftRotateOne(str, len);
	}
}

int main() {
	char str[] = {0};
	int n = 0;
	printf("������Ҫ��ת���ַ�������ת�Ĵ���:   ");
	scanf("%s %d",str,&n);

	int len = strlen(str);
	LeftRotateN(str, len, n);
	printf("%s\n", str);

	system("color A");
	system("pause");
	return 0;
}
2.�ж�һ���ַ����ǲ�����һ���ַ�����ת֮����ַ���

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