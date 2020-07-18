//位操作符: & | ^ ~

//^的使用
//不允许使用临时变量,交换两个数
#include <stdio.h>
#include <stdlib.h>

int main () {
	//这个方法存在一定的限制性,当a和b很大时此时这种方法就失效(因为int的范围的类型是-21亿到21亿)
	int a = 10;
	int b = 20;
	a = a + b; //30
	b = a - b; //10
	a = a - b; //20
	printf("a = %d b = %d\n",a,b);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
	//这个方法存在一定的限制性,当a和b很大时此时这种方法就失效(因为int的范围的类型是-21亿到21亿)
	int a = 10;
	int b = 20;
	a = a ^ b; 
	b = a ^ b; 
	a = a ^ b; 
	printf("a = %d b = %d\n",a,b);
    system ("pause");
    return 0;
}
////a ^ 10  ^ 10 = a;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//给定一个整型数组,其中一个元素出现了一次,其他元素出现出现了两次,写了一函数,找到只出现一次的元素{1,2,3,1,2}
//(键值对 )  //具有一定的局限性
#include <stdio.h>
#include <stdlib.h>


int Func(int arr[], int size) {
	int numCount[100] = {0};
	for (int i = 0; i < size;i++) {
		numCount[arr[i]]++;
	}
	for (int i = 0; i < 100;i++) {
		if (numCount[i] == 1) {
			return  i;
		}
	}
	//数组存在问题,没有只出现一次的数字.
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int main () {
	int arr[] = { 1, 2, 1, 2, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = Func(arr,size);

	printf("%d\n",n);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//利用按位异或 (频率高)
//
#include <stdio.h>
#include <stdlib.h>

int Func(int arr[], int size) {
	int ret = 0;
	for (int i = 0; i < size;i++) {
		ret ^= arr[i];
	}
	return ret;
}

int main() {
	int arr[] = { 1, 2, 1, 2, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = Func(arr, size);

	printf("%d\n", n);

	system("pause");
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//求二进制中1的个数
//方法1: 除以2和模2的方式进行求解
#include <stdio.h>
#include <stdlib.h>

int BitOneCount(unsigned int num) {
	int count = 0;
	while (num != 0) {
		if (num%2 == 0) {
			count++;
		}
		num = num / 2;
	}
	return count;
}

int main () {

	printf("%d\n", BitOneCount(-10));
    system ("pause");
    return 0;
}

//方法2.移位运算和位运算 
#include <stdio.h>
#include <stdlib.h>

int BitOneCount( int num) {
	int count = 0;
	for (int i = 0; i < 32;i++) {
		if ((num & (1 << i)) != 0) {
			count++;
		}
	}
	return count;
}

int main() {

	printf("%d\n", BitOneCount(-10));
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//方法3.利用移位相减的方式
#include <stdio.h>
#include <stdlib.h>

int BitOneCount( int num) {
	int count = 0;
	while (num) {
		count++;
		num = num&(num - 1);
	}
	return count;  
}

int main() {

	printf("%d\n", BitOneCount(-10));
	system("pause");
	return 0;
}

//把这个数字的第N位变为1: num | (1 << N)
//把这个数字的第N位变为0: num & ~(1 << N)
//初始化和赋值

//初始化:创建变量的同时,设置初始值  数组的{},只能用于初始化,不能用于赋值.
//赋值: 变量已经有值,在去设定值

 //复合赋值符:
 //+=  -=  *=  /=  %= >>=  <<=  &= |=  ^= 这些都可以写成复合的效果

//单目操作符: (! 当成真假来对待)
//按位取反和逻辑取反
//
#include <stdio.h>
#include <stdlib.h>

int main () {

	int num = 0;
	printf("%x\n",~num);
	printf("%x\n",!num);

    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 2, 3, 4 };
	printf("%d\n",sizeof(arr[100])); //sizeof 是一个运算符,求值的是在编译期完成的,根本没有进行的内存的访问,因此不存在越界这一说法. 
	//printf("%d\n", arr[100]); //未定义行为

    system ("pause");
    return 0;
}

//数组下标越界=>内存访问越界=>未定义行为=>程序运行时访问内存
//sizeof 是一个运算符,,具有一个重要的特性,编译期求值
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 2, 3, 4, 5 };

	printf("%d\n",sizeof (arr)); //数组所占字节的大小

    system ("pause");
    return 0;
}
//单目操作符的使用:
//
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = -10;
	int *p = NULL;
	printf("%d\n",!2); //0
	printf("%d\n",!0); //1
	a = -a;
	p = &a;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(int));

	printf("%d\n", sizeof a);        

    system ("pause");
    return 0;
}


//关系操作符:返回值值要么是1(满足条件 ),要么是0(不满足条件)
//a>b
#include <stdio.h>
#include <stdlib.h>

int main () {

	int a = 10;
	int b = 40;
	int c = 30;
	if (a < b < c) {
		printf("hehe\n"); //hehe
	} else {
		printf("haha\n");
	} 

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = 10;
	int b = 40;
	int c = 30;
	if (a < b && b < c) {
		printf("hehe\n"); //hehe
	}
	else {
		printf("haha\n");
	}

	system("pause");
	return 0;
}
//逻辑操作符：&& || ！
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = 10;
	int b = 40;
	int c = 30;
	if (a < b && b < c) {
		printf("hehe\n"); //hehe
	}
	else {
		printf("haha\n");
	}

	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = 10;
	int b = 40;
	int c = 30;
	if (a < b || b < c) {
		printf("hehe\n"); //hehe
	} else {
		printf("haha\n");
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//短路求值:对于逻辑与来说,如果左侧表达式的值已经是假,此时整个表达式的值就已经确定了,右侧不需要求值
//        对于逻辑或来说,如果左侧表达式的值已经是真,此时整个表达式的值就已经确定了,右侧不需要求值
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && c++ && d++; //左边表达式的值(自增之前的结果是0)
	//printf("a = %d\nb = %d\nc = %d\nd = %d\n ",a,b,c,d); //1 2 3 4
	i = a++ || ++b || c++ || d++;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n ", a, b, c, d);

    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//关于前置++后置++前置--后置--的使用
//后置++ 后置-- 都是先对a进行使用,然后再自增自减.
//前置++ 前置-- 先进行自增,自减,然后再进行使用

#include <stdio.h>
#include <stdlib.h>

int main () {
	int  i = 0;
	int a = 1;
	//前置++:
	//i = ++a;//(表达式的值等于自加之后的值)
	//printf("i = %d\na = %d\n",i,a); //2 2
	//后置++:
	//i = a++; //(表达式的值等于自加之前的值)
	//printf("i = %d\na = %d\n", i, a); //1 2
	//前置--
	//i = --a;
	//printf("i = %d\na = %d\n", i, a);//0 0
	//后置--
	i = a--;
	printf("i = %d\na = %d\n", i, a);//1 0

    system ("pause");
    return 0;
}


// 三目运算符                                                                            
//exp1 ? exp2 : exp3;
//类似于: if else 的简化写法
//找出大的数字+100
#include <stdio.h>
#include <stdlib.h>

int Max(int x,int y) {
	//if (x > y) {
	//	return x;
	//}
	//return y;

	return 100 + (x > y ? x : y);

}

int main () {

	int N = Max(20,10);
	printf("%d\n",N);
    system ("pause");
    return 0;
}

//逗号表达式:
#include <stdio.h>
#include <stdlib.h>

int main () {

	int a = 0;
    a = (10, 20, 30); //取逗号最后的一个数字的值
	printf("%d\n",a);
    system ("pause");
    return 0;
}
