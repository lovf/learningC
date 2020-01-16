//猜数字游戏
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <string.h>
//#include <time.h>
//
//
//int Menu () {
//	printf("                \n");
//	printf("**猜数字游戏**\n");
//	printf("************\n");
//	printf("=============\n");
//	printf("1.开始游戏\n");
//	printf("1.退出游戏\n");
//	printf("===========\n");
//	int choice = 0;
//	printf("请输入你的选择\n");
//	scanf("%d",&choice);
//    return choice;
//}
//int Game(){
//     //系统随机产生一个随机数
//	int ToGuess = rand() % 100 + 1;  //产生1到100的随机数
//	while (1){
//		printf("请输入一个数字（1-100:）\n");
//		int num = 0;
//		scanf("%d", &num);
//		if (num > ToGuess){
//			printf("高了\n");
//		}
//		else
//		if (num < ToGuess){
//			printf("低了\n");
//		}
//		else{
//			printf("恭喜你猜对了\n");
//		}
//	}
//}
//int main(){
//	srand((unsigned int) time(0)); //对产生的随机数进行初始化
//	while (1){
//		int choice = Menu();
//		if (choice == 1){
//			Game();
//		}
//		else{
//			printf("goodbye!");
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//*****************************************************
//********************rand 函数*****************************
//C语言中rand函数是用来产生一个随机数的函数。
//头文件包括:#include <stdlib.h>
//rand函数的使用 
//如果想要表示一个数是从0开始到最大值的，比如说，想要产生一个0 - 99之间的随机数
//int num = rand() % 100；
//如果想要产生一个数是从1开始到最大值的，比如说，想要产生一个1 - 100之间的随机数
//int num = rand() % 100 + 1;
//上一题是产生1到100的数字,因此int num=rand() % 100+1 这样就可以产生一个随机数

//******************************************************************
//*************************srand函数*******************************
//srand函数产生的是unsigned int 型 因此对time(0)强制转化转化成unsigned int 型
//srand是对rand函数产生的随机数进行初始化,使其每一次更新后产生的值都不相同
//rand函数在每次产生随机数之前都会查看是否调用过srand函数如果调用过就会使每次产生的随机数发生变化
//**************************************************************************
//举例1.代码中即含有rand函数又含有srand函数
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(){
//	srand((unsigned int)time(0)); //初始化种子为随机值,使该随机数是一个随机产生的
//	int i ;
//	for (i=0; i < 5; ++i){
//		int num = rand() % 100+ 1;//产生一个1-100之间的数
//		printf("%d\n", num); //打印每次产生随机数的结果
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//****************************************************************************
//举例2.代码中只含有rand()函数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i = 0;
	for (; i < 5; ++i){
		int num = rand() % 50 + 1;//产生一个1-50之间的数
		printf("%d\n", num);
	}
	system("pause");
	return 0;
}
//代码每次执行程序生成的随机值都是一样的,是因为没有srand 函数对随机数进行初始化.导致每次的结果均是相同的.
