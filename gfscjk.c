判断变量类型:
1.下面哪些是数组指针()
/*int(*) arr[] */
数组指针:它实际上是一个指针，该指针指向一个数组。int (*arr) [];
int(*arr)[8];
由于[]的优先级比*高，因此在写数组指针的时候必须将*arr用括号括起来
arr先和*结合，说明p是一个指针变量
这句话的意思就是：指针arr指向一个大小为8个整型的数组。


指针数组: 它实际上是一个数组，数组的每个元素存放的是一个指针类型的元素。.int* arr[];
int* arr[8];
优先级问题：[]的优先级比*高
说明arr是一个数组，而int*是数组里面的内容
这句话的意思就是：arr是一个含有8个int*的数组

2.二级指针的描述正确的是

二级指针也是指针,用来保存一级指针的地址.

64位的操作系统支持64位的编译器,64位的编译器支持64位的操作系统 

3.判定结果的输出:

#include <stdio.h>
#include <stdlib.h>

int main () {

	unsigned long pullArray[] = { 6, 7, 8, 9 };
	unsigned long* pullPtr;
	pullPtr = pullArray;
	*(pullPtr + 3) += 3;

	printf("%d,%d\n", *pullPtr,*(pullArray+3));

    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main() {

	int  Array[] = { 6, 7, 8, 9 };
	int* pullPtr;
	pullPtr = Array; //数组名参与运算会隐式转为指针,指向首元素的地址
	*(pullPtr + 3) += 3;

	printf("%d,%d\n", *pullPtr, *(Array + 3));
	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//4.关于指针运算的说法正确的是:
//整型指针解引用操作访问4个字节,指针-指针得到的是指针和指针之间的元素个数,指针可以比较大小,看对应的地址是不是同一个地址

// 5.写一个函数,可以逆序一个字符串

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse_str(char str[],int len) {
	int left = 0;
	int right = len - 1;
	for (left = 0, right = len - 1; left <= right;left++,right--) {
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
	}
}

void Print(int str[]) {
	puts(str);
}
int main () {
	char str[] = "abcdef";
	int len = strlen(str);
	Reverse_str(str);
	Print(str,len);
    system ("pause");
    return 0;
}
//牛客网:
//正则法
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

	char str[101] = { 0 };
	//scanf("%s", str);  //假如这块直接%s 那么在输入时遇到空格的就会停止打印
	scanf("%[^\n]", str); //正则表达式
	int len = strlen(str);
	int left = 0;
	int right = len - 1;
		for (left = 0, right = len - 1; left <= right;left++,right--) {
			char temp = str[left];
			str[left] = str[right];
			str[right] = temp;
		}
	
	puts(str);
    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//6.野指针不能正常使用
//7.小端字节序:数字低的在低地址处(小,小,小) 大端字节序: 数字低的在高地址处(大,小,大); 小地址 ->  大地址
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = 0x11223344;
	char* p = (char*)&a;
	*p = 0;

	printf("%x\n",a);//11223300

    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//8.有一个字符数组的内容为:"student a  am i",请将数组的内容改为"i am a student".要求:不能使用库函数,只能开辟有限个空间(空间个数和字符串的长度无关)
//思路: 将每一个单词逆序,然后在整体逆序
student a  am i  ->  i  ma  a  tneduts  -> i am  a student 

#include <stdio.h>
#include <stdlib.h>

void reverse_word(char* start,char* end) {
	int len = end - start;
	char temp;
	int i, j;
	for (i = 0, j = len - 1; i < j;i++,j--) {
		temp = start[i];
		start[i] = start[j];
		start[j] = temp;
	}
}

void reverse(char* src) {
	char* start = src;
	char* end;
	int i;
	for (i = 0; src[i];i++) { //给前面的单词逆序
		if (src[i] == ' ') {
			end = src + i;
			reverse_word(start, end);//对前面的单词进行逆序
			start = end + 1;//下一个单词开始的位置
		}
	}
	reverse_word(start, src + i); //给最后一个单词逆序
	reverse_word(src, src + i); //整体逆序
}

int main () {

	char test[50] = "student a am i";
	
	//reverse_word(test, test + 8);
	reverse(test);
	puts(test);

    system ("pause");
    return 0;
}
//////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//递推类问题:

//斐波那契数列:将当前状态转为下一个状态 1 1 2 3 5 8 13 21 34 55 89 144
//1.递归实现
#include <stdio.h>
#include <stdlib.h>


int Fib(int n) {
	if (n <= 2)
		return 1; 
	return Fib(n-1) + Fib(n-2);

}

int main () {
	printf("%d\n",Fib(10));

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//非递归
#include <stdio.h>
#include <stdlib.h>

int Fib(int n) {
	if (n <= 2) {
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int cur;
	for (int i = 3; i <= n;i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;

}
int main() {

	printf("%d\n", Fib(10));
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//台阶问题:1->2台阶 前两项之和. 斐波那契
//青蛙跳台阶: 青蛙一次可以跳一个台阶或者两个台阶,问跳到第n个台阶一共有多少种跳法?
//找到递推公式: 台阶数:  跳法:   1 1jump1   2 2jump2    3  3jumpn    4 5    5  8 ''''
//根据得到的递推公式能够很明显的得到 当台阶数从第3层开始每上升一层就是前两层之和
//1 2 3 5 8 13 21 34 55 89 
//递归
#include <stdio.h>
#include <stdlib.h>

int jump(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	return jump(n - 1) + jump(n - 2);
}

int main() {
	printf("%d\n", jump(10));
	system("pause");
	return 0;
}
//非递归:
#include <stdio.h>
#include <stdlib.h>

int jump(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	int jump1 = 1;
	int jump2 = 2;
	int jumpn;
	for (int i = 3; i <= n; i++) {
		jumpn = jump1 + jump2;
		jump1 = jump2;
		jump2 = jumpn;
	}
	return jumpn;
}

int main() {

	printf("%d\n", jump(5));
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//拓展:1->3台阶 前三项之和.
//台阶数:  跳法 : 1  1    2  2    3  3    4  6......
#include <stdio.h>
#include <stdlib.h>

int jump(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	if (n == 3)
		return 3;
	return jump(n - 1) + jump(n - 2) + jump(n - 3);
}

int main () {
	printf("%d\n",jump(4));
    system ("pause");
    return 0;
}

//n*2的走廊要铺地毯 每一块地毯的大小是1*2,问有多少种铺法? (递推类问题 ) 斐波那契

一、n条直线最多分平面问题
题目大致如 : n条直线，最多可以把平面分为多少个区域。

分析 : 可能你以前就见过这题目，这充其量是一道初中的思考题。当有n - 1条直线时，平面最多被分成了f（n - 1）个区域。则第n条直线要是切成的区域数最多，就必须与每条直线相交且不能有同一交点。 这样就会得到n - 1个交点。这些交点将第n条直线分为2条射线和n - 2条线断。而每条射线和线断将以有的区域一分为二。这样就多出了2 + （n - 2）个区域。

故：f(n) = f(n - 1) + n

 = f(n - 2) + (n - 1) + n
 ……

= f(1) + 1 + 2 + …… + n

 = n(n + 1) / 2 + 1
//举例:
//问平面上 n 条彼此相交而无三者共点的直线能够把平面分割成多少部分？

我们先从简单的事实出发，设平面分为 Sn 部分，
n = 1，Sn = 2
n = 2，Sn = 4
n = 3，Sn = 7
n = 4，Sn = 11
n = 5，Sn = 15
能够观察到由于n的取值不同,对应得到划分的区域不同
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 4;
	printf("%d\n",n*(n+1)/2+1);

    system ("pause");
    return 0;
}

 ps:拓展  如果说  n个叉型 X  分割平面  那么其实就是 一个X叉型就相当于两条直线

二、折线分平面（hdu2050）
根据直线分平面可知，由交点决定了射线和线段的条数，进而决定了新增的区域数。当n - 1条折线时，区域数为f（n - 1）。为了使增加的区域最多，则折线的两边的线段要和n - 1条折线的边，即2*（n - 1）条线段相交。那么新增的线段数为4*（n - 1），射线数为2。但要注意的是，折线本身相邻的两线段只能增加一个区域。

故：f(n) = f(n - 1) + 4(n - 1) + 2 - 1

= f(n - 1) + 4(n - 1) + 1

= f(n - 2) + 4(n - 2) + 4(n - 1) + 2

……

= f(1) + 4 + 4 * 2 + …… + 4(n - 1) + (n - 1)

= 2n ^ 2 - n + 1

三、三角形划分区域（hdu1249）
解析：当n - 1个三角形时，区域面积数为 f(n - 1) 。

要区域数最多，那么第n个三角形就必须与前n - 1个三角形相交。
则第n个三角形的一条边就被分割成 2 * （n - 1） - 1条线段与两个半条的线段 ，
即相当于2*（n - 1）条线段。则第 n 个三角形被分割成 3 * 2 * （n - 1）条线段。
则增加了 6 * （n - 1）个面。
故：f(n) = 6 * (n - 1) + f(n - 1)
f(n - 1) = 6 * (n - 2) + f(n - 2)
........
f(2) = 6 * 1 + f(1)
因为，f(1) = 2
所以，f(n) = 3 * n*(n - 1) + 2
四、封闭曲线分平面问题
题目大致如：
设有n条封闭曲线画在平面上，而任何两条封闭曲线恰好相交于两点，且任何三条封闭曲线不相交于同一点，问这些封闭曲线把平面分割成的区域个数。
分析：当n - 1个圆时，区域数为f(n - 1).那么第n个圆就必须与前n - 1个圆相交，则第n个圆被分为2（n - 1）段线段，增加了2（n - 1）个区域。
故： f(n) = f(n - 1) + 2(n - 1)
= f(1) + 2 + 4 + …… + 2(n - 1)
= n ^ 2 - n + 2
五、平面分割空间问题（hdu1290）
由二维的分割问题可知，平面分割与线之间的交点有关，即交点决定射线和线段的条数，从而决定新增的区域数。试想在三维中则是否与平面的交线有关呢？当有n - 1个平面时，分割的空间数为f（n - 1）。要有最多的空间数，则第n个平面需与前n - 1个平面相交，且不能有共同的交线。即最多有n - 1 条交线。而这n - 1条交线把第n个平面最多分割成g（n - 1）个区域。（g（n）为（1）中的直线分平面的个数 ）此平面将原有的空间一分为二，则最多增加g（n - 1）个空间。

故：f = f(n - 1) + g(n - 1)     ps:g(n) = n(n + 1) / 2 + 1
= f(n - 2) + g(n - 2) + g(n - 1)
……
= f(1) + g(1) + g(2) + …… + g(n - 1)
= 2 + (1 * 2 + 2 * 3 + 3 * 4 + …… + (n - 1)n) / 2 + （n - 1）
= (1 + 2 ^ 2 + 3 ^ 2 + 4 ^ 2 + …… + n ^ 2 - 1 - 2 - 3 - …… - n) / 2 + n + 1
= (n ^ 3 + 5n) / 6 + 1
Sn−1−n = 1 + n(n−1)2−n = (n−1)(n−2)2

两条直线进行切割an=4n-2+an-1

双耳刀(两条射线)an=4n-3+an-1











































