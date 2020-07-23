//
//作业:
//总结: 数字遍历,数位遍历,数组遍历
//第一次:

//1.打印100到200之间的素数
//拓展: 先判定某一个数字是不是质数
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i;
	int n = 11;
	int sqrtres = sqrt(n);
	for (i = 2; i <= sqrtres; i++) {
		if (n % i == 0) {
			printf("和数\n");
			break;
		}
	}
	if (i == sqrtres+1) { //当i == sqrtres+1 for循环中跳出,因此直接就能打印出来
	
		printf("质数\n");
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i;
	for (int n = 100; n <= 200; n++) {
		int sqrtres = sqrt(n);
		for (i = 2; i <= sqrtres; i++) {
			if (n % i == 0) {
				break;
			}
		}
		if (i == sqrtres + 1) {
			printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.输出乘法口诀表

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	int n = 9;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d = %d ",j,i,i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.判定1000年~2000年之间的闰年
//能被4整除,不能100,但能被400整除
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	for (int n = 1000; n <= 2000;n++) {
		if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
			printf("%d\n",n);
		}
	}
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//针对某一年,判定是不是闰年

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	int n;
	printf("请输入要判定的数字: ");
	scanf("%d",&n);
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
		printf("是闰年\n" );
	} else {
		printf("不是闰年\n");
	}
    system ("pause");
    return 0;
}


//拓展: 判定日期是否合法
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {

	int y = 0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%d%d%d",&y,&m,&d);
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		flag = 1;
	}

	if (m > 12 || m < 1 || d > 31 || d < 1 || (m == 4|| m == 6 || m == 9|| m == 11) && (d > 30) || (m == 2) && (d > 28 + flag)) {
	
		printf("不合法\n");
	}
	else {
		printf("合法\n");
	}
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int y = 0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%d%d%d", &y, &m, &d);
	
	if (m > 12 || m < 1 || d > 31 || d < 1 || (m == 4 || m == 6 || m == 9 || m == 11) && (d > 30) || (m == 2) && 
		(d > 28 + (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))) {

		printf("不合法\n");
	}
	else {
		printf("合法\n");
	}
	system("pause");
	return 0;
}


//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//第二次:
//1.给定两个整形变量的值,将两个值的内容进行互换.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = 10;
	int b = 20;
	printf("交换之前a = %d,b = %d\n",a,b);
	
	int tmp = a;
	a = b;
	b = tmp;
	printf("交换之后a = %d,b = %d\n", a, b);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.不允许创建临时变量,交换两个数的内容.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = 10;
	int b = 20;
	printf("交换之前a = %d b = %d\n", a, b);
	//a和b的值不能超过类型范围   
	//char 的数据范围 (0~255) -128~127 short 类型的范围 (0~65535) -32768~32767  int 数据的范围 (0~41亿9千万)-21亿~21亿 (-2^31 ~ 2^31-1)
	//a = a + b;
	//b = a - b;
	//a = a - b;

	a = a^b;
	b = a^b;
	a = a^b;
	printf("交换之后a = %d,b = %d\n", a, b);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.求10个整数中的最大值.
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int Max; //Max也可设置为int的最小值,0x8000000
	int i = 0;
	int tep = 0;
  printf("请输入10个数字:  ");
	for (i = 0; i < 10;i++) {
		scanf("%d",&tep); 
		Max = tep; //等于第一次的值给了Max
		if (tep>Max) {
			Max = tep;
		}
	}
	printf("最大值Max为:  %d\n",Max);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//拓展1: 求10个数字中次大值

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int Max=0x80000000 ; //Max也可设置为int的最小值,0x8000000
	int Nxt=0x80000000;
	int i = 0;
	int tep = 0;
	printf("请输入10个数字: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &tep);
		if (tep > Max) {
			Nxt = Max;
			Max = tep;	 
		}
		else if (tep > Nxt) { //比最大的小,比次大的大
			Nxt = tep; 
		}
	}
	printf("次大值Nxt为:  %d\n", Nxt);
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.将三个数字从大到小进行输出.
#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main () {

	int a, b, c;
	printf("请输入要进行比较的3个数字:  ");
	scanf("%d %d %d",&a,&b,&c);
	if ( a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (b < c) {
		int temp = b;
		b = c;
		c = temp;
	}
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}


	printf("a = %d b = %d c = %d\n",a,b,c);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//5.求两个数字的最大公约数(Greatest Common Divisor(GCD))
//
//最大公约数:能同时被a和b整数的最大的那个数字
//最大公倍数: (a*b)/最大公约数
//方法1:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a, b,Max;
	printf("请输入两个数字:  ");
	scanf("%d %d",&a,&b);
	int smaller = a < b ? a : b;
	for (int i = 1; i <= smaller;i++) {
		if (a % i == 0 && b % i == 0) {
			Max = i;
		}
	}
	printf("最大公约数: Max = %d\n",Max);
    system ("pause");
    return 0;
}
//方法2:辗转相除法(欧几里得算法)
//
//假如需要求 1997 和 615 两个正整数的最大公约数, 用欧几里德算法，是这样进行的：
//1997 / 615 = 3 (余 152)
//615 / 152 = 4(余7)
//152 / 7 = 21(余5)
//7 / 5 = 1 (余2)
//5 / 2 = 2 (余1)
//2 / 1 = 2 (余0)
//至此，最大公约数为1
//以除数和余数反复做除法运算，当余数为 0 时，取当前算式除数为最大公约数，所以就得出了 1997 和 615 的最大公约数 1。
//
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a=0, b=0, c=0;
	printf("请输入两个数字: ");
	scanf("%d %d",&a,&b);

	while (a%b ) {
		c = a%b;
		a = b;
		b = c;
	}
	printf("最大公约数: Max = %d\n",b);
    system ("pause");
    return 0;
}
//拓展1:求最大公倍数
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a=0, b=0, c=0;
	printf("请输入两个数字: ");
	scanf("%d %d",&a,&b);
	int ret = a*b;
	while (a%b ) {
		c = a%b;
		a = b;
		b = c;
	}
	printf("最大公约数: %d\n",b);
	printf("最小公倍数: %d\n", ret / b);

    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//第三次:
//1.将数组A中的内容和数组B中内容进行交换;(数组一样大)//数组遍历

#include <stdio.h>
#include <stdlib.h>

void Swap(int A[], int B[], int sizeAB) {
	for (int i = 0; i < sizeAB;i++) {
		int temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
}

void PrintA(int A[],int sizeAB) {
    for (int i = 0; i < sizeAB; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

void PrintB(int B[], int sizeAB) {
	for (int i = 0; i < sizeAB; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
}

int main () {
	int A[] = { 1, 2, 3, 4, 5 };
	int B[] = { 5, 6, 7, 8, 9 };
	int sizeAB = sizeof(A) / sizeof(A[0]);
	PrintA(A,sizeAB);
	PrintB(B, sizeAB);
	Swap(A,B,sizeAB);
	PrintA(A, sizeAB);
	PrintB(B, sizeAB);
    system ("pause");
    return 0;
} 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//2.计算1/1-1/2=1/3-1/4....+1/99-1/100的值

#include <stdio.h>
#include <stdlib.h>

int main () {
	double sum = 0;
	double ret = 0;
	int flag = 1;
	for (int i = 1; i <= 100;i++) {
		ret = flag * 1.0 / i;
		flag *= -1;
		sum += ret;
	}
	printf("%.4lf\n",sum);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.编写程序写一下,1到100 的所有整数中出现多少个数字9? 

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	int count = 0;
	for (i = 1; i <= 100;i++) {
		if (i / 9 == 0) {
			count++;
		} 
		if (i % 9 == 0 ) {
			count++;
		}
	}
	printf("%d\n",count);

    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//数位遍历法
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 456;
	int i;
	for (int i = n; i;i/=10) { //数位遍历 中间的i是结束条件,0为假,非0为真
		printf("%d ", i % 10);
	}
	printf("\n");

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//判定一个数是不是回文数 
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 1234321;
	int sum = 0;

	for (int i = n; i;i /= 10) {
		sum = sum * 10 + i % 10;
	}
	if (sum == n) {
		printf("是回文数\n");
	}
	else {
		printf("不是回文数\n");

	}

    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//数位遍历: for(int i=n;i;i/=m)  i%m ////////
//i%m可以完成n在m进制下每一位的遍历 ////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//可以判定在m进制下判定是不是回文数
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 1234;
	int sum = 0;
	int m = 8;
	for (int i = n; i; i /= m) {
		sum = sum * m + i % m;
	}
	if (sum == n) {
		printf("是\n");
	}
	else {
		printf("不是\n");

	}

	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//
//第四次:
//1.在屏幕上输出图案
//      *
//     ***
//    *****
//   *******
//    *****
//     ***
//	  *

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i,j;
	int n = 5;
	for (int i = 1; i <= n;i++) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <=2*i-1; j++) {
			putchar('*');
		}
		printf("\n");
	}
	for (int i = n-1; i > 0; i--) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		printf("\n");
	}




    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和,其中a是一个数字,例如2+22+222+2222+22222

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i = 0;
	int  a;
	int sum = 0;
	int ret = 0;
	for (int i = 0; i < 5;i++) {
		 sum = sum*10 + 2;
		 ret = sum + ret;
	}
	printf("%d\n",ret);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//拓展1.1+...n
//拓展2:前n的阶乘和
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a;
	int b;
	int temp = 1;
	int sum = 0;
	int n;   
	scanf("%d",&n);
	for (int i= 1; i <= n;i++) {
		temp *= i; //temp是进行统计
		sum += temp;//sum是进行累加
	}
	printf("%d\n",sum);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///4. 水仙花数 
//3位的
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	int a;
	int b;
	int c;

	for (int i = 100; i < 1000; i++) {

		a = i % 10; //个位
		b = i / 10 % 10;//十位
		c = i / 100; //百位

		if (i == a * a * a + b *  b * b + c * c * c) {
			printf("%d\n", i);
		}
	}
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1到100000000的阿姆斯浪数

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
	int i;

	int addflag = 10;
	int n = 1;
	int sum = 0;
	int j;
	for (i = 1; i < 100000000;i++) {
		
		if (i == addflag) {
			n++;
			addflag *= 10;
		}
		for (j = i; j;j /= 10) {
			sum += pow(j % 10, n);
		
		}

		if (sum == i) {
			printf("%d\n",sum);
		}
		sum = 0;
	}

    system ("pause");
    return 0;
}



















































































