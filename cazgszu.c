//位操作符: & | ^ ~

//^的使用
//不允许使用临时变量,交换两个数
#include <stdio.h>
#include <stdlib.h>

int main() {
	//这个方法存在一定的限制性,当a和b很大时此时这种方法就失效(因为int的范围的类型是-21亿到21亿)
	int a = 10;
	int b = 20;
	a = a + b; //30
	b = a - b; //10
	a = a - b; //20
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//方法2.异或
#include <stdio.h>
#include <stdlib.h>

int main() {
	//这个方法存在一定的限制性,当a和b很大时此时这种方法就失效(因为int的范围的类型是-21亿到21亿)
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
////a ^ 10  ^ 10 = a;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//给定一个整型数组,其中一个元素出现了一次,其他元素出现出现了两次,写了一函数,找到只出现一次的元素{1,2,3,1,2}
//(键值对 )  //具有一定的局限性
#include <stdio.h>
#include <stdlib.h>

//将每一个数字进行遍历,但是有一定的局限性
int Func(int arr[], int size) {
	int numCount[100] = { 0 };
	for (int i = 0; i < size; i++) {
		numCount[arr[i]]++;
	}
	for (int i = 0; i < 100; i++) {
		if (numCount[i] == 1) {
			return  i;
		}
	}
	//数组存在问题,没有只出现一次的数字.
	return 0;
}
int main() {
	int arr[] = { 1, 2, 1, 2, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = Func(arr, size);

	printf("%d\n", n);

	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////利用按位异或 (频率高)
////
#include <stdio.h>
#include <stdlib.h>

int Func(int arr[], int size) {
	int ret = 0;
	for (int i = 0; i < size; i++) {
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
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////求二进制中1的个数
////方法1: 除以2和模2的方式进行求解
#include <stdio.h>
#include <stdlib.h>

int BitOneCount(unsigned int num) {
	int count = 0;
	while (num != 0) {
		if (num % 2 == 0) {
			count++;
		}
		num = num / 2;
	}
	return count;
}

int main() {

	printf("%d\n", BitOneCount(-10));
	system("pause");
	return 0;
}

//方法2.移位运算和位运算 
#include <stdio.h>
#include <stdlib.h>

int BitOneCount(int num) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////方法3.利用移位相减的方式
#include <stdio.h>
#include <stdlib.h>

int BitOneCount(int num) {
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
