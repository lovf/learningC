//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
#define  _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	int toFind = 4;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int left = 0;
	int sum;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		sum = (left + right) / 2;
		if (toFind > arr[sum]){
			left = sum + 1;
		}
		else
		if (toFind < arr[sum]){
			right = sum - 1;
		}
		else if (toFind = arr[sum]){
			printf("找到了,下标是：%d\n", sum);
			break;
		}
	}
	system("pause");
	return 0;
}