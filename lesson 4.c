///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//递归：

//1. 打印12 3 4
#include <stdio.h>
#include <stdlib.h>

void printNum(int num) {
	if (num > 9) {
		printNum(num / 10);
	}
	printf("%d\n",num % 10);
}

int main () {
    printNum(1234);
    system ("pause");
    return 0;
}

//回到调用的位置继续往下执行,

//2.求字符串的长度
//字符串是一种特殊的字符数组.必须以\0结束

//方法1.#include <string.h>
//strlen 函数
//利用标准库中的函数进行直接求解
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char arr[] = "abcd";
	int ret = strlen(arr);
	printf("字符串的长度是: %d\n",ret);

    system ("pause");
    return 0;
}

//字符串长度, 字符数组长度    字符数组长度(占内存的字节数): 算\0 .字符串的长度: 不计算\0
//方法2. 利用函数
#include <stdio.h>
#include <stdlib.h>


int Strlen(char arr[]) {
	int i = 0;
	/*for (i = 0; arr[i] != '\0'; i++) {
		i++;
	}*/
	int size = 0;
	while (arr[i] != '\0') {
		i++;
		size++;
	}
	return size;
}

int main () {
	char arr[] = "abcd";

	int ret = Strlen(arr);
	printf("%d\n",ret);
    system ("pause");
    return 0;
}



//方法3.递归 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Strlen(char str[]) {
	if (str[0] == '\0') {  // 结束条件就是当剩的最后一个元素为'\0'时,此时递归的条件满足
		return 0;
	}
	return 1 + Strlen(str + 1);
}

int main () {
	char str[] = "abcd";
	int len = Strlen(str);
	printf("字符串长度是: %d\n",len);
    system ("pause");
    return 0;
}



//递归程序的特点:
//1.一定有递归结束条件
//2.每次递归之后,都会距离这个结束条件更加接近了


//3.求n的阶乘
//n! = n*(n-1)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main () {
	int N = 0;
	printf("请输入N: \n");

	scanf("%d",&N);

	int ret = factorial(N);
	printf("%d\n",ret);
    system ("pause");
    return 0;
}

//函数:
//
#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
	int ret = 1;
	for (int i = 1; i <= n;i++) {
		ret *= i;
	}
	return ret;
}

int main () {
	int ret = factorial(5);
	printf("%d\n",ret);
    system ("pause");
    return 0;
}


//4.求斐波那契数(生兔子问题)
//非递归  避免了重复性的问题
#include <stdio.h>
#include <stdlib.h>

int Fib(int num) {
	int i = 0;
	if (i == 1)
		return 1;
	if (i == 2)
		return 1;
	int cur = 0;
	int last1 = 1;
	int last2 = 1;
	for (i = 3; i <= num;i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main () {
	printf("%d\n",Fib(8));
    system ("pause");
    return 0;
}

//递归 

#include <stdio.h>
#include <stdlib.h>


int Fib(int num) {
	if (num == 1)  //结束条件
		return 1;
	if (num == 2)
		return 1;
	return Fib(num - 2) + Fib(num - 1); //递归之后越来越接近结束条件

}

int main () {
	printf("%d\n", Fib(8));
    system ("pause");
    return 0;
}




//递归和非递归版本  
//假如递归没有结束条件,那么程序会崩溃(闪退) 打开调试就是栈出问题,直接溢出  栈空间有多少字节大小
//查看栈的大小:
#include <stdio.h>
#include <stdlib.h>

void Func() {

	//char arr[1024*1024] = { 0 }; //由于栈空间有限,因此在调试的过程中程序直接崩溃
	char arr[1024 * 1000] = { 0 };
}
//VS中默认程度栈空间大小大概为1M; (面试中)
//当前的栈为操作系统中的栈,操作系统中也有栈和数据结构中不一样
//操作系统中也有堆,但是和数据结构中的栈完全不同

int main () {
	Func();
    system ("pause");
    return 0;
}
//递归中可以将问题进行拆分,类似于将问题简化.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//数组: 批量创建出一组相同类型的变量.
//数组定义的时候,[]中表达式也不一定非得是常量表达式.  C89中必须要求是常量,C99中允许变量表达式  利用4种常量表达式可进行赋值 练习 
//语法格式:  
//创建变量的同时进行初始化.使用那个变量在进行初始化,不然后在书写过程中进行代码修改时不准确表示.

//初始化和赋值完全不一样

//在创建变量的同时设定值,叫做初始化. 初始化利用大括号来实现{}
//变量已经创建完了,再去设定值,叫做赋值. 

//普通数组, 只能使用{}初始化  int arr[] = { 1, 2, 3, 4 };
//字符数组除了使用大括号({})来进行初始化还能使用双引号("")的形式进行初始化.这就相当于在初始化一个字符串. char arr[] = "abcd";
//未定义行为:  数组下标越界只是未定义行为中的一种

//数组的简单使用:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
	char arr1[] = { 'a', 'b', 'c', 'd' };
	char arr2[] = "abcd";
	printf("%d\n",sizeof(arr1));
	printf("%d\n", sizeof(arr2));//对于字符串数组而言,在最后有一个\0,占了一个字节的大小.

	printf("%d\n",strlen(arr1)); //这块是一个任意值,因为对于strlen函数而言,是求字符串的长度,即遇到\0就结束  等于是一个未定义行为
	printf("%d\n",strlen(arr2)); //字符串而言,最后一位是字符串.

    system ("pause");
    return 0;
}



















