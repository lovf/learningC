

//�ṹ���С�ļ���
//64λ������32λ�����VSĬ���ǰ���32λ�����ɵ� char  1:short 2:int 4:long 4 :float 4: double 8: 
//�ṹ���ڴ����ԭ��:
//1.�ṹ���һ����Ա����ʼ��λ��2.����һ����Ա��,������ԱҪ���뵽ĳ����(��������������)�ĵ�ַ��..
//.���������ڱ�����Ĭ�ϵĶ�����(����#pragma ()���Ըı�)�͸ó�Ա��С֮�еĽ�С���Ǹ���ֵ
//3.�ṹ��Ľṹ����ܴ�С��������������������4.���Ƕ���˽ṹ��Ƕ�׵Ľṹ����뵽����������������,�ṹ��������С��������������������
//
//�ṹ���С�����Ϊ�������:
//��û�ж��� #pragma pack(value)ʱ,��ʱ������ = Min(������Ĭ�ϵĶ�����8,sizeof())
//����1.��
//#include <stdlib.h>
//#include <stdio.h>
//
//struct Test{
//	char a[5];
//	int b;
//	double c;
//};
//
//int main(){
//	struct Test s = { " ", 4 ,5.0 };
//	printf("sizeof(Test) = %d\n", sizeof(s));
//
//	system("pause");
//	return 0;
//}
// ��Աa 5���ֽ�  3�����ֽ�  ��Աb 4���ֽ� 4�����ֽ�  ��Աc 8���ֽ�  ������һ��24���ֽ�
//����2.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Test{
//	char a;
//	double b;
//	char c;
//	double d;
//};
//int main(){
//	struct Test s;
//	printf("sizeof(s) = %d\n",sizeof(s));
//	system("pause");
//	return 0;
//}
//*****************************************
//�������� #pragma pack(value)����ʱ������ = Min(Value,sizeof())���ļ��������Ȼ����ṹ����ڴ����ԭ��
//����1.
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(4)
//typedef struct{
//	char a[5];
//	int b;
//	double c;
//}Test;
//
//int main(void)
//{
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(4)
//typedef struct{
//	char a[5];
//	int b;
//	double c;
//}Test;
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//
//	system("pause");
//	return 0;
//}
//�ṹ���Ƕ�׼��㷽ʽ:
//����:
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S3{
//	double a;
//	char b;
//	int c;
//};
//
//struct S4{
//
//	char e;
//	struct S3 s3;
//	double f;
//};
//
//int main(){
//
//
//	printf("sizeof(struct S4)=%d\n", sizeof(struct S4));
//
//	system("pause");
//	return 0;
//
//}
//Ƕ�׵Ľṹ��Ӧ��������������������
//������Ϊ://1 + 7(���ֽ�)+S3(16)+8
//
//�������С�ļ���ҵ��Ϊ�������:
//
//��û�ж��� #pragma pack(value)����ָ�� value �ֽڽ��ж���ʱ�����ļ�������ǣ�
//������������Ա��ռ�ڴ�Ĵ�С�ұ���Ϊ���������ռ�ֽڵ���С����
//�������Ա����һ���ڴ�ռ�.
//��������
//
//#include <stdio.h>
//#include "stdio.h"
//
//union{
//	char a[7];
//	int b[2];
//	double c;
//}Test;
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//
//	system("pause");
//	return 0;
//}
//********************************************************************
//
//#include <stdio.h>
//#include "stdio.h"
//
//union Test1{
//	char a[5];
//	int i;
//	
//};
//
//union Test2{
//	short a[7];
//	int i;
//
//};
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(union Test1));
//	printf("sizeof(Test) = %d\n", sizeof(union Test2));
//	system("pause");
//}

//*********************************
//�������� #pragma pack(value)���� value�ֽڽ��ж���ʱ�����ļ���������£�
//������������Ա��ռ�ֽ��ұ���Ϊvalue����С������
//�������£�
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(2)
//union{
//	char a[7];
//	int b[3];
//	double c;
//}Test;
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//	system("pause");
//}
//****************************************************************************
//
//******************�ṹ��Ƕ��������Ĵ�С����****
///*ͬ��Ҳ�Ƿ�Ϊ���������
//
//��û�ж��� #pragma pack(value)����ָ�� value �ֽڽ��ж���ʱ�����ļ�������ǣ�
//�������С������ڰ�������Ա��ռ�ֽ���Ϊ�����������Ӧ���ֽڵ���С��������ԭ����м��㣬
//����ռ���ֽ�����ṹ����������Ա��ռ�ֽڵ��ܺ�ӦΪ�ṹ�������������������Ӧ���ֽڵ���С������
//*/
//����:
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//typedef  struct {
//	//������
//	union{
//		char a[10];
//		int b[2];
//		double c;
//	}test;
//	//���������16  �ṹ�����: 5+3(���ֽ�)+4+4(���ֽ�)+8
//	
//	char d[5];
//	int e;
//	double f;
//}Test;
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//
//	system("pause");
//}

//���������ı����ṹ���ܵļ�������: �����������С + �ṹ�������С=16+24=40
//
//�������� #pragma pack(value)���� value�ֽڽ��ж���ʱ�����ļ���������£�
//�ṹ�������С���������������С+ �ṹ������Ĵ�С,ֻ�������������ͽṹ��Ĵ�СҪ���ն����#pragma pack(value)�ķ�ʽ���м���
//����:
#include <stdio.h>
#include <stdlib.h>

#pragma pack(2)
typedef struct{
	union{
		char a[10];
		int b[2];
		double c;
	}test;
	char d[5];
	int e;
	double f;
}Test;

int main(){
	printf("sizeof(Test) = %d\n", sizeof(Test));

	system("pause");
	return 0;
}
////������(10��)+�ṹ��(5+1(���ֽ�)+4+8)==28