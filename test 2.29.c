//指针数组:这是一个数组,数组中的每一个变量都是指针变量.
//**********************************************************************************************************
//数组指针:这是一个指针,这个指针的指向的是一个长度为4的int数组.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int arr[10] = {0};
//
//	printf("%p\n",arr);// 004FF878
//	printf("%p\n",arr+1); // 指针 004FF87C
//	printf("%p\n",&arr);// 数组指针 004FF878  直接对数组名取地址,得到的是一个数组的指针
//	printf("%p\n",&arr+1); //  数组指针 004FF8A0
//
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
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
//#include <stdio.h>
//#include <stdio.h>
//
//
//void test(int** ptr){
//
//	printf("%d\n",**ptr);
//}
//int main(){
//
//	int n = 10;
//	int* p = &n;
//	int** pp= &p;
//
//	//test(pp);
//	test(&p);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//***********************函数指针**************************
//#include <stdio.h>
//#include <stdio.h>
//
//
//int main(){
//
//	//只有函数名,没写括号,并不是函数调用,此时就是获取到test函数对应的函数指针
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	system("pause");
//	return 0;
//}
//***********************************************************************************************
//#include <stdio.h>
//#include <stdio.h>
//
//
//int test(){
//
//	printf("打印test\n");
//	return 10;
//
//}
//
//int main(){
//
//	//p 变量就是一个函数指针,类型就是 int(*)()
//	/*int(*p)() = test;
//	void(*p2)(int) = test;*/
//	//创建了别名
//	//使用typedef int (* Func1) ()  ;
//	typedef int(*Func1) ();
//	Func1 p = test;
//	//(*p)();//使用函数指针调用函数的时候,可以先解引用,在调用.  也可以直接调用
//	p();
//	/*typedef void(*Func2)(int);
//	Func2 = test;*/
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//函数指针的典型应用场景:
//1.使用转移表的方法简化代码编写
//2.作为回调函数
//*******************************************************************************************
//转移表的使用规则
//1.计算加,减,乘,除.
//法1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int  Add(int x,int y){
//	return x + y;
//}
//int Sub(int x,int y){
//	return x - y;
//}
//int Mul(int x,int y){
//	return x*y;
//}
//int  Div(int x,int y){
//	return x / y;
//
//}
//
//int main(){
//	printf("1. + \n");
//	printf("2. - \n");
//	printf("3. * \n");
//	printf("4. / \n");
//	printf("请输入你的选择: \n");
//	int choice = 0;
//	scanf("%d",&choice);
//
//	int ret=0;
//	if (choice == 1){
//		ret = Add(20,10);
//	}
//	else if (choice == 2){
//		ret = Sub(20, 10);
//	}
//	else if (choice == 3){
//		ret = Mul(20, 10);
//
//	}
//	else if (choice == 4){
//		ret = Div(20, 10);
//	}
//
//	printf("ret=%d\n",ret);
//
//	system("pause");
//	return 0;
//
//}
//一个代码中太多switch if else for 越多显得代码越繁琐.
//法2.利用转移表法
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int  Add(int x,int y){
//	return x + y;
//}
//int Sub(int x,int y){
//	return x - y;
//}
//int Mul(int x,int y){
//	return x*y;
//}
//int  Div(int x,int y){
//	return x / y;
//
//}
//
//int main(){
//	int choice = 0;
//	printf("1. + \n");
//	printf("2. - \n");
//	printf("3. * \n");
//	printf("4. / \n");
//	printf("请输入你的选择: \n");
//	
//	scanf("%d",&choice);
//	typedef int(*Func)(int ,int);
//	Func table[] = { Add, Sub, Mul, Div };
//	int ret = table[choice-1](20,10);
//	printf("ret=%d\n",ret);
//
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//回调函数的使用
//1.冒泡排序
//法1.写一个函数,同时支持升序和降序
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void BubbleSort(int arr[], int size, int Asc){
//	for (int bound = 0; bound < size; bound++){
//		for (int cur = size - 1; cur > bound; cur--){
//			if (Asc == 1){
//				if (arr[cur - 1] > arr[cur]){
//					int temp = arr[cur - 1];
//					arr[cur - 1] = arr[cur];
//					arr[cur] = temp;
//				}
//				else if (Asc == 0){
//					if (arr[cur - 1] < arr[cur]){
//						int temp = arr[cur - 1];
//						arr[cur - 1] = arr[cur];
//						arr[cur] = temp;
//					}
//				}
//			}
//		}
//	}
//}
//
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	printf("请输入选择升序还是降序:1.升序0.降序 \n");
//	printf("***********************************\n");
//	int num = 0;
//	scanf("%d", &num);
//	BubbleSort(arr, 4, num);
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//****************************************************************************************************
//法2.利用回调函数
//
//#include <stdio.h>
//#include <stdlib.h>
//
////cmp描述了比较规则: 例如是升序排序的话,如果第一个参数小于第二个参数,返回1,否则返回0
//typedef int(*Cmp)(int ,int );
//void BubbleSort(int arr[], int size,Cmp cmp){
//	for (int bound = 0; bound < size; bound++){
//		for (int cur = size - 1; cur > bound; cur--){
//			if (cmp(arr[cur - 1] , arr[cur]) == 0){
//				int temp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = temp;
//			}
//		}
//	}
//}
//int Less(int x,int y){
//
//	return x < y ?  1:0;
//
//}
////int greater(int x,int y){
////	return x > y ? 1 : 0;
////
////}
//
//
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	
//	BubbleSort(arr, 4,Less);
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************************
//重要习题:
#include <stdio.h>
#include <stdlib.h>

int main(){
	/////////
	//第一组:
	///////
	//int arr[] = { 1, 2, 3, 4 };
	//printf("%d\n",sizeof (arr));// 16 计算一个整型数组所占的字节数
	//printf("%d\n", sizeof (arr+0));//4 指针 int*
	//printf("%d\n", sizeof (*arr)); //4 arr隐式转为指针,指向首元素的地址.在对其进行解引用得到一个int 
	//printf("%d\n", sizeof (arr + 1));//4 数组名参与运算的时候,隐式转化为指针
	//printf("%d\n", sizeof (arr[1]));// 4 int
	//printf("%d\n", sizeof (&arr ));// 4 数组名取地址,成为数组指针int(*)[],只要是指针在32位操作系统下占4个字节

	//printf("%d\n", sizeof (*&arr)); // 16 &arr数组指针,然后在对其进行解引用
	//printf("%d\n", sizeof (&arr+1));//数组指针加1,仍然是数组指针
	//printf("%d\n", sizeof (&arr[0] ));//4  得到一个int*
	//printf("%d\n", sizeof (&arr[0]+1));// 4 int*


	////////////
	// 第二组
	////////////
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", sizeof (arr));// 6 查看字符数组所占的字节数
	//printf("%d\n", sizeof (arr+0));// 4 数组名参与运算会转化成指针,指针在32位操作系统下占4个字节
	//printf("%d\n", sizeof (*arr));// 1 数组名不能取*,但是指针可以,arr隐式指向首元素的地址,在取*就是进行解引用得到一个字符a(char)
	//printf("%d\n", sizeof (arr[1]));//1 指向一个字符b(char类型)
	//printf("%d\n", sizeof (&arr));// 4 数组名取地址转化为数组指针,只要是指针在32位操作系统下占4个字节
	//printf("%d\n", sizeof (&arr+1));//4 同上
	printf("%d\n", sizeof (&arr[0]+1));// 4 char* 









	system("pause");
	return 0;
}




























































































































































































































































