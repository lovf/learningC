//实现两个数相加，乘
//#define 定义常量和宏
/*1.定义一个常量
2.借助宏来重定义以下类型的别名
3.宏还能影响到编译器的行为
4.宏还能定义一个代码的片段（类似一个函数的效果）
所有宏的后面均不加(;)宏的本质类似于文本的替换
*/
//实现两个数的相加
/*efine Add(x,y)  ((x)+(y))
#include <stdio.h>
int main(){
	int  x = 1;
	int  y = 2;
	int sum = Add(x, y);
	int ret = 10 *Add (x, y);
	printf("%d\n", sum);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
*/
/*#include<stdio.h>
int main(){
	int a = 1;
	int b = 2;
	int sum = a + b;
	int ret = 10*(a+b);
	printf("%d\n", sum);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
*/
#include<stdio.h>
int Sum(int a, int b){
	int sum = a + b;
	int ret = 10 * (a + b);
	printf("%d\n", sum);
	printf("%d\n", ret);
}
int main(){
	int x= 1;
	int y = 2;
	Sum(x, y);
	system("pause");
	return 0;
}