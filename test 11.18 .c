//********************数组************************
//1.数组创建和初始化
//数组创建:[]中要给常量才可以,不能使用变量
//   //常量的表达形式
//   //1.字面值常量
//	//2.const 修饰的常量
//	//3.enum 枚举
//	//4.#define 宏
//1.字面值常量
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	// 字面值常量 10
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//3.enum 枚举
//#include <stdio.h>
//#include <stdlib.h>
////enum 枚举
//enum  {
//	SIZE=10 ,
//};
//
//int main(){
//	
//	int arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//4.#define 宏
//#include <stdio.h>
//#include <stdlib.h>
//
//#define A 10
//int main(){
//	 int arr[A] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	 for (int i = 0; i <= 9; i++){
//		 printf("%d\n",arr[i]);
//	 }
//	 system("pause");
//	 return 0;
//}
//****************************************************************************************
//2.const 修饰的常量(这块定义常量是不成立的)
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	const int a = 10;
//	int arr[a] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//数组的初始化和赋值
//初始化:在创建变量的时候,去设定数值.int arr[10]={0}; 
//赋值:变量已经创建完了,再去设定数值.
//普通数组只能使用{}进行初始化,字符数组除了使用{},还可以使用""进行初始化,这时类似于一个字符串
//字符串一定是以\0结尾的,计算长度是遇到\0就结束(不计算\0).strlen
//字符数组计算长度(占内存的字节数):算\0
//1.strlen函数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));//15结果错误,因为数组中不清楚\0到底在哪个位置,出现未定义行为
//	printf("%d\n", strlen(arr2));//3
//	system("pause");
//	return 0;
//}
//printf("%d\n", strlen(arr1));这个情况属于未定行为.因为无法找到下标为\0的
//****************************************************************************************
//2.sizeof函数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n",sizeof(arr1));//3
//	printf("%d\n",sizeof(arr2));//4必须算上\0字符串都是以\0结束的
//	system("pause");
//	return 0;
//}
//未定义行为:数组下标越界只是未定义行为中的一种情况.
//一维数组的使用:
//例1.打印一组数字
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	for (int i = 0; i < 4; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//一维数组在内存中的使用:
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	for (int i = 0; i < 4; i++){
//		printf("%p\n",&arr[i]);//每一个地址大小相差4
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr[] = { 1, 2, 3, 4 };
//	for (int i = 0; i < 4; i++){
//		printf("%p\n", &arr[i]);//每一个地址大小相差1
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//二维数组:
//二维数组的创建和初始化
//数组在定义的时候永远只有第一个[]的可以省略 ,第二个一定不能省略 int[][4]
//例1.打印一个二维数组
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	      //长度为3的一维数组,每个元素的长度为4
//	int arr[3][4] = { 
//	{ 1, 2, 3, 4 },
//	{ 5, 6, 7, 8 },
//	{ 9, 10, 11, 12 }, 
//	};
//	for (int i = 0; i < 3; i++){
//		for (int j = 0; j < 4; j++){
//			printf("%d",arr[i][j]);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//		for (int i = 0; i < 3; i++){
//			for (int j = 0; j < 4; j++){
//				printf("%d",arr[i][j]);
//				printf(" ");
//			}
//			printf("\n");
//		}
//		system("pause");
//		return 0;
//}
//**********************************************************************************
//逗号表达式:结果就是最后一个元素的值
//int a=(1,2)   a的结果为2
//**********************************************************************************
//数组作为函数参数时会隐试转化成指针
//例1,计算数组的字符长度
//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
// 
////使用void ,不会存在返回值,直接打印
// void  Func(int arr[] ,int size){
//		printf("%d\n", sizeof(arr) / sizeof(arr[0]));//结果是1 因为数组在作为参数时会隐式转化成指针,指向首元素的地址
//	}
//int main(){
//	int arr[4] = { 9, 7, 2, 5 };
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//结果是4 
//	Func(arr,4);
//	system("pause");
//	return 0;
//}
//************************************************************************************
//二维数组的使用:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int arr[3][4] = {0};
//	int i;
//	int j;
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			arr[i][j] = i * 4 + j;
//		}
//	}
//		for (i = 0; i < 3; i++){
//			for (j = 0; j < 4; j++){
//				printf("%d",arr[i][j]);
//				printf(" ");
//			}
//			printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int arr[3][4] = {0};
//	int i;
//	int j;
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			arr[i][j] = i * 4 + j;
//			printf("%d", arr[i][j]);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************
//二维数组在内存中的使用:与一维数组在内存中的使用完全相同
//冒泡排序
//1.满足升序并且是从角标大的往角标小的依次进行比较
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void BubbleSort(int arr[],int size){
//     //一共进行比较的趟数
//	for (int bound = 0; bound < size; bound++){
//		//先从后面往前进行比较
//		for (int cur = size - 1; cur > bound; cur--){
//			//比较相邻元素,如果不符合升序规则
//			//就交换两个元素
//			if (arr[cur - 1] > arr[cur]){
//				int temp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = temp;
//			}
//		}
//	}
//}
//int main(){
//	int arr[4] = { 9, 3, 1, 6 };
//	BubbleSort(arr, 4);
//	for (int i = 0; i < 4; i++){
//		printf("%d",arr[i]);
//		printf(" ");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//满2.足降序并且是从角标小的的往角标大的依次进行比较
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BubbleSort(int arr[],int size){
     //一共进行比较的趟数
	for (int bound = 0; bound < size; bound++){
		//先从后面往前进行比较
		for (int cur = 0; cur <size; cur++){
			//比较相邻元素,如果不符合降序规则
			//就交换两个元素
			if (arr[cur + 1] > arr[cur]){
				int temp = arr[cur + 1];
				arr[cur + 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}
int main(){
	int arr[4] = { 9, 3, 1, 6 };
	BubbleSort(arr, 4);
	for (int i = 0; i < 4; i++){
		printf("%d",arr[i]);
		printf(" ");
	}
	printf("\n");
	system("pause");
	return 0;
}
//*************************************************************************************
//三子棋游戏：