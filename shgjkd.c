//作业:

//第五次:
//1.完成猜数字游戏

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	srand((unsigned int )time(0));
	int toGuess = rand() % 100 + 1; // (产生0~99之间的随机数)  -5 ~ 5 rand() % 11 - 5
	int num = 0;
	while (1) {
		printf("请输入要猜的数字大小: \n");
		scanf("%d", &num);
		if (num > toGuess) {
			printf("高了!\n");
		}
		else if (num < toGuess)  {
			printf("低了!\n");
		}
		else {
			printf("恭喜您,猜对了!\n");
		}
	}
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned int)time(0));
	int toGuess = rand() % 100 + 1; // (产生0~99之间的随机数)  -5 ~ 5 rand() % 11 - 5
	int num = 0;
	while (num != toGuess) {
		printf("请输入要猜的数字大小: \n");
		scanf("%d", &num);
		if (num > toGuess) {
			printf("高了!\n");
		}
		else if (num < toGuess)  {
			printf("低了!\n");
		}
	}
	printf("猜对了!\n");
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//拓展:
//9 6 2 8 
//1 2 3 4 1B0A //B代表有一个数字猜对了
//5 6 7 8 0B2A //2A代表数字和位置都对了
//最终0B4A就对了 最多猜8次

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void slashCard(int  arr[],int n) {
	srand((unsigned int)time(0));
	int pool[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int s;
	for (int i = 0; i < n; i++) {
		s = rand() % 10;
		while (pool[s] == -1) {
			s++;
			if (s == 10) {
				s = 0;
			}
		}
		arr[i] = pool[s];
		pool[s]= -1;
	}
}

void PrintArray(int arr[],int n) {

	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[4] = { 0 };
	for (int i = 0; i < 100;i++) {
		slashCard(arr, 4);
		PrintArray(arr, 4);
		Sleep(1000);
	}

	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//2.在整形有序的数组中查找想要的数字,找到了返回下标,找不到返回-1(折半查找)
#include <stdio.h>
#include <stdlib.h>


int binaryFind(int arr[], int size, int f) {

	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = left + right;
		if (f > arr[mid]) {
			left = mid + 1;;
		}
		else if (f < arr[mid]) {
			right=mid-1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main () {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",binaryFind(arr, size, 16));


    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.写代码模拟三次密码输入的场景,最多只能输入三次,密码正确提示"登录成功",密码错误可以重新输入,最多只能输入三次,三次均输入错误,则提示退出程序.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void judgePassword() {
	char password[] = { 0 };
	int i;
	for (i = 0; i < 3; i++) {
		printf("请输入您的密码: \n");
		scanf("%s", &password);
		if (strcmp(password, "888888") == 0) {
			printf("登录成功!\n");
			break;
		} else {
			printf("您的输入有误,请重新输入!\n");
			continue;
		}
	}

	if (i == 3) {
		printf("您的机会已经使用完了!\n");
	}
}

int main () {
	judgePassword();
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
关于字符串的三个函数:
int strcmp(const char* s1,const char* s2) 
char*  strcpy(char* dst1, char* dst2) dst1 = dst2
char*  strcat(char* dst1, char* dst2)  dst1 += dst2
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///4.写一个程序,可以一直接收键盘字符,如果是小写,就输出对应的大写,如果接受的是大写字符,就输出对应的小写字符.如果是数字则不输出.


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

	while (1) {
		char ch='\0';
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z') {

			ch += 'a' - 'A';
		}
		else  if (ch >= 'a' && ch <= 'z') {
			ch -= 'a' - 'A';
		}
		else if (isdigit(ch)) {
			continue;
		}
		putchar(ch);
	}
    system ("pause");
    return 0;
}

//1>只要求大小写转化 (异或)
//65
//0100 0001
//
//
//0010 0000
//
//
//97
//0110 0001
///

#include <stdio.h>
#include <stdlib.h>

int main() {

	while (1) {
		char ch = '\0';
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {

			ch ^= 'a' - 'A';
		}
		putchar(ch);
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//第七次:
//1.实现一个函数,打印乘法口诀表,口诀表的行数和列数自己定.
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Print(int m) {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
}

int main () {
	int m, n;
	printf("m代表行数: ");
	scanf("%d", &m);
	Print(m);
    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.使用函数实现两个数字的交换.(指针完成跨栈操作)
#include <stdio.h>
#include <stdlib.h>

void Swap(int* a,int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main () {
	int x = 5;
	int y = 8;
	printf("x = %d,y = %d\n", x, y);
	Swap(&x,&y);
	printf("x = %d,y = %d\n", x, y);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//使用指针完成了跨栈操作,
//拿去用用传本身,帮我改改传地址.改过了就是出参,用过了就是入参

//3.实现一个函数,判定year是不是闰年.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int LeapYear(int year) {
	if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0) {
		return 1;
	} 
	return 0;
}
int main () {
	int year = 0;
	printf("请输入要判定的年份: ");
	scanf("%d",&year);
	printf("%d\n", LeapYear(year));

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.创建一个数组,实现init()初始化数组,实现empty()清空数组,实现reverser()实现数组的逆置.要求自己设置函数的参数,返回值.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void  Init(int A[], int B[], int size) {
	memcpy(B,A,sizeof(int)*size);
}
void Print(int B[], int size) {
	for (int i = 0; i < 10;i++) {
		printf("%d ",B[i]);
	}
	printf("\n");
}

void clearB(int B[], int size) {
	memset(B, 0, sizeof(int)*size);
}

int main () {
	int A[10] = { 0 };
	int B[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	/*printf("初始化之前数组B的值: \n");
	Print(B, 10);
	Init(A,B,10);
	printf("初始化之后数组B的值: \n");
	Print(B,10);*/
	clearB(B, 10);
	Print(B, 10);
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Print(int B[], int size) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
}

void  reverser(int B[], int size) {
	int i, j;
	for (int i = 0, j = size - 1; i <j; i++,j--) {
	int temp = B[i];
	B[i] = B[j];
	B[j] = temp;

	}
	//int i;
	//int len = size / 2;
	//for (int i = 0; i < len; i++) {
	//	int temp = B[i];
	//	B[i] = B[size-1-i];
	//	B[size-1-i] = temp;
	//	//Print(B, 10);
	//}
}


int main() {
	int B[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("逆置之前的值: ");
	Print(B, 10);
	reverser(B,10);
	printf("逆置之后的值: ");
	Print(B, 10);
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//5.实现一个函数,判定一个数字是不是素数. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>34

int isPrimeNumber(int num) {
	int i;
	int sqrtres = sqrt(num);
	for (i = 2; i <= sqrtres;i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	if (i == sqrtres+1) {
		return 1;
	}
}

int main () {
	int num = 0;
	printf("请输入要判定的数字: ");
	scanf("%d",&num);
	printf("%d\n",isPrimeNumber(num));

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
















































