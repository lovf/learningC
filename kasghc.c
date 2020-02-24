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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char arr[] = "abcd";
	int ret = sizeof(arr);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
//*******************************************************************************************/

//memset函数  memcpy和strcpy函数 strlen函数 sizeof ()