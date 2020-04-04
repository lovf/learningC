//1.水仙花(先打印一个三位数的)
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身
//
//**在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。**
//
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。
//370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3。
//371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3。
//407 = 4 ^ 3 + 0 ^ 3 + 7 ^ 3。
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int a,b,c;
//	int num;
//	for (int num = 100; num <= 999; num++){
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//		
//		if (num == a*a*a + b*b*b + c*c*c){
//			printf("%d\n", num);
//		}
//	}
//	
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
////拓展:找到 0~999 的水仙花数.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//
//int main(){
//	int n = 1;
//	int addflag = 10;
//	int i, j;
//	int sum = 0;
//	for (int i = 1; i <= 999; i++){
//		//根据位次的多少n的大小随之增加
//		if (i == addflag){
//			n++;
//			addflag *= 10;
//		}
//		//对每一位进行遍历
//		//将遍历之后的结果进行相加
//		for (j = i; j; j /= 10){
//			sum += pow(j % 10, n);
//		}
//		if (sum == i){
//			printf("%d\n", i);
//		}
//		//每一次循环完之后,sum都要更新.
//		sum = 0;
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//C语言pow()函数：求x的y次方的值
//
//头文件：math.h
//
//语法 / 原型：
//double pow(double x, double y);
///*
//参数说明：
//x：双精度数。
//y：双精度数。
//
//返回值：x 的 y 次方的值*/
//【实例1】使用 pow() 函数求 2 的 3 次方，其代码如下：
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main() {
//	double x = 2, y = 3;  //为变量赋初值
//	double result = pow(x, y);  //求a的b次方
//	printf("%lf\n", result);
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//
//【实例2】使用C语言 pow() 函数计算用户输入的数值的次幂。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main() {
//	double a, b;  //定义两个变量
//	printf("请输入一个数:");  //输出提示信息
//	scanf("%lf", &a);  //获取用户输入的数值
//	printf("请输入次幂数:");  //输出提示信息
//	scanf("%lf", &b);  //获取用户输入的数值
//	printf("result: %lf\n", pow(a, b));//输出结果
//
//	system("pause");
//	return 0;
//}
//*************************************************************************************************************
//
//2.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int i;
//	int sum = 0;
//	int result=0;
//	for (int i = 1; i <= 5;i++){
//		sum = sum*10 + 2;
//		result += sum;
//	}
//	printf("%d\n",result);
//	system("pause");
//	return 0;
//}
//*************************************************************************************************************
//
//3.在屏幕上输出菱形图案：
//
//	  *
//	 ***
//	*****
//   *******
//    *****
//	 ***
//	  *
//这类问题类似于找规律问题,找到每行星星和空格的个数就可以了
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int i;
//	int j;
//	int N;
//	printf("请输入要打印的行数: ");
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++){
//		for (j = 1; j <= N - i; j++){
//			putchar(' ');
//		}
//		for (j = 1; j <= 2 * i - 1; j++){
//			putchar('*');
//		}
//		printf("\n");
//	}
//
//
//	for (i = N - 1; i >= 1; i--){
//		for (j = 1; j <= N - i; j++){
//			putchar(' ');
//		}
//		for (j = 1; j <= 2 * i - 1; j++){
//			putchar('*');
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//*************************************************************************************************************
//拓展:数字菱形
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(){
	int i;
	int j;
	int N;
	printf("请输入要打印的行数: ");
	scanf("%d",&N);
	for (i = 1; i <= N; i++){
	    for (j = 1; j <= N - i; j++){
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++){
			printf("%d",i);
		}
		printf("\n");
}


	for (i = N-1; i >=1; i--){
		for (j = 1; j <= N - i; j++){
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++){
			printf("%d", i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}













































































