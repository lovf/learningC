//异或的应用整理
//例1.不能创建临时临时变量(第三个变量),实现两个数字的交换
#include<stdio.h>
#include <stdlib.h>
int main(){
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}

//例2.给定一个整形数组,里面有何多元素,其中只有一个元素的出现了一次,其他元素都是出现两次,写一个函数把只出现一次的元素找到.例arr[]={1,2,1,2,3}
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int arr[], int size){
//	int ret = 0;
//	for (int i = 0; i < size; i++){
//		ret ^= arr[i];
//	}
//	return ret;
//}
//int main(){
//	int arr[] = { 1, 2, 1, 2, 3 };
//	printf("%d\n", Func(arr, 5));
//	system("pause");
//	return 0;
//}
