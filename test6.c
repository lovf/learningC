//*******************************************************************
//*******给定一个数组，查找某个数是否在数组中存在******
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[4] = {9,5,2,7};
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (Tofind == arr[i]){
//			printf("找到了！下标是：%d\n",i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************
//**给定一个有序的数组，查找某个数字是否在该数组中**（利用二分法/折半查找法）使用条件是该数组必须是有序数组*******
#include<stdio.h>
#include <stdlib.h>

int main(){
	int i=0;
	int arr[11] = { 0,1, 2, 3, 4,5, 6, 7, 8 ,9,10};
	int Tofind = 4;
	//字符数组的区间为[left,right]
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2; //mid 一定要放在循环中,每一次mid都是比较之后需要更新
		if (Tofind > arr[mid]){
		left = mid + 1;
		}
		else 
		if (Tofind < arr[mid]){
			right = mid - 1;
		}
		else 
		if(Tofind == arr[mid]) {
			printf("找到了！下标是： %d\n",mid);
			break;
		}
	}
	if (left>right){
		printf("没找到\n");
	}
	system("pause");
	return 0;
}
//总结：利用二分法查找（折半法）进行查找时该数组必须是有序数组。升序或者降序。利用该方法查找能快速提高效率
