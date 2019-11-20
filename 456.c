//关于sizeof ()和strlen ()的总结：
/*1.sizeof是运算符，可以以类型、函数、做参数 。
2.sizeof 计算声明后所占的内存数（字节的大小,不是实际长度
3.strlen是函数，只能以char(字符串)做参数，
4.strlen是一个函数，用来计算指定字符串的长度，但不包括结束字符（即Null字符）
*/
#include<stdio.h>
int main(){
	char arr[] = "abcdef";
	char arr1[] = "abc\0def";
	int len1 = strlen(arr);//计算时不包括'\0'的长度,遇到'\0'停止计算长度
	int len2 = strlen(arr1);
	int ret1 = sizeof (arr);//字符串后面还要计算'\0'的长度
	int ret2 = sizeof (arr1);
	printf("%d %d %d %d\n", len1, ret1, len2, ret2);
	system("pause");
	return 0;
}

/*#include<stdio.h>
int main(){
char arr[] = {'a','b','c','d'};
char arr1[] = { 'a','b','\0','c','d' };
//计算时不包括'\0'的长度,遇到'\0'停止计算长度
int len1 = strlen(arr);
int len2 = strlen(arr1);
//字符串后面还要计算'\0'的长度
int ret1 = sizeof (arr);
int ret2 = sizeof (arr1);
//len1的值是一个不确定的随机数（未定义行为）后面不知道啥时候有'\0'
printf("%d %d %d %d\n", len1, ret1, len2, ret2);
system("pause");
return 0;
}
*/