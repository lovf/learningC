//*******************************������**************************
//�������еĸ�����Ա����һ���ڴ�ռ�
//Ӧ��1.
//��С���ֽ���ĵ��ж�
//#include <stdio.h>
//#include <stdlib.h>
//
//
//union Un{
//	int i;
//	char c;
//};
//typedef union Un Un;
//int IsLittleEnd(){
//	Un un;
//	un.i = 0x11223344;
//	if (un.c == 0x44){
//		return 1;
//	}
//	return 0;
//}
//
//int main(){
//	printf("%d\n", IsLittleEnd());
//
//	system("pause");
//	return 0;
//}

//Ӧ��2.�������С�ļ���

//��Ϊ�������:

//1.��û�ж��� #pragma pack(N)����ָ�� N�ֽڽ��ж���ʱ�����ļ�������ǣ�
//������������Ա��ռ�ڴ�Ĵ�С�ұ���Ϊ���������ռ�ֽڵ�����������������**

//#include <stdio.h>
//#include "stdio.h"
//
//union Test{
//	char a[5];
//	int b[2];
//	double c;
//};
//
//int main(){
//	union Test test;
//	printf("sizeof(Test) = %d\n", sizeof(test));
//
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************

//2.�������� #pragma pack(N)���� N�ֽڽ��ж���ʱ�����ļ���������£�
//������������Ա��ռ�ֽ��ұ���ΪN����С������**

#include <stdio.h>
#include <stdlib.h>

#pragma pack(2)
union{
	char a[7];
	int b[3];
	double c;
}Test;

int main(){
	printf("sizeof(Test) = %d\n", sizeof(Test));
	system("pause");
}

