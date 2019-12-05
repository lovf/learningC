//字符是数据的输入输出，除了printf 和scanf 以外还有字符的专门输出输入函数
/*1.putchar函数是输出一个字符
putchar函数的一般形式为
putchar(c)  作用是是输出字符变量c的值显示他是一个字符
*/
/*#include<stdio.h>
int main(){
	char a = 'B', b = 'O', c = 'Y';
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	system("pause");
	return 0;
}
*/
/* #include<stdio.h>
int main(){
	char a = 66, b = 79, c = 89;
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	system("pause");
	return 0;
}
*/
//2.getchar 函数（字符输入函数）输入一个字符
#include<stdio.h>
#include <stdlib.h>
int main(){
	char a, b, c;
	a=getchar();
 b=getchar();
	c=getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	system("pause");
	return 0;
}