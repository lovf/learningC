//指针和指针类型理解
//1.指针
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	//在内存中申请一块空间
//	int a = 10;
//	//代表的是取a的地址，实行的是取&操作符
//	//将a 的地址存放于p中
//	int*p = &a;
//	//打印的是*p指的对应的值
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//总结：指针就是一个变量，用来存放地址的。（存放的值当成地址来处理的）
//指针是用来存放地址的，地址是唯一标示一块地址的空间。
//指针的大小在32位操作平台上是4个字节，在64微操作平台上是8个字节。（1个字节是8个比特位）
//2.指针和指针的类型
//当知道指针类型的时候当指针参与运算的时候就知道指针到底向前或者向后走了多大的距离。
//例1.关于指针类型的意义：
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int n=10;
//	char*p1 = (char*)&n;
//	int* p2 = &n;
//	short*p3 = (short*)&n;
//	double *p4 = (double*)&n;
//
//	printf("%p\n", &n);
//	printf("%p\n", p1);
//	printf("%p\n", p1 + 1);
//	
//	printf("%p\n", p2);
//	printf("%p\n", p2 + 1);
//	
//	printf("%p\n", p3);
//	printf("%p\n", p3 + 1);
//
//	printf("%p\n", p4);
//	printf("%p\n", p4 + 1);
//	printf("%p\n", p4 + 2);
//
//	system("pause");
//	return 0;
//}
//总结：最终的结果都于指针对应的类型有关。
//指针的类型决定了，对指针解引用的时候有多大的权限。（自身能操作几个字节）。
//例如：char*的指针解引用就只能访问一个字节，而int*的指针解引用就能访问4个字节。
//3.指针类型的字节：
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(long long ));//8
	printf("%d\n", sizeof(double));//8

	system("pause");
	return 0;

}