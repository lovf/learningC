//字符串旋转问题整理

//1.字符串左旋.实现一个函数可以左旋字符串的K个字符
//例如:ABCD左旋一个字符得到 BCDA
//ABCD 左旋一个字符得到CDAB
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void LeftRotateOne(char str[],int size){
//	if (size == 1){
//		return str;
//	}
//	//这块等于是给旋转的字符串首位置先给标记一下,假如没有标记那么最后在直接赋值就会导致存在错误
//1.先将0号元素进行备份一下2.把1号下标开始的元素依次往左移动3.把备份的元素放到最后一个元素的位置上
//	char tmp = str[0];
//	for (int i = 1; i < size;i++){
//		str[i-1] = str[i];
//	}
//	str[size - 1] = tmp;
//}
//void  LeftRotateN(char str[], int size,int n){
//	for (int i = 0; i < n;i++){
//		LeftRotateOne(str, size);
//	}
//}

//int main(){
//
//	char str[] = "CDAB";
//	int len = strlen(str);
//	int N;
//	printf("请输入旋转的字符数: \n");
//	scanf("%d",&N);
//	LeftRotateN(str, len,N);
//
//	
//
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}
////**************************************************************************************************************
//拓展:字符串右旋
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void RightRotateOne(char str[], int size){
//	if (size == 1){
//		return str;
//	}
//	//这块等于是给旋转的字符串首位置先给标记一下,假如没有标记那么最后在直接赋值就会导致存在错误
//	char tmp = str[size-1];
//	for (int i = size; i >=0;i--){
//		str[i-1] = str[i-2];
//	}
//	str[0] = tmp;
//}
//
//void RightRotateN(char str[], int size,int n){
//	for (int i = 0; i < n; i++){
//		RightRotateOne(str, size);
//	}
//}
//
//int main(){
//
//	char str[] = "ABCD";
//	int len = strlen(str);
//	RightRotateN(str, len,2);
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//2.字符串旋转结果的判定.写一个函数判定一个字符串是否为另一个字符串旋转之后的结果

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void LeftRotateOne(char str[],int size){
//	if (size == 1){
//		return str;
//	}
//	int tmp = str[0];
//	for (int i = 1; i < size;i++){
//		str[i-1] = str[i];
//	}
//	str[size-1] = tmp;
//}
//
//int StrlenCmp(char str1[],char str2[]){
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if(len1 != len2){
//		return 0;
//	}
//	for (int i = 0; i < len1;i++){
//		if (strcmp(str1,str2) == 0){
//			return 1;
//		}
//		else{
//			LeftRotateOne(str1, len1);
//		}
//	}
//	return 0;
//}
//
//int main(){
//	char str1[] = "AABCD";
//	char str2[] = "DAABC";
//	int ret = StrlenCmp(str1, str2);
//
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//
//}
//***************************************************************************************************************
//3.杨氏矩阵 (矩阵特点由上到下依次递增,由左到右依次递增)  请编写程序在这样的矩阵中查找某个数是否存在.时间复杂度小于O(N)

//思路:从右上角元素作为起始元素,如果待查找元素大于当前元素往下找....如果待查找元素小于当前元素往左找

//#include <stdio.h>
//#include <stdlib.h>
//
//#define ROW 3
//#define COL 3
//
//int YangSearh(int arr[ROW][COL], int Tofind){
//	int row = 0;
//	int col = COL - 1;
//	int cur = arr[row][col];
//	while (row >= 0 && row < ROW && col >= 0 && col < COL){
//		if (Tofind > cur){
//			cur = arr[++row][col];	
//		}
//		else if (Tofind < cur){
//			cur = arr[row][--col];
//		}
//		else{
//			return row,col;
//		}
//	}
//		return 0;	
//}
//
//int main(){
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int Tofind = 5;
//	int ret = YangSearh(arr, Tofind);
//	if (ret == 0){
//		printf("没找到");
//	}
//	else{
//		printf("ret=%d\n",ret);
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//4.atoi 函数 将数字字符转化成int类型
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str[] = "-100";
//
//
//	int ret = atoi(str);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//拓展:模拟实现atoi函数
//#include <stdio.h>
//#include <stdlib.h>
//
//int MyAtoi(char* str){
//	int flag = 1;
//	int ret = 0;
//	//1.空指针 空字符的判定
//	if (*str == '\0' || str == NULL){
//		return 0;
//	}
//	//2.假如是空格,制表符之类
//	if (isspace(*str)){
//		str++;
//	}
//
//	//3.假如是负数
//
//	if (*str == '-'){
//		flag = -1;
//		str++;
//	}
//	//4,假如是整数
//
//	if (*str == '+'){
//		str++;
//	}
//	//5.正常处理
//	while (*str != '\0'){
//		if (isdigit(*str)){
//			ret = ret * 10 + (*str-'0');
//		}
//		str++;
//	}
//	return ret*flag;
//}
//
//int main(){
//	char str[] = "-1234";
//	int result=MyAtoi(str);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//atoi()函数实现（将字符串转换成整型数）

//原型：int atoi(const char *str);

//头文件：#include <stdlib.h>

//实现atoi()函数开始之前,发现库中提供的atoi函数可以处理许多异常，下面就是库中可以处理的异常：
//
//1.指针为NULL和空字符
//
//2.（ + ， - ）号处理
//
//3.遇到异常字符(空格,制表符等)时的处理方式
//
//4.溢出时处理，分为两部分:
//
//1).上溢出，输出上界
//
//2).下溢出，输出下界
//
//那么对这些异常进行处理就可以完成一个简单atoi()函数了。
////***********************************************************************************************************
//5.单身狗  一个数组中只有两个数字是出现一次,其他所有的的数字都出现了两次,
//编写一个函数,找到两个只出现一次的数字
//1.先完成一个(一个数组中只有1个数字是出现一次,其他所有的的数字都出现了两次)的编程
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//void  findNumber(int arr[],int size){
//	int ret = 0;
//
//	for (int i = 0; i < size; i++){
//		ret = arr[i] ^ ret;
//	}
//	printf("找到了: %d\n",ret);
//}
//
//int main(){
//
//	int arr[] = { 1, 9, 1, 3, 3};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	findNumber(arr, size);
//	system("pause");
//	return 0;
//}
////**********************************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void FindTwoNum(int arr[],int size,int* num1,int* num2){
	//首先找到数组中出现一次的两个数
	int ret = 0;
	for (int i = 0; i < size;i++){
		ret ^= arr[i];
	}
	//找到一个为1 的二进制位
	int pos=0;//pos 位置就是二进制位1 的位置
	for (int pos = 0; pos < 32;pos++){
		if ((ret &(1 << pos)) != 0){
			break;
		}
	}
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size;i++){
		if ((arr[i] & (1<<pos)) == 0 ){
		//根据pos位置分为为0
			*num1 ^= arr[i];
		}
		else {
			//根据pos位置分为1
			*num2 ^= arr[i];
		}
	}
}

int main(){
	int num1 = 0;
	int num2 = 0;
	int arr[] = { 1, 1, 2, 3, 2, 4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	FindTwoNum(arr, size, &num1, &num2);
	printf("找到了: num1=%d num2=%d\n",num1,num2);
	system("pause");
	return 0;

}

//************************文件操作*********************************

//1.打开文件件
//2.读文件
//3.写文件
//4.关闭文件

























