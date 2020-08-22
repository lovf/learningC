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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.�ж�һ���ַ����ǲ�����һ���ַ�����ת֮����ַ���

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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.���Ͼ���  ��һ�����־���,������ϵ����ǵ�����,���д����,�������ľ����в���ĳ�����ֵĴ���.
//�����Ͻǿ�ʼ��Ϊ��ʼԪ��,���������Ԫ�رȵ�ǰԪ��С,�����ƶ�,���������Ԫ�رȵ�ǰԪ�ش�,�����ƶ�,����±곬������ķ�Χ,�򲻴���.

#include <stdio.h>
#include <stdlib.h>

#define Row 3
#define Col 3

int FindNum(int arr[Row][Col],int toFind) {
	int row = 0;
	int col = Col - 1;
	int cur = arr[row][col];
	while (row >= 0 && row <= Row && col >= 0 && col <= Col) {
		if (toFind < cur) {
			cur = arr[row][--col];
		}
		else if (toFind > cur){
			cur = arr[++row][col];
		}
		else {
			return cur = arr[row][col];
		}
	}
	return 0;
}

int main () {
	int arr[Row][Col] = { 1, 2, 3, 2, 4, 5, 5, 6, 9 };
	int toFind = 4;

	printf("�ҵ���,��Ԫ����: %d\n",FindNum(arr,toFind));

    system("color A");
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.atoi //��c�����ַ���ת��int
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str[] = " 100";

	printf("%d\n",atoi(str));
    system("color A");
    system ("pause");
    return 0;
}
//ģ��ʵ��atoi
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int Myatoi(const char* str) {
	int flag = 1;
	int ret = 0;
	if (str == NULL || *str == '\0') {
		return 0;
	}
   //1.����հ��ַ�
	while (isspace(*str)) {
		str++;
	}
   //2.����+-����
	if (*str == '-') {
		flag = -1;
		str++;
	}
	if (*str == '+') {
		str++;
	}
   //3.���������ַ�
	while (*str != '\0') {
		if (isdigit(*str)) {
			ret = ret * 10 + (*str - '0');
		}
		else {
			return ret;
		}
		str++;
	}
	return ret*flag;
}

int main () {
	char str[] = "-100";
	printf("%d\n", Myatoi(str));

    system("color A");
    system ("pause");
    return 0;
}
//isdgit  �ж��ַ������ж��ٸ�����?

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i = 0;
	int n = 0;
	char str[50] = { 0 };
	gets(str);

	int len = strlen(str);
	for (int i = 0; i < len;i++) {
		if (isdigit(str[i])) {
			n++;
		}
	}
	printf("There are %d numbers in str\n",n);

    system("color A");
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//5.�ҵ���.һ��������ֻ������������ֻ����һ��,�������е����ֶ�����������,��дһ�������ҳ�����ֻ����һ�ε�����.

1>һ��������ֻ��һ��������ֻ����һ��,�������е����ֶ�����������,�ҵ�ֻ����һ�ε�����.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 1, 2, 4, 4, 5, 5 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
	for (int i = 0; i < size; i++) {
		ret ^= arr[i];
	}
	printf("�ҵ���,ֻ����һ�ε�������: %d\n",ret);
    system("color A");
    system ("pause");
    return 0;
}
2>.������ 
�Ƚ��������,����,Ȼ���ڽ��з��������
#include <stdio.h>
#include <stdlib.h>

int findSingleDog(int arr[],int size,int* num1,int* num2) {
	//1.�����,�ҵ�����ֻ����һ�ε������Ľ�� a^b
	int ret = 0;
	for (int i = 0; i < size;i++) {
		ret ^= arr[i];
	}
	//2.����,�ҵ�posλ�÷ֱ�Ϊ1 �� 0 λ��
	int pos = 0;
	for (pos = 0; pos < 32;pos++) {
		if ((ret & (1 << pos)) != 0) {
			break;
		}
	}
	//�õ���posλ�þ��� ��Ӧ��biteλ��1
	//3.����posλ��Ԫ����1,����0����������ֳ�������,�õ��������ֱַ�������
	*num1 = 0;
	*num2 = 0;
	for (int i =0; i < size;i++) {
		if ((arr[i] & (1 << pos)) == 0) {
			*num1 ^= arr[i];
		}
		else {
			*num2 ^= arr[i];
		}
	}
}

int main() {
	int arr[] = { 1, 1, 2, 4, 4, 5, 5 ,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	findSingleDog(arr, size,&num1,&num2);
	printf("num1=%d num2=%d\n",num1,num2);
	system("color A");
	system("pause");
	return 0;
}


















