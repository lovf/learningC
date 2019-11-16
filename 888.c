//实现a和b的交换
//在实现a和b的交换过程中,利用a和b地址进行传参，改变a和b的地址存放内容，使其在swap函数的内部实在a和b的交换。
/*#include <stdio.h>
void swap(int* x, int* y){
	int  temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	system("pause");
	return 0;
}
*/
//求a和b的最大值：
/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//返回x和y中的最大值
//函数的定义
double Max (double   x, double  y){
if (x > y){
return x;
}
return y;
}
int main(){
//函数的调用
printf("%f\n", Max(10.00, 20.00));
system("pause ");
return 0;
}
*/

//求a和b的最大值：
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//函数的声明一般出现在函数的使用之前。要满足先声明后使用。
extern double  Max(double   x, double  y);
int main(){
	//函数的调用
	printf("%f\n", Max(10.00, 20.00));
	system("pause ");
	return 0;
}
//返回x和y中的最大值
//函数的定义
double Max (double   x, double  y){
if (x > y){
return x;
}
return y;
}
//当交换
