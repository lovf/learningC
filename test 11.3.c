//**************#define 定义常量和宏：*********************
//***使用宏
//1.定义一个常量
//2.借助宏来给变量重新命名
//3.宏还能影响到编译器的行为
//4.宏还能定义一个代码片段(类似于一个函数)

//例1.定义常量
//#include<stdio.h>
//#include <stdlib.h>

//#define A 10 //所有的宏后面都不加 ;
//#define B 20
//int main(){
//	int C;
//	C = A + B;
//	printf("%d\n", A);
//	printf("%d\n", B);
//	printf("%d\n", C);
//	system("pause");
//	return 0;
//}
//例2.定义一个别名
//#include<stdio.h>
//#include <stdlib.h>

//#define  unit  unsigned int 
////typedef  unsigned  int 
//例3.定义一个函数
//#include<stdio.h>
//#include <stdlib.h>
//#define Add(x,y)  (x+y) //利用宏定义了一个代码片段
//int main(){
//	int sum=Add(1, 2);
//	printf("%d\n", sum);
//	int sum1 = 10 * Add(1, 2);
//	printf("%d\n", sum1);
//	system("pause");
//	return 0;
//}
//**指针**
//#include<stdio.h>
//#include<stdlib.h>

//int main(){
//	int x = 10;
//	int* p = &x;
//	//*是一个间接访问操作符，也就是解引用
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//************************结构体*************************
//#include<stdio.h>
//#include <stdlib.h>

////struct student 代表结构体的类型
//struct student {
//	//结构体的成员
//	char name[10];
//	int age;
//	int score;
//};
//int main(){
//	//struct student 代表结构体的类型  s代表结构体的变量
//	struct student s = { "zhangsan", 20, 78 };
//	//. 代表的是对结构体的成员访问
//	printf("name= %s  age= %d  score= %d\n", s.name ,s.age, s.score);
//	system("pause");
//	return 0;
//}
//*************************分支和循环结构*************************
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int a ;
//	scanf("%d",&a);
//		if (a == 2){
//			printf("hehe\n");
//		}
//		else  {
//			if (a == 1) {
//			printf("haha\n");
//		}
//			else{
//				printf("您的输入有误");
//			}
//	}
//		system("pause");
//		return 0;
//}
//判定一个数字是否为奇数
//#include<stdio.h>
//#include <stdlib.h>

////0代表是偶数，1代表是奇数
//int IsOdd(int n){
//	if (n % 2 == 0){
//		return 0;
//	}
//	return 1;
//}
//int  main(){
//
//	printf("%d\n", IsOdd(-11));
//	system("pause");
//	return 0;
//
//}
//************************************
//#include <stdio.h>
//#include <stdlib.h>
//int IsOdd(int n){
//	if (n % 2 != 0){
//		return 1;
//	}
//	return 0;
//}
//int  main(){
//	printf("%d\n", IsOdd(-11));
//	system("pause");
//	return 0;
//}
//输出1到100的奇数
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n;
//	for (n = 1; n <= 100; n++){
//		if (n % 2 != 0){
//			printf("%d\n", n);
//		}
//			n++;
//	}
//	system("pause");
//	return 0;
//}
//**************************switch语句************************
//输入1到7输出星期几
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int day = 0;
//	printf("请输入今天是星期几（1到7）： \n");
//	scanf("%d", &day);
//	switch (day){
//	case 1: printf("星期一\n");
//		break;
//	case 2: printf("星期二\n");
//		break;
//	case 3: printf("星期三\n");
//		break;
//	case 4: printf("星期四\n");
//		break;
//	case 5: printf("星期五\n");
//		break;
//	case 6: printf("星期六\n");
//		break;
//	case 7: printf("星期日\n");
//		break;
//	default:
//		printf("您的输入有误\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//******************************************
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int day = 0;
//	printf("请输入今天是星期几（1到7）： \n");
//	scanf("%d", &day);
//	switch (day){
//	case 1: 
//	case 2: 	
//	case 3: 	
//	case 4: 	
//	case 5: 
//		printf("weekday\n");
//		break;
//	case 6: 
//	case 7: 
//		printf("weekend\n");
//		break;
//	default:
//		printf("您的输入有误\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//break :跳出当前循环，结束整个循环。
//continue ：结束这个循环跳到另一个循环。

//********************************
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int day ;
//	printf("请输入今天是星期几（1到7）： \n");
//	scanf("%d", &day);
//	if (day == 1){
//		printf("星期一\n");
//	}
//	if (day == 2){
//			printf("星期二\n");
//		}
//	if (day == 3){
//		printf("星期三\n");
//	}
//	if (day == 4){
//		printf("星期四\n");
//	}
//	if (day == 5){
//		printf("星期五\n");
//	}
//	if (day == 6){
//		printf("星期六\n");
//	}
//	if (day == 7){
//		printf("星期日\n");
//	}
//	if (day < 1 || day >7){
//		printf("您的输入有误\n");
//	}
//	system("pause");
//	return 0;
//}
//*************利用switch能完成的语句，if  语句同样能完成**************************
//**************循环语句************************
//**while**
//**for**
//**do while**
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
//***********************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i=1;
//	while (i <= 10){
//		printf("%d\n",i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//判定while 的循环条件，条件如果成立执行循环体。条件如果不成立，则退出该循环。
//如果循环执行完了，再次进行判定循环条件
//*******************下面该程序当while 后面加上 ; 使程序构成了死循环，导致能编译出来但是没有任何结果
//***********************************
//while 语句中的break和continue 
//break介绍 :
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		if (i == 5)
//			break;
//			printf("%d\n", i);
//			i++;
//	}
//	system("pause");
//	return 0;
//}
//从1到100中找出第一个被3整除的整数
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 100){
//		if (i % 3 == 0){
//			printf("%d\n", i);
//			break;
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//}//**********
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		i++;
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//
//	}
//	system("pause");
//	return 0;
//}
//****************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//			i++;
//	}
//	system("pause");
//	return 0;
//}
//*******************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i < 10){
//		i++;
//		if (i == 5)
//			continue;
//			printf("%d\n", i);
//			
//	}
//	system("pause");
//	return 0;
//}
//找到1到100所有的能被3整除的数字
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i=1;
//	while (i <= 100){
//		if (i % 3 == 0){
//			printf("%d\n",i);
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//
//}
//******************************
#include<stdio.h>
#include <stdlib.h>

int main(){
	int i = 1;
	while (i <= 100){
		if (i % 3 != 0){
			i++;
			continue;
		}
		printf("%d\n", i);
		i++;
	}
	system("pause");
	return 0;

}