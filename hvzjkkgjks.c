//函数调用自身的编程技巧 称之为递归.
//首先，我们要知道，计算机是怎么调用函数的
//第一步：当前计算机环境入栈，保存计算机的状态，比如运行到哪儿，保存入参，局部变量等，这是用栈保存的，是耗内存的。
//第二步：调用函数。
//第三步：返回，将第一步过程中入栈的计算机环境出栈，继续往下运行。
//因此循环必须有两个必要条件:
//1.限制循环结束的条件,当满足这个限制条件时,递归将不再继续.
//2.每次递归调用完之后,越来越接近这个限制条件.
//1.实现1+2+3+4........n-1+n
//法1.递归
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int num){
//	if (num == 0){
//		return 0;
//	}
//	else {
//		return num + Func(num - 1); // 递归实质就是将问题进行拆分处理
//	}
//}
//
//int main(){
//	int n;
//	printf("请输入要求的数字前几的和: \n");
//	scanf("%d", &n);
//	int sum = Func(n);
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}
//因此当调用n == 0时,就是限制循环结束的条件.返回值num + Func(num-1)就是让循环越来越接近循环的限制条件
//可想而知函数执行过程中:
//开始：入参n = 10调用fun(10 - 1), 即fun(9)，把9当做入参，n = 9, 调用fun（9 - 1），n = 8, 依次下去，直到n = 0,
//这时候n = 0，return 0
//return后回到1 + fun(0), fun(0) 返回0，则执行1 + 0，返回1 + 0 = 1，return 1
//return后回到2 + fun(1), fun(1) 返回1，则执行2 + 1，返回2 + 1 = 1，return 3
//.
//.
//.
//return 后回到10 + fun(9), fun(9)返回9 + 8 + ... + 2 + 1 + 0, 则执行45 + 10 = 55，return 55, 即是结果：
//
//
//*****************************************************************************************
//法2.for语句直接求解n
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int sum=0;
//	int i;
//	int n;
//	printf("请输入要求的数字前几的和: \n");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++){
//		sum = sum + i;
//	}
//	printf("sum=%d\n",sum);
//	system("pause"); 
//	return 0;
//
//}
//2.不使用第三个变量,求字符串的长度.(递归的拆分)
#include <stdio.h>
#include <stdlib.h>

int length(char* arr){
	if (*arr == '\0'){
		return 0;
	}
	else {
	return 1 + length(arr+1);//如果不传地址,则会造成数组名参与运算会隐式转化成指针
	}
}

int main(){
	char* p = "abcdef";
	
	printf("%d\n", length(p));
	system("pause");
	return 0;
}
//传参传的是地址
/////////////////////////////////
































