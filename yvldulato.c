//条件运算符
//表达式为：表达式1 ？表达式2：表达式3
//先求解表达式1，
//若其值为真（非0）则将表达式2的值作为整个表达式的取值，否则（表达式1的值为0）将表达式3的值作为整个表达式的取值。
//例如 :
//1、Max = (a>b) ? a : b
//就是将a和b二者中较大的一个赋给Max。
//2、Min = (a<b) ? a : b
//就是将a和b二者中较小的一个赋给Min
//举例1.返回比较大的数值
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(){
//	int a = 10;
//	int b = 20;
//	int Max = a > b ? a : b;
//	printf("Max= %d\n", Max);
//	system("pause");
//	return 0;
//}
//*************************************************************
//举例1.返回比较大的数值并且加上100
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(){
//	int a = 10;
//	int b = 20;
//	int ret = 100+ (a > b ? a : b);//加括号的原因是考虑到优先级的问题
//	printf("Max= %d\n", ret);
//	system("pause");
//	return 0;
//}

//优先级
//条件运算符优先级高于赋值、逗号运算符，低于其他运算符
//例如：
//⑴ m<n ? x : a + 3
//等价于：(m<n) ? (x) : (a + 3)
//⑵ a++ >= 10 && b-->20 ? a : b
//等价于：(a++ >= 10 && b-->20) ? a : b
//⑶ x = 3 + a>5 ? 100 : 200
//等价于：x = ((3 + a>5) ? 100 : 200)
//条件运算符实际上就是if else语句的简化版本 
//返回两个数值的最大值
#include<stdio.h>
#include <stdlib.h>

int main(){
	int a = 10;
	int b = 20;
	if (a > b){
		printf("Max=%d\n",a);
	}
	else{
		printf("Max=%d\n",b);
	}
	system("pause");
	return 0;
}
//条件操作符是if   else 语句的简写
//**********************************************************************************