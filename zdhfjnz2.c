//逻辑操作符的使用
/*
&& 逻辑与
真&&真=真
真&&假=假
假&&真=假
假&&假=假
|| 逻辑或
真||真=真
真||假=假
假||真=假
假||假=假
！ 逻辑反
*/
//例1.逻辑与的求和特点
/*#include<stdio.h>

int main(){
int i = 0, a = 0, b = 1, c = 2, d = 3;
i = a++&&++b&&d++&&c++&&d++;
printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
system("pause");
return 0;
}
*/
//例2.逻辑或的求和特点
/*#include<stdio.h>

int main(){
int i = 0, a = 0, b = 1, c = 2, d = 3;
i = a++||++b||d++||c++||d++;
printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
system("pause");
return 0;
}
*/
//在这块也要搞清楚前置++和--，与后置++和--
/*短路求值法：
对于逻辑与运算来说如果左侧表达式的值是假的，那么此时整个表达式的值就确定了，右侧不需要求值。
对于逻辑或运算来说如果左侧表达式的值是真的，那么此时整个表达式的值也就确定，右侧不需要求值
也可以利用宏来进行定义&&和||
*/
//也可以利用宏来进行定义&&和||
/*#define and &&
#define or  ||
#include<stdio.h>

int main(){
	int i = 0, a = 0, b = 1, c = 2, d = 3;
	//i = a++ or ++b or d++ or c++ or d++;
	i = a++and ++b and d++and c++and d++;
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	system("pause");
	return 0;
}
*/
//条件操作符
/*条件运算符(? : )是一个三目运算符，即有三个操作数。

使用条件运算符（?:）可以实现 If else 的功能，其一般形式为：

表达式1 ? 表达式2 : 表达式3

例如条件语句：

if(a>b)  max=a;else max=b;可用条件表达式写为 

max=(a>b) ? a : b;

执行该语句的语义是：如a>b为真，则把a赋予max，否则把b 赋予max。*/
/*#include<stdio.h>
int Compare(int a, int b){
	int Max=a > b ? a : b;
	printf ("%d\n", Max);
}
int main(){
	Compare(10, 20);
	system("pause");
	return 0;
}
*/
//单目操作符
/*
注意--和++的使用
*/
//前置++和--
#include<stdio.h>
int main(){
	int a = 10;
	int b = 20;
	int x,y,z,w;
	//先对a自减，a 的值为9， 然后再使用a导致表达式的值为9。
	x= --a;
	printf("x=%d a=%d\n", x, a);
	//先对b自加，b的值为21，然后再使用b导致表达式的值为21。
    y = ++b;
	printf("y=%d b=%d\n", y, b);
	system("pause");
	return 0;
}

//后置--和++
/*#include<stdio.h>
int main(){
	int a = 10;
	int b = 20;
	int z, w;
	//先使用a的值导致表达式的值z=10，然后在对a进行自减a=9；
	z = a--;
	printf("z=%d a=%d\n", z, a);
	//先使用b的值导致表达式的值w=20，然后在对a进行自减b=21；
	w = b++;
	printf("w=%d b=%d\n", w, b);
	system("pause");
	return 0;
}
*/
//一定要分清表达式的值还是自加自减
