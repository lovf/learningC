// 例2.写一个函数判定是不是闰年
//首先要分清楚闰年的判定条件:
////1.闰年分为普通闰年和世纪闰年
//// 普通闰年能被4整除但不能被100整除的年份为普通闰年。(如2004年就是闰年, 1999年不是闰年); 
////世纪闰年:能被400整除的为世纪闰年。(如2000年是闰年,1900年不是闰年)
//*******
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int IsLeapYear(int year){
//	//闰年分为普通闰年和世纪闰年
//	if (year % 100 == 0){
//		//世纪闰年
//		if (year % 400== 0){
//			return 1;
//		}
//		return 0;
//	}
//	else{
//		//普通闰年
//		if (year % 4 == 0){
//			return 1;
//		}
//		return 0;
//	}
//}
//	int main(){
//		int N;
//		printf("请输入要判定的年数(结果是1,是闰年.结果是0,不是闰年): \n");
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
//	//同时满足普通闰年和世纪闰年的条件
//	if ((year % 400 == 0) ||(year % 100 != 0) && (year % 4 == 0)){
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//	int main(){
//		int N;
//		printf("请输入要判定的年数(结果是1,是闰年.结果是0,不是闰年): \n");
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
	printf("请输入要判定的年数: \n");
	scanf("%d", &year);
	if (year % 4 == 0){
		printf("%d 是闰年 \n", year);
	}
	else
	if (year % 100 != 0){
		printf("%d 不是闰年\n", year);
	}
	else
	if (year % 400 == 0){
		printf("%d 是闰年\n", year);
	}
	system("pause");
	return 0;
}
