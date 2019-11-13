//字符串从两端移动,向两端汇聚
#include<stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
int main(){
	//初始化的字符串
	char arr1[] = "welcome to you";
	char arr2[] = "**************";
	//左右两端字符的范围[left,right]
	int left = 0;
	int right = strlen(arr1) - 1;
	//满足该条件时，依次按照角标进行相应赋值转换
	while (left <= right){
		//Sleep()在windows.h中。单位是毫秒
		Sleep(1000);
		//左右赋值的过程
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	system("pause");
	return 0;
}



