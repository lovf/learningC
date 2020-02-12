//*************************************第一节********************************
//Ctrl+F5 完成两件事:
//1.把.c源文件转化成.exe 的可执行程序.(编译)
//2.运行.exe(双击)
//sizeof() 查看一个变量在内存中占几个字节:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h >
//
//int  main(){
//	//字符型
//	char a = 0;
//	//整型
//	int b = 0;
//	//短整型
//	short c = 0;
//	//长整型
//	long d = 0;
//	//单精度浮点型
//	float e = 0.0;
//	//双精度浮点型
//	double f = 0;
//	//长长整型
//	long long g=0.0;
//	printf("char: %d\n", sizeof(a));
//	printf("int: %d\n", sizeof(b));
//	printf("short: %d\n", sizeof(c));
//	printf("long: %d\n", sizeof(d));
//	printf("float: %d\n", sizeof(e));
//	printf("double: %d\n", sizeof(f));
//	printf("long long: %d\n", sizeof(g));
//	system("pause");
//}
//*******************************************************************************************
//重点:
//char 1个字节 8个bite位   
//char 数据范围:0~255   -128~127
//short 2个字节  16个bite位
//short 数据范围:0~65536  -12768~12767
//int 4个字节 32个bite位
//int  数据范围:0~42亿9千万  -21亿~21亿

//创建一个变量的同时等于申请一块地址.
//变量命名: 数字,字母,下划线(数字不能开头)
//*****局部变量和全局变量******
//局部变量:在某个函数中
//全局变量:没在任何函数中
//作用域:那些代码快有效
//生命周期: 什么时候创建,
//*******
//局部变量的作用域和生命周期在当前代码块
//**********************************第二节********************
//常量:程序运行过程中的值没有发生改变.
//C语言中常量的表达形式:
//1.const  
//2.字面值常量
//3.enum 枚举 
//4.宏 #define 
//对以上4中方式定UI常量分别举例
//1.const 定义常量
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	printf("%d\n",a);//10
//	//利用const定义了常量 ,a 的值不能在进行修改
//	////const int a = 10;
//	////a = 20;
//	////printf("%d\n", a);  //此时表达式的值无法运行
//	system("pause");
//	return 0;
//}
//***********************************************************************************************
//2. 字面值常量
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	printf("%d\n",a);//10
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//3.enum 枚举
//#include<stdio.h>
//#include <stdlib.h>
//
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOW,
//};
//
//int main(){
//	printf("%d\n", MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n", UNKNOW);//2
//	system("pause");
//	return 0;
//}
// enum 中的变量打印出来都是整型
//************************************************************************************************
//4.宏 #define
//#include <stdio.h>
//#include <stdlib.h>
//
//# define A 10
//int main(){
//	printf("%d\n",A);
//	system("pause");
//	return 0;
//***************************************************************************************************
//***关键字不能给变量命名***
//例.以下不是关键字的是(D )
//A if  B double C struct  D define  
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int define = 10;
//	printf("%d\n",define ); //10 
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//***常用的转义字符***
//\n 换行 \t (Tab键)类似于水平制表符 \' 表示字符常量 ' .\" 表示一个字符串内部的双引号.\\ 表示一个反斜杠,防止被解为一个转义字符序列  
//举例1.打印 D:\code\\test.c
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	printf(" D:\code\\\\test.c\n");
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//举例2.打印My name is "Beijing"
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	printf("My name is \"Beijing\"\n");
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//举例3.求一个字符的长度.(判定程序的输出)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	printf("%d\n",strlen("abcdef"));
//	printf("%d\n", strlen("\328"));
//	printf("%d\n",strlen("c:\test\328\test.c"));
//    system("pause");
//	return 0;
//}
//**************************************************************************************
//****选择语句(条件语句/分支语句)******
//#include <stdlib.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int choice = 0;
//	printf("你想敲代码吗?请输入你的选择:1.愿意 0.不愿意\n");
//	scanf("%d",&choice);
//	if (choice == 1){
//		printf("会找到好工作\n");
//	}
//	else{
//		printf("失业\n");
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//***********循环语句**************
//while  do while  for 
//1.打印1到10
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10; i++){
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	do {
//		i++;
//		printf("%d\n",i);
//	} 
//	while (i<10);
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//***********函数********
//#include <stdio.h>
//#include <stdlib.h>
//
//int  Add(int x, int y){
//	return x + y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//*********数组******
//核心是[]内的取值,下标从0开始计数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < 5; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************
//****关键字typedef(类似于给函数起一个别名)
//
//#include <stdio.h>
//#include <stdlib.h> 
//
//void func(){
//	int i = 1;
//	i = i + 1;//2  2  2
//	printf("%d\n",i);
//
//}
//
//int main(){
//	func();
//	func();
//	func();
//	system("pause");
//	return 0;
//}
//*********************************************************************************
//static 关键字
#include <stdio.h>
#include <stdlib.h> 

void func(){
	static  int i = 1; //2 3 4  当调用第二个Func()时,static这块不再执行,直接从下一行开始执行
	i = i + 1;
	printf("%d\n", i);
}

int main(){
	func();
	func();
	func();
	system("pause");
	return 0;
}










