//***********************第五次作业**************************************
//*1.猜数字游戏***
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(){
//	int num = 0;
//	int toGuess = rand() % 100 + 1;
//	srand((unsigned int )time (0));
//
//
//	while (1){
//		printf("请输入要猜的数字大小: \n");
//		scanf("%d",&num);
//		if (toGuess > num){
//			printf("小\n");
//		}
//		else if (toGuess < num){
//			printf("大\n");
//		}
//		else {
//			printf("猜对了\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//******************************************************************************************
//拓展:从0-9中选出四个数字,位置是随机的不重复.然后猜4个数字不仅让位置对,而且数字也对应.
//例:选出的数字9 6 2 8 猜的数字1 2 3 4 这时打印 1B 0A 代表有一个数字对的,另一个位置不对数字也不对.
 //                           5 6 7 8 这时打印 0B 2A 代表有一个数字猜的是对的
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//
//void slashCard(int arr[],int n){
//	/*int arr[] = { 0 };*/
//	srand((unsigned int )time (0));
//	int pool[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i;
//	int s;
//	for (i = 0; i < n; i++){
//		s = rand() % 10;
//		while (pool[s] == -1){
//			s++;
//			if (s = 10){
//				s = 0;
//			}
//		}
//		arr[i] = pool[s];
//		pool[s] = -1;
//	}
//}
//
//
//void printArray(int arr[], int n){
//	int i;
//	for (i = 0; i < n; i++){
//		printf("%d", arr[i]);
//		printf(" ");
//	}
//	putchar('\n');
//}
//
//
//int  judgeAns(int arr[], int ans[]){
//	int i, j;
//	int countB = 0;
//	int countA = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (ans[i] == arr[j])
//			{
//				countB++;
//				break;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		if (ans[i] == arr[i])
//		{
//			countA++;
//		}
//	}
//	countB -= countA;
//	printf("%dA%dB\n", countA, countB);
//	if (countA == 4)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main(){
//	int arr[4];
//	slashCard(arr, 4);
//
//	//printArray(arr, 4);
//	int ans[4];
//	int i, j;
//	for (i = 1; i <= 8; i++){	
//		printf("第%d次: ", i);
//		for (j = 0; j < 4; j++){
//			scanf("%d", &ans[j]);
//		}
//		if (judgeAns(arr, ans)) { //括号里面是1 ,就代表结束
//			break;
//		}
//	}
//		if (i == 9){
//			printf("你输了！答案是：\n");
//			printArray(arr, 4);// 假如查错了,直接将结果打印出来
//		}
//		else {
//			printf("你赢了！\n");
//		}
//	system("pause");
//	return 0;
//}

//***************************************************************************************
//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
//#include <stdio.h>
//#include <stdlib.h>
//
//int Binary(int arr[], int size, int toFind){
//	int i;
//	int left = 0;
//	int right = size - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int toFind = 10;
//	printf ("%d\n",Binary(arr,size,toFind));
//	system("pause");
//	return 0;
//}
//二分查找:一定是有序数组
//******************************************************************************************
//3.编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char passWord[10] = { 0 };
//	char str[] =  "888888";
//	int i;
//	for (i = 0; i < 3; i++){
//		char passWord[10] = { 0 };
//		printf("请输入6位密码: ");
//		scanf("%s", &passWord);
//		//strcmp 字符串比较函数,看字符串的内容是否相同
//		if (strcmp(passWord, str) == 0){
//			printf("登陆成功\n");
//			break;
//		}
//		else {
//			printf("请重新输入!\n");
//		}
//	}
//	if (i == 3){
//		printf("您的机会已经使用完了!\n");
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************
//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//int main(){
//	char ch ='\0';// 字符进行初始化/*c语言没有字符串类型，通过字符数据模拟C语言字符串，以字符‘\0’, 数字0
//	while (ch != '\n'){//"\n"表示回车，程序的意思是没有按回车键就继续输入，按了回车键就输入结束退出程序，窗口会自动关闭。
//	//响应保持窗口看结果可加:while (1); 让程序死循环，就不会自动关闭窗口了，这时可以看到printf的输出结果。
//	
//	ch = getchar();
//	if ((ch >= 'A') && (ch <= 'Z')){
//		ch += 'a' - 'A';
//	}
//
//	else if ((ch >= 'a') && (ch <= 'z')){
//		ch -= 'a' - 'A';
//	}
//	else  if (isdigit(ch)){
//		continue;
//	}
//	//putchar(ch);
//	printf("%c",ch);
//}
//	system("pause");
//	return 0;
//}

//****************************************
//include <ctype.h> 头文件包含函数总结
//里面包含的函数主要是：
//
//1.字符测试函数，函数原型一般为：int isXXXX(int);
//
//参数为int， 只能正确处理[0, 127].

//2.字符映射函数，函数原型一般为：int toXXXX(int);
//
//对参数进行检测, 若符合范围则转换, 否则不变
//
//int tolower(int);  'A'~'Z' == > 'a'~'z'   // 先判断是不是小写字母，如果不是，则将其转换成小写字母   (简单记忆：to lower

//int toupper(int);  'a'~'z' == > 'A'~'Z'  // 先判断是不是大写字母，如果不是，则将其转换成大写字母   (简单记忆：to upper

//3. 判断字母函数：
//int isalpha(char ch);
//如果ch是字母则返回“非0”， 否则返回0。(简记：is alpha？)
//
//4.判断是不是控制字符函数：
//int iscntrl(char ch);
//检查ch是否控制字符(其ASCII码在0和0x1F之间, 数值为 0 - 31). (简记：is cntrl ? )
//
//5.判断数字函数：
//int isdigit(char ch);
//如果ch是数字则返回“非0”， 否则返回0.  (简记：is digit　？)
//
//6.判断小写字母函数：
//int islower(char ch);
//是则返回“非0”， 否则返回0.
//7.判断大写字母函数：
//int isupper(char ch);
//是则返回“非0”， 否则返回0.
//8. 同时判断是不是字母或数字的函数：
//int isalnum(char ch);
//是则返回“非0”， 否则返回0.  (简记：is al 或 num ? )
//**************************************************************************************************
//***********************第6次作业：*************************
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int multiTable(int n){
//	int i;
//	int j;
//	for (i = 1; i <= n;i++){
//		for (j = 1; j <= i;j++){
//			printf("%d*%d= %d",i,j,i*j);
//			printf(" ");
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//	int n;
//	printf("请输入要求几乘以几的乘法口诀表: ");
//	scanf("%d",&n);
//	multiTable(n);
//	system("pause");
//	return 0;
//
//}
//**********************************************************************************************
//2.使用函数实现两个数的交换。
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void   Swap(int* a,int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("交换之前的数字:a=%d b=%d\n",a,b);
//	Swap(&a,&b);
//	printf("交换之后的数字:a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//3.实现一个函数判断year是不是润年。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int leapYear(int year){
//	if (((year%4 == 0) && (year%100 != 0)) || year%400 == 0){
//		return 1;
//	}
//	return 0;
//}
//
//
//int main(){
//	int num;
//	printf("验证某一年是不是闰年: \n");
//	scanf("%d",&num);
//	int ret = leapYear(num);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//4.创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void initArray(int a[], int b[], int n){
//	/*int i;
//	for (i = 0; i < n; i++){
//		a[i] = b[i];
//	}*/
//	memcpy(a, b, sizeof(int)* n);
//} 
//
//void ClearArray(int dst[], int n)
//{
//	memset(dst, 0, sizeof(int)* n);
//}
//
//
//void ReverseArray(int dst[], int n){
//	int i, j;
//	for (i = 0, j = n - 1; i <= j; i++, j--){
//		//Swap(&dst[i], &dst[j]);
//		
//		int temp = dst[j];
//		dst[j] = dst[i];
//		dst[i] = temp;
//
//	}
//	//int   Swap(int* a,int* b){
//	//		int temp;
//	//		temp = *a;
//	//		*a = *b;
//	//		*b = temp;
//	//	}

//}
//
// void printArray(int a[], int n){
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//}
//
//int main(){
//	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
//	//int arr2[6] = {0};
//	//initArray(arr1, arr2, 6);
//	//printArray(arr1, 6);
//
//	//ClearArray(arr1, 6);
//	//printArray(arr1, 6);
//
//	ReverseArray(arr1,6);
//	printArray(arr1, 6);
//
//	system("pause");
//	return 0;
//}
////*******************************************************************************************
//******************************************1.memset函数
//memset是计算机中C/C++语言初始化函数。
//作用是将某一块内存中的内容全部设置为指定的值， 这个函数通常为新申请的内存做初始化工作.
//头文件<string.h>或<cstring>
//函数作用范例编辑
//1.memset() 函数常用于内存空间初始化。如：
//char str[100];
//memset(str, 0, 100）；
//举例:
//#include <stdio.h>
//#include <string.h>
//#include <stdio.h>
//
//
//int main(){
//	char arr[] = "Hello world\n";
//	printf("Arr before memset:%s\n", arr);
//	memset(arr, '*', strlen(arr));
//	printf("Arr after memset: %s\n", arr);
//	system("pause");
//	return 0;
//}
//
//2.memset()的深刻内涵：用来对一段内存空间全部设置为某个字符，一般用在对定义的字符串进行初始化
//	例如：memset(a, '\0', sizeof(a));
//
//**************************************************2.memcpy和strcpy
//指的是C和C++使用的内存拷贝函数
//strcpy和memcpy主要有以下3方面的区别。
//1、复制的内容不同。strcpy只能复制字符串，{strcmp(s.name,"李四")}而memcpy可以复制任意内容，例如字符数组、整型、结构体、类等。
//2、复制的方法不同。strcpy不需要指定长度，它遇到被复制字符的串结束符"\0"才结束，所以容易溢出。memcpy则是根据其第3个参数决定复制的长度。
//3、用途不同。通常在复制字符串时用strcpy，而需要复制其他类型数据时则一般用memcpy。[3][2]
//
//*****************************************************3.strlen函数
//int arr[]="abcd";
//求字符串的长度.遇到\0就停止.strlen(arr)=4
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[]="abcd";
//	int ret = strlen(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*****************************************************************************
//******************************************************4.sizeof 
//int arr[]={a,b,c,d};
//求字符数组的长度.sizeof(arr)=5.必须算上\0 
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[] = "abcd";
//	int ret = sizeof(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*******************************************************************************************/
//*****************************************************************************************
//5.实现一个函数，判断一个数是不是素数。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isPrime(int n){
	int i;
	for (i = 2; i < n;i++){
		if (n%i == 0){
			return 0;
		}
	}
	return 1;

}

int main(){
	int num;
	printf("请输入一个数:  ");
	scanf("%d",&num);
	printf ("%d\n",isPrime(num));
	
	system("pause");
	return 0;
}
//*******************************************************************************************































































































































































