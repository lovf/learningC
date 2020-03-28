//****1.�ַ�������  дһ������,����ʵ���ַ�������K���ַ�
//����:ABCD  ����һ���ַ� BCDA  ABCD  ���������ַ�  CDAB
//ʵ�ֲ���:
//1.��ʵ��һ������һ������һ���ַ� 2.��ʵ��һ������һ������N���ַ�

//ʵ�ֵ���N��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftRotateOne(char str[], int size){
	//�������ĳ�����1 ,����Ҫ������ת
	if (size == 1){
		return str;
	}
	//1.�Ȱ�0 ��Ԫ�ص��±���б���
	char tmp = str[0];
	//2.���ν�1��Ԫ���±��������
	for (int i = 1; i < size; i++){
		str[i - 1] = str[i];
	}
	//3.�Ѹղű��ݵ�Ԫ�طŵ����һ��Ԫ�ص�λ����
	str[size - 1] = tmp;
}

void LeftRotateN(char str[], int size, int n){
	for (int i = 0; i < n; i++){
		LeftRotateOne(str, size);
	}
}

int main(){
	char str[] = "ABCD";
	int n;
	printf("��������õĴ���: \n");
	scanf("%d",&n);
	LeftRotateN(str, 4, n);
	printf("%s\n", str);
	system("pause");
	return 0;
}
//*************************************************************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void LeftRotateOne(char str[], int size){
//	//�������ĳ�����1 ,����Ҫ������ת
//	if (size == 1){
//		return str;
//	}
//	//1.�Ȱ�0 ��Ԫ�ص��±���б���
//	char tmp = str[0];
//	//2.���ν�1��Ԫ���±��������
//	for (int i = 1; i < size; i++){
//		str[i - 1] = str[i];
//	}
//	//3.�Ѹղű��ݵ�Ԫ�طŵ����һ��Ԫ�ص�λ����
//	str[size - 1] = tmp;
//}
//
//void LeftRotateN(char str[], int size, int n){
//	//���n������ͻᵼ��Ч�ʴ�󽵵�,��˽����Ż������ظ�i<n%size
//	for (int i = 0; i < n%size; i++){
//		LeftRotateOne(str, size);
//	}
//}
//
//int main(){
//	char str[] = "ABCD";
//	LeftRotateN(str, 4, 3);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//*****************************************************************************************************


//2.�ַ�����ת���.дһ������,�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮��Ľ��:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//
//void LeftRotateOne(char str[], int size){
//
//	if (size == 1){
//		return ;
//	}
//
//	char tmp = str[0];
//	for (int i = 1; i < size; i++){
//		str[i - 1] = str[i];
//	}
//	str[size - 1] = tmp;
//	
//}
//int RotateCmp(char str1[], char str2[]){
//
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	if (len1 != len2){
//		return 0;
//	}
//	for (int i = 0; i < len1; i++){
//		if (strcmp(str1,str2) == 0){
//			return 1;
//		}
//		LeftRotateOne(str1, len1);
//		
//	}
//	return 0;
//}
//
//int main(){
//
//	char str1[] = "AABCD";
//	char str2[] = "BCDAA";
//	int ret = RotateCmp(str1, str2);
//	
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}

























