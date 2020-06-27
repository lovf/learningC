//lesson1 :
//常量:
//1.关键字 const
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	////a 的修改是发生在运行时  Ctrl+F5 : 执行两个过程 1.编译过程(把.c文件转化成--->.exe文件} 2.生成过程(双击.exe) 
//	//int a = 10;
//	//printf("%d\n",a);
//	//a = 20;
//	//printf("%d\n",a);
//
//	const int a = 10;
//	printf("%d\n", a);
//	a = 20; // 因为此时a的前面有const 文件 因此该值不能在运行时进行修改
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}
//关键字:C语言中有一个特殊含义  
//关键字不能作为变量名

//if  double   struct  define(不是关键字)

//c 语言中表示常量的方式:
//1.const 
//2.字面值常量('a',10,10.0)
//3.枚举类型

//#include <stdio.h>
//#include <stdlib.h>
//
//
//enum Sex {
//	MALE,
//	FEMALE,
//	UNKNOW,
//
//
//
//};
//
//int main() {
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",UNKNOW);
//
//
//	system("pause");
//	return 0;
//}

//4.宏   #define 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define A 20
//
//int main() {
//
//	printf("%d\n",A);
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//字符: 
//转义字符: 
//"\n"  printf("\n"): 表示换行
//"\t"  printf("\t"): 表示水平制表符
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main() {
//	//my name is "zhangsan" 
//	printf("My name is \"zhangsan\"\n"); // \"zhangsan\" 转义
//	printf("D:\\test.txt\n"); //\\ 表示一个反斜杠
//	system("pause");
//	return 0;
//}
//笔试题
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	printf("%d\n", strlen("\328"));
//
//	system("pause");
//	return 0;
//}
  
//一定要注意: 与反斜杠结合在一起的时候防止变成转义字符

//选择语句 条件语句  分支语句  

//#define _CRT_SECURE_NO_WARNINGS //宏定义必须放到最上方
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	printf("1.认真敲代码.2.回家 \n");
//	int  choice = 0;
//	scanf("%d",&choice);
//	if (choice == 1) {
//		printf("敲代码\n");
//	} else {
//		printf("回家");
//	}
//	system("pause");
//	return 0;
//}


//循环语句

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	// 打印1-10
//	int num = 1;
//	//条件成立就执行循环
//	//条件不成立,结束循环
//	while (num <= 10) {
//		printf("%d\n",num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//函数: 一个代码片段,可以重复在许多地方使用
//函数定义:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////int : 函数的返回值类型
////Add 函数名
////int y, int x 表示函数参数
////{ } 表示函数体
//int Add(int x,int y) { //函数的命名
//	int sum = x + y;
//	return sum;//表示函数返回了.(函数结束了)
//}                                                                     
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b); //函数的调用/使用
//	printf("%d\n",ret);
//
//	system("pause");
//	return 0;
//}
//数组 : 帮我们批量创建一组相同类型的变量 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////int : 函数的返回值类型
////Add 函数名
////int y, int x 表示函数参数
////{ } 表示函数体
//int Add(int x,int y) { //函数的命名
//	int sum = x + y;
//	return sum;//表示函数返回了.(函数结束了)
//}                                                                     
//
//int main() {
//////如果初始化的时候数字个数比较少,把前几个变量设置初值了,那么后面的初值的变量都是初始值为 0;
////	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	//数组的使用核心操作: [] 取下标  
////	//数组下标从0开始 arr[10]下标越界 数组下标越界是一种典型的错误,假如越界那么打印一个随机数
////	printf("%d\n",arr[10]);
//
//  //字符串是一种特殊的字符数组,这个字符数组一定是以'\0'结尾的,如果一个字符数组没有包含\0那么就不是一个字符串
//	//'\0'表示ASCII 码代表的数字为零的字符
//	//字符数组:
//	char arr1[10] = { 'a', 'b', 'c', 'd' };
//	//字符串数组:
//	char arr2[10] = "abcd";
//
//
//	system("pause");
//	return 0;
//}

//操作符:

//常见关键字: 

//关键字 typedef : 给一个变量起一个别名 
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef  unsigned int  uint; //给一个变量起一个别名 
//
//int main() {
//	//无符号整型
//	unsigned int  num1 = 10;
//	uint num2 = 1;
//
//	system("pasue");
//	return 0;
//}
//关键字: static  : 在C语言中有三种用法

//1.修饰一个局部变量:修改生命周期为整个整个程序.
//2.修改一个全局变量:修改了变量的作用域.只能在当前文件中访问,不能跨文件访问
//3.修饰一个函数时.和修饰全局变量是一样的,修改了作用域为当前文件中访问.


//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Func() {
//	static int x = 1;//局部变量的生命周期跟随当前代码块  //当第二次调用的时候的x 会重新赋值是1,已经不再是之前的1 了
//	x = x + 1;
//	printf("%d\n",x); 
//}
//
//
//int main() {
//	Func();//2
//	Func();//2
//	Func();//2
//	system("pause");
//	return 0;
//}
//
#include <stdio.h>
#include <stdlib.h>


void Func() {
	static int x = 1;//第二次调用的时候,不经过这块
	x = x + 1;
	printf("%d\n", x);
}
// 当我们访问另一个文件中的全局变量的时候,需要加上变量声明

extern int global;

int main() {
	printf("%d\n",global);
	system("pause");
	return 0;
}

//无法解析的外部符号的错误: 
//代表 连接错误 只有声明,没有定义









































