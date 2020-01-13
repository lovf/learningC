//**变量的使用：**
//全局变量：不在任何的函数中。
//局部变量：在某个函数的内部。
//局部变量的作用域：当前代码块。
//全局变量的作用域：整个工程中。
//局部变量的生命周期：当前代码块。
//全局变量的生命周期：跟随整个程序。

//**变量名：**
//1.变量的使用
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	//变量随着输入的不同时会发生改变
//	printf("请输入两个操作数：");
//	scanf("%d%d", &sum1, &sum2);
//	sum = sum1 + sum2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//常量：程序运行过程中的值没有发生改变。
//c语言中常量分为以下几种：
//1.const 修饰的常变量
//2.字面值常量   （0.0，10，'a',"abcd"）
//3.enum 枚举
//4. 宏  define
//例1.值发生改变
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	//a的修改是发生运行的过程
//	int a = 10;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//
//}
//例2.const 定义常量
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	 const int a = 10;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//利用了const 对a进行了定义，此时a已经时常量无法发生修改。
//例3. enum 枚举实现常量的表示
//#include<stdio.h>
//#include <stdlib.h>
////枚举里面是按常数依次递增变化
//enum  Sex {
//	MALE,
//    FEMALE,
//	UNKNOW
//};
//int  main(){
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOW);
//	system("pause");
//	return 0;
//}
//例3.宏  #define 来定义常量
//#include<stdio.h>
//#include <stdlib.h>
//#define A 10
//int main(){
//
//	printf("%d\n", A);
//	system("pause");
//	return 0;
//}
//**常量均不能修改**,因为此时常量的大小已经确定
///////////////////////////////////////////////////////
//**转义字符**
// \n:代表换行 \t (Tab健)：类似于水平制表符  、\":表示字符串内部的双引号  \\:用于表示一个反斜杠
//例1.在屏幕上打印一个目录：c:\code\test.c
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//   \\:用于表示一个反斜杠
//	printf("c:\\code\\test.c");
//	system("pause");
//	return 0;
//}
//例2.打印 My name is "chen"
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//\":表示字符串内部的双引号
//	printf("My name is \"chen\"\n");
//	system("pause");
//	return 0;
//}
//例3.在屏幕上打印一个单引号和双引号
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//
//	printf("%c\n",'\'');
//	printf("%s\n", "\"");
//	system("pause");
//	return 0;
//
//}
//笔试题
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	printf("%d\n", strlen("\328"));
//	system("pause");
//	return 0;
//}
//函数的调用实现相加减
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int Add(int a, int b){
//	return a + b;
//}
//int Sub(int x, int y){
//	if (x > y){
//		return x - y;
//	}
//	else{
//		return y - x;
//	}
//}
//	int main(){
//调用Add函数完成加法
//		printf ("%d\n",Add(10, 20));
//调用Sub函数完成减法
//		printf ("%d\n",Sub(10, 20));
//		system("pause");
//		return 0;
//}
//**选择语句**
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int a,b,z;
//	printf("请输入两个数字： \n");
//	scanf("%d%d", &a, &b);
//	if (a > b){
//		z = a;
//	}
//	else{
//		z = b;
//	}
//	printf("%d\n", z);
//		system("pause");
//	return 0;
//}
//**循环语句**
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int i=1;
//	//如果条件成立，就执行循环体代码
//	//如果条件不成，就结束循环
//	while (i <= 100){
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//**函数**
//#include<stdio.h>
//#include <stdlib.h>
//int Add(int a, int b){
//	return a + b;
//}
//int main(){
//	int c = Add(10, 20);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//**数组**
//例1.
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	//arr代表数组名  [10]代表数组一共有10个数字分别从1到9
//	int arr[10] = { 1, 2, 3, 4, 5, 6 };
//数组使用的核心是[]取下标操作
//	//如果初始值的数字比较少，把前几个变量的初始值设了，后面的剩下的变量初始值则变为0；
//	printf("%d\n", arr[4]);
//	system("pause");
//	return 0;
//}
//*分清楚字符数组arr[]={'a','b','c'}*字符串数组arr[]="abcd"
//例2.
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[7] = {1,2,3,4,5,6,7};
//	int i = 0;
//	for (i = 0; i < 7; i++){
//		printf("%d\n", arr[i]);
//	}
//		system("pause");
//		return 0;
//	}
//关键字；
//1.typedef
//#include <stdio.h>
//#include <stdlib.h>
//typedef unsigned int unit ;
//int main(){
//	unsigned int num2 = 10;
//	//给 unsigned int 另起的别名叫unit
//	unit num1 = 5;
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//2.在c语言中 static用来修饰变量和函数的
//1.修饰局部变量（修改了生命周期就变成整个程序了）
//2.修饰全局变量（修改了变量的作用域，只能在当前作用域中访问，不能跨文件访问）
//3.修饰一个函数和修饰全局变量是一样的，修改了作用域为当前文件中访问。
//#include<stdio.h>
//#include <stdlib.h>
//void Fun(){
//	int i = 1;
//	i = i + 1;
//	printf("%d\n", i);
//}
//int main(){
//	Fun();
//	Fun();
//	Fun();
//	system("pause");
//	return 0;
//}
//***************
#include<stdio.h>
#include <stdlib.h>
void Fun(){
	static int i = 1;
	i = i + 1;
	printf("%d\n", i);
}
int main(){
	Fun();
	Fun();
	Fun();
	system("pause");
	return 0;
}
 