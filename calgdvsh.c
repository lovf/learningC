//strlen ���� 
//��������ַ����ĳ��� 
//ͷ�ļ�  #include<string.h>
//�÷�:���������ַ����ĳ��� �ַ�����һ��������ַ����� ��\0��β һ����strlen����������һ����ַ���������δ������Ϊ
//����1.��һ���ַ����ĳ���
//��1.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = strlen(arr);
//
//	printf("ret= %d\n",ret);
//	system("pause");
//	return 0;
//
//}
//********************************************************************************************************
//��2.(����ʵ����strlen��������һ��)
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Strlen(char* arr){
//	int i=0;
//	//���� \0 ֹͣѭ��
//	while ( *arr != '\0'){
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = Strlen(&arr);
//	printf("�ַ����ĳ�����: %d\n",ret);
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//��3.�ݹ�
#include <stdio.h>
#include <stdlib.h>

int Strlen(char* arr){
	if (*arr == '\0'){
		return 0;
	}
	else{
		return 1 + Strlen(arr + 1);
	}
}
int main(){
	char arr[] = "abcdef";
	int ret = Strlen(&arr);
	printf("�ַ����ĳ�����: %d\n", ret);

	system("pause");
	return 0;
}