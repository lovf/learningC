//************函数的递归**************
//例1.接收一个整型值,并且按顺序打印他的每一位.(例如:输入:1234.输出:1 2 3 4)
//#include<stdio.h>
//#include <stdlib.h>
//
//void  print(int num){
//	if (num > 9){
//		print(num / 10);
//	}
//	printf("%d\n", num % 10);
//}
//int main(){
//	print(1234);
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//例2.求字符串的长度
//法1.利用strlen函数直接求
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
//*****************************************************************************************
//法2.利用函数的形式进行求解
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
//**************************************************************************************
//法3.递归
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////"abcd"
//int  Strlen(char arr[]){
//	int i = 0;
//	if (arr[i] == '\0'){
//		return 0;
//	}
//	return 1 + Strlen(arr+1);//指针+1等于跳过一个元素指向下一个字符
//}
//
//int main(){
//	char arr[] = "abcd";
//	printf("%d\n", Strlen(arr));
//	system("pause");
//	return 0;
//****************************************************************************************
//关于求解字符串的总结:法1是直接利用strlen函数进行求解.法2是利用函数的形式引入参量进行计算.
//法3是利用递归的的方法进行调用求解.一定要理解递归的方式
//字符串是一种特殊的字符数组,必须以\0结尾.计算其长度时遇到\0就结束.长度不算\0
//字符数组长度:(占内存的字节数)长度计算必须要算上\0.
//***************************************************************************************
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
//****************************************************************************************
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
//}用函数调用,当结束的时候重新回到到调用位置的下一行开始执行
//***************************************************************************************
//法3.递归实现
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Factor(int N){
//	if (N == 1){
//		return 1;
//	}
//	return N*Factor(N - 1);	
//}
//int main(){
//	int n;
//	printf("请输入要求解的阶乘: \n");
//	scanf("%d",&n);
//	printf("%d\n", Factor(n));
//	system("pause");
//	return 0;
//}
//函数递归就是把问题进行拆分,然后递归进行求解.
//*************************************************************************************
//例4.斐波那契数(生兔子)
//1  1  2  3  5  8  13  21 .........()始终满足前两项之和等于第三项
//法1.递归(函数调用)计算方法比递归快很多避免了重复计算
//#include <stdio.h>
//#include <stdlib.h>

//int Fib(int n){
//	int last1 = 1;
//	int last2 = 1;
//	int cur;
//	int i;
//	if (n <= 2){
//		return 1;;
//	}
//	if (n >= 3){
//	for (i = 3; i <= n; i++){
//		cur = last1 + last2;
//		last2 = last1;
//		last1 = cur;
//	}
//	return cur;
//  }
//}
//	int main(){
//	printf ("%d\n",Fib(1));
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//法2.递归
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Fib(int n){
//	if (n <= 2){
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main(){
//	printf("%d\n",Fib(6));
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//函数递归就是把问题进行拆分,然后递归进行求解.
//递归:程序调用自身的编程技巧.递归的两个必要条件.
//1.存在限制条件,当满足这个限制条件的时候,递归将不再继续进行下去.
//2.每次递归调用之后越来越接近这个限制条件.(收敛)
//********************数组************************
//1.数组创建和初始化
//数组创建:[]中要给常量才可以,不能使用变量
//   //常量的表达形式
//   //1.字面值常量
//	//2.const 修饰的常量
//	//3.enum 枚举
//	//4.#define 宏
//1.字面值常量
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	// 字面值常量 10
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//3.enum 枚举
//#include <stdio.h>
//#include <stdlib.h>
////enum 枚举
//enum  {
//	SIZE=10 ,
//};
//
//int main(){
//	
//	int arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//4.#define 宏
//#include <stdio.h>
//#include <stdlib.h>
//
//#define A 10
//int main(){
//	 int arr[A] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	 for (int i = 0; i <= 9; i++){
//		 printf("%d\n",arr[i]);
//	 }
//	 system("pause");
//	 return 0;
//}
//****************************************************************************************
//2.const 修饰的常量(这块定义常量是不成立的)
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	const int a = 10;
//	int arr[a] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//数组的初始化和赋值
//初始化:在创建变量的时候,去设定数值.int arr[10]={0}; 
//赋值:变量已经创建完了,再去设定数值.
//普通数组只能使用{}进行初始化,字符数组除了使用{},还可以使用""进行初始化,这时类似于一个字符串
//字符串一定是以\0结尾的,计算长度是遇到\0就结束(不计算\0).strlen
//字符数组计算长度(占内存的字节数):算\0
//1.strlen函数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));//15结果错误,因为数组中不清楚\0到底在哪个位置,出现未定义行为
//	printf("%d\n", strlen(arr2));//3
//	system("pause");
//	return 0;
//}
//printf("%d\n", strlen(arr1));这个情况属于未定行为.因为无法找到下标为\0的
//****************************************************************************************
//2.sizeof函数
#include <stdio.h>
#include <stdlib.h>

int main(){
	char arr1[] = {'a','b','c'};
	char arr2[] = "abc";
	printf("%d\n",sizeof(arr1));//3
	printf("%d\n",sizeof(arr2));//4必须算上\0字符串都是以\0结束的
	system("pause");
	return 0;
}
//未定义行为:数组下标越界只是未定义行为中的一种情况.
