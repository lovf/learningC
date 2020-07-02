//举例:返回两个数字的最大值:
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(int a,int b) {
//	if (a > b){
//		return a;
//	}
//	return b;
//}
//
//int main () {
//	int ret = Max(10, 20);
//	printf("%d\n",ret);
//    system ("pause");
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//举例:返回两个数字的最大值:
//#include <stdio.h>
//#include <stdlib.h>
//
//void Swap1(int* x,int* y) {
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//	
//}
//void Swap2(int x, int y) {
//	int temp = x;
//		x = y;
//		y = temp;
//}
//
//int main () {
//	int a = 10;
//	int b = 20;
//	
//	Swap2(a,b);
//	printf("Swap2::a = %d b = %d\n", a, b);
//
//	Swap1(&a, &b);
//	printf("Swap1::a = %d b = %d\n", a, b);
//    system ("pause");
//    return 0;
//}
//利用传指针的方式,可以做到让函数内部来操作改变其中的变量;
//函数的调用:函数返回来的位置就是函数的调用位置
////假如没有进行传地址的时候,那么紧紧交换的是 x和y的值
//形参是实参的一份拷贝,切记在传参过程中,判定是否传参中会导致发生改变.
// 举例1:写一个函数可以判定一个数字是不是素数.
//返回值是1表示素数,返回值是0表示不是素数.

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int IsPrime(unsigned int num) {  //这块添加无符号类型
//	if (num == 0)
//		return 0;
//	if (num == 1)
//		return 0;
//	for (int i = 2; i < num - 1;i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1; //等循环完成之后 在返回
//}
//
//int main () {
//	int N = 0;
//	printf("请输入要判定的数字: \n");
//	scanf("%d",&N);
//	printf("%d\n",IsPrime(N));
//
//    system ("pause");
//    return 0;
//}
//写一个函数判定是不是闰年.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int judgeLeapYear(int year) {
//	if (((year % 4 == 0) &&(year % 100 !=0) || (year % 400 == 0))) {
//		return 1;
//	}
//	return 0;
//}
//
//int main () {
//	int year = 0;
//	printf("请输入要判定的年份: \n");
//	scanf("%d",&year);
//	printf("%d\n", judgeLeapYear(year));
//    system ("pause");
//    return 0;
//}
//写一个函数,实现一个整形的有序数组的二分查找.

//#include <stdio.h>
//#include <stdlib.h>
//
//int BinarySearch(int arr[],int size,int toFind) {
//	for (int i = 0; i < size;i++) {
//		if (arr[i] == toFind)
//			return i;
//	}
//	return -1;
//}
//
//int main () {
//	int arr[] = { 9, 5, 2, 7 };
//	int size = sizeof (arr) / sizeof(arr[0]);
//	int toFind = 2;
//	int ret = BinarySearch(arr, size, toFind);
//	printf("下标是: %d\n",ret);
//    system ("pause");
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//对于有序数组,使用二分查找(二分查找)

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int size = sizeof (arr) / sizeof(arr[0]);
//	int toFind = 5;
//	int left = 0;
//	int right = size - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//			if (arr[mid] > toFind){
//				right = mid - 1;
//			}
// 			else if (arr[mid] < toFind) {
//				left = mid + 1;
//			}
//			else {
//				printf("找到了,下标是:  %d\n",mid);
//				break;
//			}
//		}
//	
//    system ("pause");
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////#include <stdio.h>
//利用函数调用,实现二分查找
//#include <stdio.h>
//#include <stdlib.h>
//
//int BinarySearch(int arr[],int size,int toFind) {
//	int left = 0;
//	int right = size - 1;
//	while (left < right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > toFind) {
//			right = mid - 1;
//		} else if (arr[mid] < toFind) {
//			left = mid + 1;
//		}  else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	int size = sizeof (arr) / sizeof(arr[0]);
//	int toFind = 6;
//	int ret=BinarySearch(arr, size, toFind);
//	if (ret == -1) {
//		printf("没找到!\n");
//	} else {
//		printf("找到了,下标是: %d\n", ret);
//	}
//    system ("pause");
//    return 0;
//}
//写一个函数,每调用一次这个函数,就会将num值+1;
#include <stdio.h>
#include <stdlib.h>

void Func(int* x) {
	*x += 1;
}


int main() {
	int num = 0;
	Func(&num);
	Func(&num);
	Func(&num);
	printf("%d\n", num);
	system("pause");
	return 0;
}