//1.查找一个数字,找到返回下标,找不到返回-1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int toFindNumber(int arr[],int size,int toFind){
//	for (int i = 0; i < size;i++){
//		if (arr[i] == toFind){
//			return i;
//		}
//	}
//	return -1;
//}
////时间复杂度一般取最坏的 那种情况
////时间复杂度度是O(N),随着size 的的取值不同,函数基本操作的执行次数不确定
//
//int main(){
//	int arr[] = { 1, 3, 5, 8, 4 };
//	int size = sizeof(arr)/sizeof(arr[0]);
//	int toFind ;
//	printf("请输入要查找的数字: \n");
//	scanf("%d", &toFind);
//	int ret=toFindNumber(arr,size,toFind);
//	printf("找到了,下标是: %d\n",ret);
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//2.冒泡排序
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void BubbleSort(int arr[],int size){
//	for (int i = 0; i < size-1;i++){
//		for (int cur = 0; cur<size - 1 - i; cur++){
//			//降序进行冒泡
//			if (arr[cur] > arr[cur+1]){
//				int temp=arr[cur];
//				arr[cur] = arr[cur+1];
//				arr[cur+1] = temp;
//			}
//		}
//	}
//}
//void Printarray(int arr[], int size){
//	for (int i = 0; i < size; i++){
//		printf(" %d ", arr[i]);
//	}
//	printf("\n");
//}
//int main(){
//	int arr[] = { 9, 5, 4, 7, 1, 6, 0, 3, 8 };
//	int size = sizeof (arr) / sizeof(arr[0]);
//	printf("排序前: \n");
//	Printarray(arr, size);
//
//	BubbleSort(arr, size);
//
//	printf("排序后: \n");
//	Printarray(arr, size);
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************
//3.二分查找(对应的是有序的数组)
//#include <stdio.h>
//#include <stdlib.h>
//
//int  TofindNumber(int arr[],int size,int toFind){
//	int right = size - 1;
//	int left = 0;
//	int mid = (right + left) / 2;
//	while (left < right){
//		int mid = (right + left) / 2;
//		if (arr[mid] > toFind){
//			right--;
//		}
//		else if (arr[mid] < toFind){
//			left++;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int toFind = 5;
//	int ret=TofindNumber(arr,size,toFind);
//	if (ret == -1){
//		printf("没找到\n");
//	}
//	else{
//		printf("下标是: %d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//**************************************************************************************************************
//4.阶乘递归
//#include <stdio.h>
//#include <stdlib.h>
//
//int  Factorial(int N){
//	if (N <= 1){
//		return 1;
//	}
//	return Factorial(N-1)*N;
//}
//int main(){
//	int N = 5;
//	int ret=Factorial(N);
//	printf("%d\n",ret);
//
//	system("pause");
//	return 0;
//}
//5.斐波那契数(生兔子)
#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int N){
	if (N <= 2){
		return 1;
	}
	return Fibonacci(N - 1) + Fibonacci(N - 2);
}
int main(){

	int result=Fibonacci(10);
	printf("%d\n",result);
	system("pause");
	return 0;
}
































































































