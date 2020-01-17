//********************函数****************
//举例1.写一个函数,返回两个数的最大值
//#include<stdio.h>
//#include <stdlib.h>
//
//int Max(int a, int b){
//	if (a > b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//	int main(){
//		int x = 10;
//		int y = 20;
//		int ret;
//		ret = Max(x, y);
//		printf("%d\n",ret);
//		system("pause");
//		return 0;
//	}
//************************************************************************
//举例2.写一个函数,交换两个数
//#include<stdio.h>
//#include <stdlib.h>
//
//void  Swap(int* a, int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	int x = 10;
//	int y = 20;
//	Swap(&x,&y );
//	printf("x=%d y=%d\n",x,y);
//	system("pause");
//	return 0;
//}
//形参与实参的关系:
//形参是实参的一份拷贝.(副本)真正起作用的是实参.
//**************************************************************************
//举例3.交换两个数
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int temp = x;
//	x = y;
//	y = temp;
//	printf("x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
//****************************************************************
//引入了指针变量进行交换
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int* a=&x;
//    int* b=&y;
//	//a等于x的地址,*就是间接访问操作符,*a就是对a的解引用,找到a所对应的变量大小
//	//*a就是根据x的地址找到了x这个变量
//	//*a和x是等价的
//	//*b和y是等价的
//	int temp = *a;
//	*a= *b;
//	*b = temp;
//	printf("x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
//**********************************************************************
#include<stdio.h>
#include <stdlib.h>

int main(){
	int a = 10;
	int b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}
//***************************************************************************
