//****1.字符串左旋  写一个函数,可以实现字符串左旋K个字符
//举例:ABCD  左旋一个字符 BCDA  ABCD  左旋两个字符  CDAB
//实现步骤:
//1.先实现一个函数一次左旋一个字符 2.在实现一个函数一次左旋N个字符

//实现调用N次
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftRotateOne(char str[], int size){
	//如果数组的长度是1 ,则不需要进行旋转
	if (size == 1){
		return str;
	}
	//1.先把0 号元素的下标进行备份
	char tmp = str[0];
	//2.依次将1号元素下标进行左移
	for (int i = 1; i < size; i++){
		str[i - 1] = str[i];
	}
	//3.把刚才备份的元素放到最后一个元素的位置上
	str[size - 1] = tmp;
}

void LeftRotateN(char str[], int size, int n){
	for (int i = 0; i < n; i++){
		LeftRotateOne(str, size);
	}
}

int main(){
	char str[] = "ABCD";
	int n;
	printf("请输入调用的次数: \n");
	scanf("%d",&n);
	LeftRotateN(str, 4, n);
	printf("%s\n", str);
	system("pause");
	return 0;
}
//*************************************************************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void LeftRotateOne(char str[], int size){
//	//如果数组的长度是1 ,则不需要进行旋转
//	if (size == 1){
//		return str;
//	}
//	//1.先把0 号元素的下标进行备份
//	char tmp = str[0];
//	//2.依次将1号元素下标进行左移
//	for (int i = 1; i < size; i++){
//		str[i - 1] = str[i];
//	}
//	//3.把刚才备份的元素放到最后一个元素的位置上
//	str[size - 1] = tmp;
//}
//
//void LeftRotateN(char str[], int size, int n){
//	//如果n这块过大就会导致效率大大降低,因此进行优化避免重复i<n%size
//	for (int i = 0; i < n%size; i++){
//		LeftRotateOne(str, size);
//	}
//}
//
//int main(){
//	char str[] = "ABCD";
//	LeftRotateN(str, 4, 3);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//*****************************************************************************************************


//2.字符串旋转结果.写一个函数,判定一个字符串是否为另一个字符串旋转之后的结果:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//
//void LeftRotateOne(char str[], int size){
//
//	if (size == 1){
//		return ;
//	}
//
//	char tmp = str[0];
//	for (int i = 1; i < size; i++){
//		str[i - 1] = str[i];
//	}
//	str[size - 1] = tmp;
//	
//}
//int RotateCmp(char str1[], char str2[]){
//
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	if (len1 != len2){
//		return 0;
//	}
//	for (int i = 0; i < len1; i++){
//		if (strcmp(str1,str2) == 0){
//			return 1;
//		}
//		LeftRotateOne(str1, len1);
//		
//	}
//	return 0;
//}
//
//int main(){
//
//	char str1[] = "AABCD";
//	char str2[] = "BCDAA";
//	int ret = RotateCmp(str1, str2);
//	
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}

























