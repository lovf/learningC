//*************************��֧��ѭ���ṹ*************************
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int a ;
//	scanf("%d",&a);
//		if (a == 2){
//			printf("hehe\n");
//		}
//		else  {
//			if (a == 1) {
//			printf("haha\n");
//		}
//			else{
//				printf("������������");
//			}
//	}
//		system("pause");
//	
//*********************************************************************
//�ж�һ�������Ƿ�Ϊ����
//#include<stdio.h>
//#include <stdlib.h>

////0������ż����1����������
//int IsOdd(int n){
//	if (n % 2 == 0){
//		return 0;
//	}
//	return 1;
//}
//int  main(){
//
//	printf("%d\n", IsOdd(-11));
//	system("pause");
//	return 0;
//
//}
//**********************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//int IsOdd(int n){
//	if (n % 2 != 0){
//		return 1;
//	}
//	return 0;
//}
//int  main(){
//	printf("%d\n", IsOdd(-11));
//	system("pause");
//	return 0;
//}
//************************************************************************
//���1��100������
#include<stdio.h>
#include <stdlib.h>

int main(){
	int n;
	for (n = 1; n <= 100; n++){
		if (n % 2 != 0){
			printf("%d\n", n);
		}
			n++;
	}
	system("pause");
	return 0;
}
