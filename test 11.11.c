//********************函数****************
////举例1.写一个函数,返回两个数的最大值
//#include<stdio.h>
//#include <stdlib.h>
//
//int Max(int a, int b){
//	if (a > b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//	int main(){
//		int x = 10;
//		int y = 20;
//		int ret;
//		ret = Max(x, y);
//		printf("%d\n",ret);
//		system("pause");
//		return 0;
//	}
//************************************************************************
//举例2.写一个函数,交换两个数
//#include<stdio.h>
//#include <stdlib.h>
//
//void  Swap(int* a, int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	int x = 10;
//	int y = 20;
//	Swap(&x,&y );
//	printf("x=%d y=%d\n",x,y);
//	system("pause");
//	return 0;
//}
//形参与实参的关系:
//形参是实参的一份拷贝.(副本)真正起作用的是实参.
//**************************************************************************
//举例3.交换两个数
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int temp = x;
//	x = y;
//	y = temp;
//	printf("x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
////****************************************************************
//引入了指针变量进行交换
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int* a=&x;
//    int* b=&y;
//	//a等于x的地址,*就是间接访问操作符,*a就是对a的解引用,找到a所对应的变量大小
//	//*a就是根据x的地址找到了x这个变量
//	//*a和x是等价的
//	//*b和y是等价的
//	int temp = *a;
//	*a= *b;
//	*b = temp;
//	printf("x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
//**********************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//***************************************************************************
//***************************************************************************
//***************************************************************************
////*********函数的调用*********
////**函数值返回来的位置就是函数调用的位置
//判定一个数是不是素数
//素数：一个整数只能被1和它自身整除的数。
//解题思路：判断一个整数m是否是素数，只需把m被 2 ~m - 1 之间的每一个整数去除，如果都不能被整除，那么m就是一个素数。
//具体实例如下：
//举例1.写一个函数判定一个数是不是素数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int Isprime(int num){
//	//返回0代表不是素数,返回1代表是素数
//	if (num == 0){
//		return 0;
//	}
//	if (num == 1){
//		return 0;
//	}
//	//看num能被那些数整除
//	//只要找到一个能被num整除
//	for (int i = 2; i < num; i++){
//		if (num%i == 0){
//			return 0;
//		}
//		//return 1;//假如放到这块 只能证明看num能不能被2整除而不是所有的从2到num之间的数字都被整除
//	                //因此必须等循环结束完之后才能判定到底是否被整除,必须注意
//	}
//    return 1;//return放在这块的原因是:必须让num把所有的数字都尝试整除完才能判定是否是素数
//}
//int main(){
//	int n;
//	printf("请输入要判定的数字（结果是1证明是素数。结果是0证明不是素数）： \n");
//	scanf("%d",&n);
//	printf("结果是：%d\n",Isprime(n));
//	system("pause");
//	return 0;
//}
//*************************************************************************
//**************************************************************************
////例2.写一个函数判定是不是闰年
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
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int year;
//	printf("请输入要判定的年数: \n");
//	scanf("%d",&year);
//	if (year % 4 == 0){
//		printf("%d 是闰年 \n",year );
//	}
//	else
//	if (year%100 != 0){
//		printf("%d 不是闰年\n",year);
//	}
//	else 
//	if (year % 400 == 0){
//		printf("%d 是闰年\n",year);
//	}
//	system("pause");
//	return 0;
//}
//*********************************************************************
//例3.写一个函数，实现一个整形有序数组的二分查找
//
//#include<stdio.h>
//#include <stdlib.h>
//
//int   BinarySearch(int arr[], int size, int Tofind){
//	int left = 0;
//	int right = size - 1;
//    while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > Tofind){
//			right = mid  - 1;
//		}
//		else if (arr[mid] < Tofind){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//  return -1;
//}
////int main(){
////	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
////	int size = sizeof(arr) / sizeof(arr[0]);
////	//int Tofind = 4;
////	int ret = BinarySearch(arr, 8, 4);
////	 printf("%d\n", ret);
////	system("pause");
////	return 0;
////}
//**********************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int BinarySearch(int arr[], int Tofind){
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; //数组作为函数参数的时候会隐试转化为指针,
//                                                 //指针的大小刚好与sizeof(arr[0])大小相等
//	printf("%d\n",right);
//	return 0;
//
//}
//int main(){
//	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinarySearch( arr, 3);
//	system("pause");
//	return 0;
//}
//指针作为函数参数时会隐试转化为指针
//************************************************************************
//例4.写一个函数,每调用一次,就会将num的值加1
//#include <stdio.h>
//#include <stdlib.h>
//
//void Func(int* x){
//	//x=&num;*x是对x的解引用,找到x所对的值得大小
//	*x += 1;
//	}
//int main(){
//	int num = 0;
//	Func(&num);
//	Func(&num);
//	printf("num=%d\n",num);
//	system("pause");
//	return 0;
//}
//********************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//void Func(int x){
//	//x=&num;*x是对x的解引用,找到x所对的值得大小
//	x += 1;
//}
//int main(){
//	int num = 0;
//	Func(num);
//	//Func(num);
//	printf("num=%d\n", num);
//	system("pause");
//	return 0;
//}
//
//*******形参是实参的拷贝.要改变一个函数外部变量,必须通过参数传指针的方式修改函数的外部变量.
//***************函数的声明与定义************
//举例1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int Add(int x, int y){
//	return x + y;
//}
//int main(){
//	int sum = Add(2, 3);//函数的调用:调用的位置就是函数值返回的位置
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//************************************************************************
//举例2.
//#include <stdio.h>
//#include <stdlib.h>
////extern 是可以省略的,但是不建议省略.
////external没有函数体,以 ; //结束
////声明相当于一个空头支票
//extern  Add(int x, int y);//
//
//int main(){
//	int sum = Add(2, 3);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//int Add(int x, int y){
//	return x + y;
//}
//**************************************************************************
//举例3.得到最大值
//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(int x, int y){
//	if (x > y){
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//int main(){
//	//int ret = Max(2, 3);
//	printf("%d\n",Max(2,3));
//	system("pause");
//	return 0;
//}
//**函数调用的执行过程**
//函数调用就会进入到函数体内部,遇到return 语句,函数就结束了.然后回到调用的位置继续执行

//***************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
////函数声明
//extern Max(int x, int y);
//
//int main(){
//	//int ret = Max(2, 3);
//	printf("%d\n",Max(2,3));
//	system("pause");
//	return 0;
//}
//int Max(int x, int y){
//	if (x > y){
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//*******************************************************************************
//************函数递归**************
//接受一个整型值,并且按顺序打印他的每一位.(例如:输入:1234.输出:1 2 3 4)
#include<stdio.h>
#include <stdlib.h>

void  print(int num){
	if (num > 9){
		print(num / 10);
	}
	printf("%d\n",num%10);
}
int main(){
	print(1234);
	system("pause");
	return 0;
}










