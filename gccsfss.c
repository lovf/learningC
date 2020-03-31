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
//
//
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
//2.字符串右旋
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RightRotateOne(char str[], int size){
	if (size == 1){
		return str;
	}
	//这块等于是给旋转的字符串首位置先给标记一下,假如没有标记那么最后在直接赋值就会导致存在错误
	char tmp = str[size - 1];
	for (int i = size; i >= 0; i--){
		str[i - 1] = str[i - 2];
	}
	str[0] = tmp;
}

void RightRotateN(char str[], int size, int n){
	for (int i = 0; i < n; i++){
		RightRotateOne(str, size);
	}
}

int main(){

	char str[] = "ABCD";
	int len = strlen(str);
	RightRotateN(str, len, 2);
	printf("%s\n", str);
	system("pause");
	return 0;
}