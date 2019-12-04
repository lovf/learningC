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
#define and &&
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