//**变量的使用：**
//全局变量：不在任何的函数中。
//局部变量：在某个函数的内部。
//局部变量的作用域：当前代码块。
//全局变量的作用域：整个工程中。
//局部变量的生命周期：当前代码块。
//全局变量的生命周期：跟随整个程序。

//**变量名：**
//1.变量的使用
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	//变量随着输入的不同时会发生改变
	printf("请输入两个操作数：");
	scanf("%d%d", &sum1, &sum2);
	sum = sum1 + sum2;
	printf("%d\n", sum);
	system("pause");
	return 0;
}
//常量：程序运行过程中的值没有发生改变。