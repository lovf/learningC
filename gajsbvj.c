//��2.���ַ����ĳ���
//��1.����strlen����ֱ����
//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[] = "abcd";
//	int ret;
//	ret = strlen(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//��2.���ú�������ʽ�������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////"abcd"
//int  Strlen(char arr[]){
//	int i = 0;
//	while (arr[i] != '\0' ){
//		i++;
//	}
//	return i;
//}
//
//int main(){
//	char arr[] = "abcd";
//	printf("%d\n", Strlen(arr));
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//��3.�ݹ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//"abcd"
int  Strlen(char arr[]){
	int i = 0;
	if (arr[i] == '\0'){
		return 0;
	}
	return 1 + Strlen(arr + 1);//ָ��+1��������һ��Ԫ��ָ����һ���ַ�
}

int main(){
	char arr[] = "abcd";
	printf("%d\n", Strlen(arr));
	system("pause");
	return 0;
}
//��������ַ������ܽ�:��1��ֱ������strlen�����������.��2�����ú�������ʽ����������м���.
//��3�����õݹ�ĵķ������е������.һ��Ҫ���ݹ�ķ�ʽ
