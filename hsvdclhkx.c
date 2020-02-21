//**在一个数组中找一个数字, 并且返回下标**

//#include <stdio.h>
//#include <stdlib.h>
//
//void  FindNumber(int arr[], int size, int toFind){
//	for (int i = 0; i < size; i++){
//		if (arr[i] == toFind){
//			printf("找到了,下标是: %d\n", i);
//		}
//	}
//}
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	int toFind = 2;
//	int size = sizeof(arr) / sizeof(arr[0]);// 数组的大小
//	FindNumber(arr, size, toFind);
//	system("pause");
//	return 0;
//}
//**********************************************************************************************

//**拓展1 : 写一个函数, 在一个有序数组中找一个数字, 找到返回下标, 没找到返回没找到.(二分查找)**
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int toFind = 10;
//	//int toFind = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;// 数组的大小
//	//[left,right]  数组下标大小的区间范围
//	int mid;
//	while (left <= right){
//		mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else {
//			printf("找到了,下标是: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("没找到\n");
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************************

//**拓展2.写一个函数, 在一个有序数组中找一个数字, 找到返回下标.找不到返回 - 1.(二分查找)**
#include<stdio.h>
int FindNumber(int arr1[], int size, int Tofind) {
	int left = 0;
	int right = size - 1;
	int i;
	int mid;
	while (left <= right){
		mid = (right + left) / 2;
		if (arr1[mid] > Tofind){
			right = mid - 1;
		}
		else if (arr1[mid] < Tofind){
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main(){
	int mid;
	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int ret = FindNumber(arr, 8, 8);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//**重点：在传参的过程中，应该在函数的外部算出元素的个数，然后在以参数的形式传给函数**
//******************************************************************************************
//**关于一维数组的总结：**
//1.数组的创建, []中要给一个常量，不能使用变量。
//2.数组的初始化, 初始化和赋值不相同
//int arr1[] = { 1, 2, 3, 4 }
//int arr2[4] = { 1, 1, 2, 3 }
//char arr3[] = { 'a', 'b', 'v', 'c' }
//char arr4[] = "abnc"
//**3.数组的使用都是通过下标来访问的，下标从0开始
//4.数组的大小可以通过计算得到  sizeof, strlen**
//字符串(\0结尾)的大小用strlen函数求解
//字符数组的大小用sizeof来求解
//**5.数组作为函数参数的时候，不会把整个数组传递过去，数组作为函数参数时，不会把整个数组传递过去。实际上只把数组的首元素的地址传递过去.**
//即使写成数组的形式int arr[], 但它依然是一个指针int*arr.
//**6.数组传参必须要知道数组元素的个数，然后在以参数的形式传给函数。**
//
//举例3.传参过程中没有将长度传递给函函数
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void Func(int arr[]){
//	printf("%d\n", sizeof (arr) / sizeof(arr[0]));
//}
//int main(){
//	int arr[] = { 1, 3, 4, 5 };
//	Func(arr);
//	printf("%d\n", sizeof (arr) / sizeof(arr[0]));
//	system("pause");
//	return 0;
//}
