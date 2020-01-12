//关于类型查看字节
#include<stdio.h>
#include <stdlib.h>
int main(){
	//创建一个变量类似于申请一块内存空间
	//变量命名：数字 字母 下划线（其中数字不能开头）
	//字符变量
	char a = 0;
	//短整形
	short b = 0;
	//整形变量
	int  c = 0;
	//长整形变量
	long d = 0;
	//长长整形变量
	long long e = 0;
	//单精度浮点型变量
	float f = 0.0;
	//双精度浮点型变量
	double g = 0.0;
	//sizeof 查看一个变量在内存中占几个字节
	//%d 为格式化字符串
  //按照十进制有符号的方式打印一个整数
	printf("char:  %d\n", sizeof (a));
	printf("short:  %d\n", sizeof (b));
	printf("int :  %d\n", sizeof (c));
	printf("long:  %d\n", sizeof (d));
	printf("long long :  %d\n", sizeof (e));
	printf("float:  %d\n", sizeof (f));
	printf("double:  %d\n", sizeof (g));
	system("pause");
	return 0;
}