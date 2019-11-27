//pow 函数的总结：
/*C语言pow()函数：求x的y次方的值
头文件：math.h
参数说明：
x：双精度数。
y：双精度数。
原型：
double pow(double x, double y);
返回值：x 的 y 次方的值。
*/
//实例1.使用 pow() 函数求 4 的 6 次方，其代码如下：
/*#include <stdio.h>
#include <math.h>
int main() {
double x = 3, y = 2;  //为变量赋初值
double result = pow(x, y);  //求a的b次方
printf("%lf\n", result);
system("pause");
return 0;
}
*/
//实例2.使用C语言 pow() 函数计算用户输入的数值的次幂。
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
double a, b;  //定义两个变量
printf("请输入一个数:");  //输出提示信息
scanf("%lf", &a);  //获取用户输入的数值
printf("请输入次幂数:");  //输出提示信息
scanf("%lf", &b);
double result = pow(a, b);//获取用户输入的数值
printf("%3.2f\n", result); //输出结果
system("pause");
return 0;
}
*/
//实例3.1/1-1/2+1/3-1/4.....+1/99-1/100
#include <stdio.h>
#include <math.h>
int main(){
	double  i = 1;
	double  tep;
	double  sum = 0;
	for (i = 1; i <= 100; i++){
		tep = 1 / i;
		sum += tep*pow(-1, i + 1);
		//初始类型时必须sum为double型
		//sum += (pow(-1, i+1))/i;
	}
	printf("%5.4f\n", sum);
	system("pause");
	return 0;
}

