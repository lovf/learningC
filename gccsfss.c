//�ַ�����ת��������


//1.�ַ�������.ʵ��һ���������������ַ�����K���ַ�
//����:ABCD����һ���ַ��õ� BCDA
//ABCD ����һ���ַ��õ�CDAB
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void LeftRotateOne(char str[],int size){
//	if (size == 1){
//		return str;
//	}
//	//�������Ǹ���ת���ַ�����λ���ȸ����һ��,����û�б����ô�����ֱ�Ӹ�ֵ�ͻᵼ�´��ڴ���
//	char tmp = str[0];
//	for (int i = 1; i < size;i++){
//		str[i-1] = str[i];
//	}
//	str[size - 1] = tmp;
//}
//void  LeftRotateN(char str[], int size,int n){
//	for (int i = 0; i < n;i++){
//		LeftRotateOne(str, size);
//	}
//}
//
//
//int main(){
//
//	char str[] = "CDAB";
//	int len = strlen(str);
//	int N;
//	printf("��������ת���ַ���: \n");
//	scanf("%d",&N);
//	LeftRotateN(str, len,N);
//
//	
//
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}
////**************************************************************************************************************
//2.�ַ�������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RightRotateOne(char str[], int size){
	if (size == 1){
		return str;
	}
	//�������Ǹ���ת���ַ�����λ���ȸ����һ��,����û�б����ô�����ֱ�Ӹ�ֵ�ͻᵼ�´��ڴ���
	char tmp = str[size - 1];
	for (int i = size; i >= 0; i--){
		str[i - 1] = str[i - 2];
	}
	str[0] = tmp;
}

void RightRotateN(char str[], int size, int n){
	for (int i = 0; i < n; i++){
		RightRotateOne(str, size);
	}
}

int main(){

	char str[] = "ABCD";
	int len = strlen(str);
	RightRotateN(str, len, 2);
	printf("%s\n", str);
	system("pause");
	return 0;
}