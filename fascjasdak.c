//****************************一维数组传参************************************
//1.在一个数组中查找一个数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[4] = { 9, 5, 2, 7 };
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (arr[i] != Tofind){
//			continue;
//		}
//		printf("下标是: %d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//2.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Func(int arr[], int size){
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (arr[i] != Tofind){
//			continue;
//		}
//		return i;
//	}
//}
//
//int main(){
//	int arr[4] = { 9, 5, 2, 7 };
//
//	printf("%d\n", Func(arr, 4));
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************8
//
//***************************二维数组传参的三种形式********************************
//1.打印一个二维数组
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//长度为3,每个元素的长度是4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	for (int row = 0; row < 3;row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//法1.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Printarr(int arr[][4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	//长度为3,每个元素的长度是4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//法2.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Printarr(int arr[3][4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	//长度为3,每个元素的长度是4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//法3.
//#include <stdio.h>
//#include <stdlib.h>
//
////数组函数传参的时候会隐式转成指针,这个指针就是指向首元素的指针
////当前参数是一个二维数组,首元素是一个int[4]
////首元素的指针就是int (*)[4] 数组指针
//void Printarr(int (*arr)[4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	//长度为3,每个元素的长度是4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************88
//
//int arr[5] //属于普通数组
//int* arr2[5] //指针数组
//int(*p)[10] //数组指针
//int(*p[10])[5] //长度为10个元素的指针数组,里面的每一个元素都是一个数组指针,这个数组指针指向长度为5个元素的int数组
//
//****************************一级指针传参*********************************
//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int* arr, int size){
//	int i = 0;
//	for (i = 0; i < size;i++){
//		printf(" %d ",*(arr+i));
//	}
//	printf("\n");
//
//}
//int main(){
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//把一级指针p传给函数
//	Print(p,10);
//	system("pause");
//	return 0;
//
//}
//*********************************************************************************************************
////*********************二级指针传参***************************
#include <stdio.h>
#include <stdio.h>


void test(int** ptr){

	printf("%d\n",**ptr);
}
int main(){

	int n = 10;
	int* p = &n;
	int** pp= &p;

	//test(pp);
	test(&p);
	system("pause");
	return 0;
}
//*********************************************************************************************************



