//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值代码：
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
//因为pow 函数的变量都是float型
	double i;
	double sum = 0;
	for (i = 1; i < 101; i++) {
	//pow 函数里面按次方来算
		sum += (pow(-1, i + 1) ) / i;
	}
	//将求得的结果打印出来
	printf("%f\n", sum);
	system("pause");
	return 0;
}
//该题比较简单,关键在于pow 函数的用法。
//以下是关于pow 函数的说明：
//pow()函数用来求x的y次幂，x、y及函数值都是double型 .
//其原型为：double pow(double x, double y)。
//关于pow 函数的举例
/*#include<stdio.h>
#include<math.h>
int main()
{
	double x = 2;
	double y = 3;
	printf("%f\n", pow(x, y));
	system("pause");
	return 0;
}
*/




