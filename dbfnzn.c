//求两个数的最大公约数
//　几个整数中公有的约数，叫做这几个数的公约数；其中最大的一个，叫做这几个数的最大公约数。
//法1.穷举法 (不断的拿需要求解的数进行除法运算,依次循环从而找到对应的能整除的数值)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a, b;
//	int i;
//	int Max;
//	printf("请输入两个数: \n");
//	scanf("%d%d",&a,&b);
//	int smaller=a < b ? a : b;
//	for (i = 2; i <= smaller;i++){
//		if ((a%i == 0) && (b%i == 0)){
//			Max = i;
//		}
//	}
//	printf("最大公约数是: %d\n",Max);
//	system("pause");
//	return 0;
//}
//********************************************************************************************
//法2.辗转相除法   
//辗转相除法：辗转相除法是求两个自然数的最大公约数的一种方法，也叫欧几里德算法。
//算法简介:
//欧几里德算法是用来求两个正整数最大公约数的算法。是由古希腊数学家欧几里德在其著作《The Elements》中最早描述了这种算法, 
//所以被命名为欧几里德算法
//具体执行步骤:
//有两整数a和b：
//1.a%b得余数c
//2. 若c = 0，则b即为两数的最大公约数
//3.若c≠0，则a = b，b = c，再回去执行
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 0;
//	int b = 0;
//	int m;
//	printf("请输入两个数: \n");
//	scanf("%d%d",&a,&b);
//	m = a%b;
//	while (a%b ){
//		a = b;
//		b = m;
//		m = a%b;
//	}
//	printf("最大公约数是: %d\n",b);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//**拓展:如何理解最大公约数和最小公倍数**************
//最大公约数:几个整数中公有的约数，叫做这几个数的公约数；其中最大的一个，叫做这几个数的最大公约数。
//最小公倍数:两个或多个整数公有的倍数叫做它们的公倍数，其中除0以外最小的一个公倍数就叫做这几个整数的最小公倍数
//
//其基于的原理是两个数的最小公倍数会等于两个数的乘积除以两个数的最大公约数的结果。
//
//利用辗转相除法,求解最大公约数和最小公倍数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 0;
	int b = 0;
	int m;
	printf("请输入两个数: \n");
	scanf("%d%d", &a, &b);
	int ret = a*b;
	m = a%b;
	while (a%b){
		a = b;
		b = m;
		m = a%b;
	}
	printf("最大公约数是: %d\n", b);
	printf("最小公倍数是: %d\n", ret / b);
	system("pause");
	return 0;
}