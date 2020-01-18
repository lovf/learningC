// 例3.写一个函数，实现一个整形有序数组的二分查找
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
#include <stdio.h>
#include <stdlib.h>

void Func(int x){
	//x=&num;*x是对x的解引用,找到x所对的值得大小
	x += 1;
}
int main(){
	int num = 0;
	Func(num);
	//Func(num);
	printf("num=%d\n", num);
	system("pause");
	return 0;
}
//结果是0.没有起到调用一次就加1的效果,实参本质没有发生改变.
//*******形参是实参的拷贝.要改变一个函数外部变量,必须通过参数传指针的方式修改函数的外部变量.
