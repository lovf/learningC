//例3.n的阶乘
//法1.直接法
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	int n;
//	int ret=1;
//	printf("请输入要求解的阶乘: \n");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++){
//		ret = ret*i;
//	}
//	printf("%d \n",ret);
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//法2.函数的调用
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void Factor(int N){
//	int ret = 1;
//	int i;
//	for (i = 1; i <= N; i++){
//		ret = ret*i;
//	}
//	printf("%d\n",ret);
//}
//int main(){
//	int n;
//	printf("请输入要求解的阶乘: \n");
//	scanf("%d",&n);
//	Factor(n);
//	system("pause");
//	return 0;
//}d用函数部分,当结束的时候重新回到到调用位置的下一行开始执行
//*********************************************************************************
//法3.递归实现
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Factor(int N){
	if (N == 1){
		return 1;
	}
	return N*Factor(N - 1);
}
int main(){
	int n;
	printf("请输入要求解的阶乘: \n");
	scanf("%d", &n);
	printf("%d\n", Factor(n));
	system("pause");
	return 0;
}