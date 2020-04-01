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


void FindTwoNum(int arr[], int size, int* num1, int* num2){
	//首先找到数组中出现一次的两个数
	int ret = 0;
	for (int i = 0; i < size; i++){
		ret ^= arr[i];
	}
	//找到一个为1 的二进制位
	int pos = 0;//pos 位置就是二进制位1 的位置
	for (int pos = 0; pos < 32; pos++){
		if ((ret &(1 << pos)) != 0){
			break;
		}
	}
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++){
		if ((arr[i] & (1 << pos)) == 0){
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
	printf("找到了: num1=%d num2=%d\n", num1, num2);
	system("pause");
	return 0;

}

