//作业: 
//第6次:
//1.写一个函数返回参数中二进制1的个数.
//方法1.数位遍历
#include <stdio.h>
#include <stdlib.h>

int main () {

	int num = 10;
	int count = 0;
	for (int i = num; i ;i /= 2) {
		count += i % 2;
	}
	printf("%d\n",count);

    system ("pause");
    return 0;
}

//方法2: 按位操作
#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 0;
	int num = 1023;
	for (int i = 0; i < 32; i++) {
		if ((num & (1 << i)) != 0) {
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
int countOneNum();

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//方法3.
#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 0;
	int num = 1000;
	while (num) {
		num &= (num - 1);
		count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//方法4.
#include <stdio.h>
#include <stdlib.h>


int countOneNum(int n) { 
	n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
	n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
	n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);
	n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);
	n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff);

	return n;

}

int main () {

	printf("%d\n", countOneNum(1023));

    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出其奇数和偶数的二进制序列。
//例如：20的二进制序列00000000000000000000000000010100
//偶数序列为：0000000000000000
//奇数序列为：0000000000000110
//【解题思路】：要得到偶数序列，先将每个偶数位移到最后一位，然后按位与1，就得到了这一位；要得到奇数序列，先将每个奇数位移到最后一位，然后按位与1，
//就得到了这一位。一个数按位与1，结果为0，那个数就是0；结果为1，那个数就是1.
#include <stdio.h>
#include <stdlib.h>


int main() {
	int num = 10;
	printf("奇数位: ");
	for (int i = 31; i >=0;i-=2) {
	
		printf("%d ",(num >> i) & 1);
		}
	printf("\n");
	printf("偶数位: ");

	for (int j = 32; j >=1; j -= 2) {
	
		printf("%d ", (num >> j) & 1);
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.输出一个整数的每一位.
#include <stdio.h>
#include <stdlib.h>

void Print(int num) {
	for (int i = num; i;i/=10) {
		printf("%d ",i%10);
	}
}

int main () {

	 Print(1234);


    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void Print(int num) {
	if (num == 0) {
		return 0;
	}
	Print(num / 10);
	printf("%d ",num%10);
	//Print(num/10);
}

int main() {

	Print(1234);


	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.编程实现:两个int(32位)整数m和n的二进制表达式中有多少个位(bit)不同? 输入例子: 1999 2299 输出例子: 7 //异或
//1、首先我们要了解一个运算符异或(^)
//如果a、b两个值不相同，则异或结果为1。如果a、b两个值相同，异或结果为0。
//所以我们只须判断对应的比特位的值异或是否为1即可。
//2、  我们试着先比较最后一位，要考虑&的性质
//0 & 0 = 0     1 & 0 = 0  0 & 1 = 0    1 & 1 = 1
//任何数 & 1都是它本身，任何数 & 0都是0 因此（num1 & 1）就得到最后一个比特位的值。
//
//3、考虑我们如何得到每一个比特位。
//得到最后一个比特位后，(>>= 1)后 & 1即得到上一位比特位的值。
//
//循环完即可。

#include <stdio.h>
#include <stdlib.h>

int BitDifferent(int m, int n) {
	int count = 0;
	int i = 0;
	for (int i = 0; i < 32;i++) {
		if (m % 2 != n % 2) {
			count++;
		}
		m /= 2; //m = m>>1;
		n /= 2; //n = n>>1;
	}
	return count;
}

int main () {
	printf("%d\n", BitDifferent(1999,2299));
    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


int BitDifferent(int m, int n) {
	int count = 0;
	int i = 0;
	int ret = m^n;

	for (int i = ret; i;i/=2) {
	
		count += i % 2;
	}
	return count;
}

int main () {

	printf("%d\n", BitDifferent(1999, 2299));
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


int BitDifferent(int m, int n) {
	int count = 0;
	int i = 0;
	int ret = m^n;
	while (ret) {
		ret = ret&(ret - 1);
		count++;
	}
	return count;
}

int main() {

	printf("%d\n", BitDifferent(1999, 2299));
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//第八次: 1 2 6 一个思路
//1.递归和非递归分别实现第n个斐波那契数.//找递推公式

#include <stdio.h>
#include <stdlib.h>


int Fib(int n) {
	if (n <= 2) {
		return 1;
	} else {
		return Fib(n - 1) + Fib(n - 2);
	}
}
//1 1 2 3 5 8 13 21
int main () {

	printf("%d\n",Fib(8));


    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.编写一个函数实现n^k,使用递归实现.
//an=m *  an-1(n>1)  a1=m
#include <stdio.h>
#include <stdlib.h>

int pow1(int m,int n) {
	if (n <= 1) {
		return m;
	}
	return m*pow1(m, n - 1);
}

int main() {


	printf("%d\n", pow1(2,3));

	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.写一个递归函数DigitSun(n),输入一个非负整数,返回组成它的数字之和,利用调用DigitSum(1729),则应该返回1+7+2+9,它的和是19
//an=n%10+an/10
//a0=0
#include <stdio.h>
#include <stdlib.h>


int sum(int n) {
	if (n <= 0) {
		return 0;
	}
	return n % 10 + sum(n / 10);
}
int main () {

	printf("%d\n",sum(1729));

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//非递归
#include <stdio.h>
#include <stdlib.h>


int DigitSun(int num) {
	int count = 0;
	for (int i = num; i;i/=10) {
		count += i % 10;
	}
	return count;

}

int main () {
	printf("%d\n",DigitSun(1023));
    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.编写一个函数reverse_string(char* string)(递归实现)
//实现:将参数字符串中的字符反向排列.的字符串操作数.
//非递归
#include <stdio.h>
#include <stdlib.h>


void reverse_string(char str[],int len) {
	int i;
	int j;
	for (i = 0, j = len - 1; i < j;i++,j--) {
	
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

int main () {
	char str[] = "abcdef";
	int len = strlen(str);
	reverse_string(str,len);
	puts(str);
    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//递归
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_string(char* str) {
	if (*str) {
		int i = strlen(str) - 1;
		char temp;

		temp = str[0];
		str[0] = str[i];
		str[i] = '\0';
		reverse_string(str + 1);
		str[i] = temp;
	}
}
int main () {
	char str[] = "abcdef";
	reverse_string(str);
	puts(str);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//puts()函数用来向标准输出设备（屏幕）输出字符串并换行，具体为：把字符串输出到标准输出设备，将'\0'转换为回车换行。
//其调用方式为，puts(s)；其中s为字符串字符（字符串数组名或字符串指针）。
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//5.递归和非递归分别实现strlen

//三目运算符
#include <stdio.h>
#include <stdlib.h>

int Strlen(char str[]) {

	return 	(*str != 0) ? 1 + Strlen(str + 1) : 0;
}


int main () {

	printf("%d\n", Strlen("abcdef"));
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//递归

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Strlen(char str[]) {
	if (*str == 0) {
		return 0; 
	}
	return 1 + Strlen(str + 1);
}

int main () {
	printf("%d\n", Strlen("abcdef"));
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//非递归
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Strlen(char str[]) {
	int i = 0;

	for (i = 0; str[i]; ) {  //字符串遍历
		i++;
	}
	return i;
	
	//while (str[i]) {
	//	i++;
	//}
	//return i;
}

int main () {
	printf("%d\n", Strlen("abcdef"));
    system ("pause");
    return 0;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//6.递归和非递归分别实现求n得阶乘. 
#include <stdio.h>
#include <stdlib.h>

int factorial(int num) {
	int ret = 1;
	for (int i = 1; i <= num;i++) {
		ret *= i;
	}
	return ret;
}

int main () {
	printf("%d\n",factorial(5));
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//an=n * an-1 a0=1
#include <stdio.h>
#include <stdlib.h>



int factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * factorial(n - 1); //尾递归 递归出现在函数的末尾
}

int main () {

	printf("%d\n",factorial(5));
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//7.递归方式实现打印一个整数的每一位.
#include <stdio.h>
#include <stdlib.h>

void Printnum(int num) {
	if (num <= 0) {
		return 0;
	}
	//printf("%d ",num % 10 );
	Printnum(num/10);
	printf("%d ", num % 10);
}

int main () {


	Printnum(1729);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//将8进制的每一位打印出来
#include <stdio.h>
#include <stdlib.h>

void Printnum(int num) {
	if (num <= 0) {
		return 0;
	}

	Printnum(num / 8);
	printf("%d ", num % 8);
}

int main() {


	Printnum(1729);

	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void Printnum(int num) {
	if (num <= 0) {
		return 0;
	}
	Printnum(num / n); //证明的是将n进制按照每一位进行打印出来
	printf("%d ", num % n);
}

int main() {


	Printnum(1729);

	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void Printnum(int num) {
	if (num <= 0) {
		return 0;
	}
	
	Printnum(num / 16);
	putchar("0123456789ABCDEF"[num%16]);
	
}

int main() {


	Printnum(1729);

	system("pause");
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Printnum(int num,int n) {
	if (num <= 0) {
		return 0;
	}

	Printnum(num / n,n);
	putchar("0123456789ABCDEF "[num % n]);

}

int main() {

	Printnum(1729,10);

	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//n个数的数组取出两个数,然后将两个数相加
#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int src[] = { 0 };
	int n = 0;
	printf("请输入数组的长度: ");
	scanf("%d",&n);
	printf("数组内容分别为: \n");
	for (int i = 0; i < n;i++) {
		scanf("%d",src+i);
	}
	for (int i = 0; i < n;i++) {
		for (int j = i + 1; j < n;j++) {
			printf("%d\n",src[i]+src[j]);
		}
	}
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int src[32] = { 0 };
	int n = 0;
	printf("请输入数组的长度: ");
	scanf("%d", &n);
	printf("数组内容分别为: \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", src + i);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n;k++) {
				printf("%d\n", src[i] + src[j]+src[k]);
			}
		}
	}
	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





























































