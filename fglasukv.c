// ��2.дһ�������ж��ǲ�������
//����Ҫ�����������ж�����:
////1.�����Ϊ��ͨ�������������
//// ��ͨ�����ܱ�4���������ܱ�100���������Ϊ��ͨ���ꡣ(��2004���������, 1999�겻������); 
////��������:�ܱ�400������Ϊ�������ꡣ(��2000��������,1900�겻������)
//*******
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int IsLeapYear(int year){
//	//�����Ϊ��ͨ�������������
//	if (year % 100 == 0){
//		//��������
//		if (year % 400== 0){
//			return 1;
//		}
//		return 0;
//	}
//	else{
//		//��ͨ����
//		if (year % 4 == 0){
//			return 1;
//		}
//		return 0;
//	}
//}
//	int main(){
//		int N;
//		printf("������Ҫ�ж�������(�����1,������.�����0,��������): \n");
//		scanf("%d",&N);
//		printf("%d\n",IsLeapYear(N));
//
//		system("pause");
//		return 0;
//}
//*************************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int IsLeapYear(int year){
//	//ͬʱ������ͨ������������������
//	if ((year % 400 == 0) ||(year % 100 != 0) && (year % 4 == 0)){
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//	int main(){
//		int N;
//		printf("������Ҫ�ж�������(�����1,������.�����0,��������): \n");
//		scanf("%d",&N);
//		printf("%d\n",IsLeapYear(N));
//
//		system("pause");
//		return 0;
//}
//*********************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(){
	int year;
	printf("������Ҫ�ж�������: \n");
	scanf("%d", &year);
	if (year % 4 == 0){
		printf("%d ������ \n", year);
	}
	else
	if (year % 100 != 0){
		printf("%d ��������\n", year);
	}
	else
	if (year % 400 == 0){
		printf("%d ������\n", year);
	}
	system("pause");
	return 0;
}
