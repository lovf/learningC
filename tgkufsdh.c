//实现数字的阶乘和阶乘后进行相加(1!+ 2!+ 3!....... + n!)
//法1.
//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//int main(){
//	int i;
//	int sum = 0;
//	int result;
//	int j, n;
//	printf("请输入要求的数: ");
//
//	for (i = 1; i <= n; i++){
//		result = 1;// 在循环的时候每一次的result 都要赋值1
//		for (j = 1; j <= i; j++){
//			result *= j;
//		}
//		sum += result;
//	}
//	printf("%d\n", result);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//*************************************************************************
//法2.
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int Factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;
//	}
//	return result;
//}
//int main(){
//	int sum = 0;
//	int N;
//	printf("请输入要求数字几的阶乘和累加：  \n");
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++){
//		sum += Factor(i);
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//*********************************************************************
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Factor(int n){
	int result = 1;
	for (int i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}
int main(){
	int N;
	printf("请输入求的数字： \n");
	scanf("%d", &N);
	int S = Factor(N);
	printf("%d\n", S);
	system("pause");
	return 0;
}