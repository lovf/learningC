/////*****************************************第一次作业**************************************
//*************************第一题:***************
//判定一个数是不是素数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n=96;
//	int i;
//		for (i =2; i < 200; i++){
//			if (n%i != 0){
//				printf("素数\n");
//				break;
//			}
//			else{
//				printf("不是素数\n");
//				break;
//			}
//		}
//	system("pause");
//	return 0;
//}
//打印100-200之间的素数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		for (i = 2; i < 200; i++){
//			if (n % i == 0){
//				break;//如果能整除就跳出该循环
//			}
//		}
//		if (i == n){ // 代表没有整除
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************
//优化1.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		int t = n / 2;
//		for (i = 2; i <= t;i++){
//			if (n % i == 0){
//				break;//如果能整除就跳出该循环
//			}
//		}
//		if (i > t){ // 代表没有整除
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************
//优化2.
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		int sqrtres = sqrt(n);
//		for (i = 2; i <= sqrtres; i++){
//			if (n % i == 0){
//				break;//如果能整除就跳出该循环
//			}
//		}
//		if (i>sqrtres){ // 代表没有整除
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************
//y优化3.
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 101; n <= 200; n+=2){
//		int sqrtres = sqrt(n);
//		for (i = 2; i <= sqrtres; i++){
//			if (n % i == 0){
//				break;//如果能整除就跳出该循环
//			}
//		}
//		if (i>sqrtres){ // 代表没有整除
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//*************************第二题:***************
//输出乘法口诀表
//#include  <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i, j;
//	for (i = 1; i < 10;i++){
//		for (j = 1; j <= i;j++){
//			printf("%d*%d=%d",i,j,i*j);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************
//*************************第三题:***************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n = 2018;
//		if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0)){
//			printf("是闰年\n");
//		}
//		else{
//			printf("不是闰年\n");
//		}
//	system("pause");
//	return 0;  
//}
//****************************************************************************************
//判断1000年-- - 2000年之间的闰年
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n, i;
//	for (n = 1000; n <= 2000; n++){
//		if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0)){
//			printf("%d\n", n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//拓展:判定年月日是否合法
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int y, m, d;
	int flag = 0;
	while (1){
		printf("请输入要判定的年 月  日: \n");
		scanf("%d%d%d", &y, &m, &d);

		if ((y % 400 == 0) || (y % 4 == 0 && y % 400 != 0)){
			flag = 1;
		}
		if (m > 12 || m< 1 || d > 31 || d < 1 ||
			(m == 4 || m == 6 || m == 9 || m == 11) && (d>30) || (m == 2) && (d > 28 + flag)){
			printf("不合法\n");
		}
		else{
			printf("合法\n");
		}
	}
	system("pause");
	return 0;
}





































































