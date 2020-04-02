//3. 写一个函数，逆序一个字符串和数组

////for 循环实现
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void ReverseStr(char str[], int len){
//	
//	printf("%s", str);
//	
//
//	printf("\n");
//
//    double lengh = len/2;
//	for (int i = 0; i < lengh;i++){
//		char a = str[i];
//		str[i] = str[len - i - 1];
//		str[len - i - 1] = a;
//	}
//	printf("%s\n",str);
//}
//
//void ReverseNum(int arr[],int size){
//
//	for (int i = 0; i < size; i++){
//		printf(" %d ", arr[i]);
//	}
//	printf("\n");
//
//	double lengh = size / 2;
//	for (int i = 0; i < lengh; i++){
//		int  a = arr[i];
//		arr[i] = arr[size - i - 1];
//		arr[size - i - 1] = a;
//	}
//	for  (int i = 0; i < size; i++){
//		printf(" %d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main(){
//	char str[] = "hello bei jing";
//	//在这里完成下面函数，参数自己设计，要求：使用指针
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int size = sizeof(arr)/sizeof(arr[0]);
//	int len = strlen(str);
//	ReverseNum(arr,size);
//	ReverseStr(str,len);
//	system("pause");
//	return 0;
//}
//*******************************************************
//while 循环实现
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReverseStr(char str[], int len){
	
	printf("%s", str);
	printf("\n");
	int left = 0;
	int right = len - 1;
	while (left<right){
		char a = str[left];
		str[left] = str[right];
		str[right] = a;
		left++;
		right--;
	}
	printf("%s\n",str);
}

void ReverseNum(int arr[], int size){

	for (int i = 0; i < size; i++){
		printf(" %d ", arr[i]);
	}
	printf("\n");
	int left = 0;
	int right =size- 1;
	while (left < right){
		char a = arr[left];
		arr[left] = arr[right];
		arr[right] = a;
		left++;
		right--;
	}
	for (int i = 0; i < size;i++){
		printf(" %d ", arr[i]);
	}
	printf("\n");
}
	
int main(){
	char str[] = "hello bei jing";
    //在这里完成下面函数，参数自己设计，要求：使用指针
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int len = strlen(str);
	ReverseNum(arr,size);
	ReverseStr(str,len);
	system("pause");
	return 0;
}

