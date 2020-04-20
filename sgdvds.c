//**重要习题:**
//**第一组 : **

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int arr[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof (arr));// 16 计算一个整型数组所占的字节数
//	printf("%d\n", sizeof (arr + 0));//4 指针 int*
//	printf("%d\n", sizeof (*arr)); //4 arr隐式转为指针,指向首元素的地址.在对其进行解引用得到一个int 
//	printf("%d\n", sizeof (arr + 1));//4 数组名参与运算的时候,隐式转化为指针
//	printf("%d\n", sizeof (arr[1]));// 4 int
//	printf("%d\n", sizeof (&arr));// 4 数组名取地址,成为数组指针int(*)[],只要是指针在32位操作系统下占4个字节
//
//	printf("%d\n", sizeof (*&arr)); // 16 &arr数组指针,然后在对其进行解引用
//	printf("%d\n", sizeof (&arr + 1));//数组指针加1,仍然是数组指针
//	printf("%d\n", sizeof (&arr[0]));//4  得到一个int*
//	printf("%d\n", sizeof (&arr[0] + 1));// 4 int*
//
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//** 第二组**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("%d\n", sizeof (arr));// 6 查看字符数组所占的字节数
//	printf("%d\n", sizeof (arr + 0));// 4 数组名参与运算会转化成指针,指针在32位操作系统下占4个字节
//	printf("%d\n", sizeof (*arr));// 1 数组名不能取*,但是指针可以,arr隐式指向首元素的地址,在取*就是进行解引用得到一个字符a(char)
//	printf("%d\n", sizeof (arr[1]));//1 指向一个字符b(char类型)
//	printf("%d\n", sizeof (&arr));// 4 数组名取地址转化为数组指针,只要是指针在32位操作系统下占4个字节
//	printf("%d\n", sizeof (&arr + 1));//4 同上
//	printf("%d\n", sizeof (&arr[0] + 1));// 4 char* 
//
//	system("pause");
//	return 0;
//}
//*****************************************************************************************************
//**第三组**

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(arr)); // 未定义行为 产生一个随机数,因为strlen函数是计算字符串的长度,遇到\0结束
//	printf("%d\n", strlen(arr + 0));//  未定义行为
//	printf("%d\n", strlen(*arr)); // 数组名不能直接取*但是指针可以数组名转为 指针,然后在取*进行解引用得到一个char 类型
//	//***char和chr*属于不同的类型:
//	//char表示的是一个字符(通过一个整数来表示一个字符)大小是一个字节
//	//char*表示的是一个指针变量,这个变量存储的是一个整数,这个整数对应到内存的一个地址.
//	printf("%d\n", strlen(arr[1]));// 未定义行为 arr[1]指的是一个字符,与strlen()括号中所需要的类型不符合
//	printf("%d\n", strlen(&arr));//对数组名取地址得到一个数组指针,char(*)[],由于没有\0的缘故因此无法计算出来结果
//	printf("%d\n", strlen(&arr + 1));//数组指针+1,仍然得到一个数组指针
//	printf("%d\n", strlen(&arr[0] + 1));//得到指向字符b的地址,但是根据这个地址找不到\0
//
//	system("pause");
//	return 0;
//}
//****************************************************************************************************
//**第四组**

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));// 7 计算时要加上\0,
//	printf("%d\n", sizeof(arr + 0));//4 char* 	数组隐式转为指针
//	printf("%d\n", sizeof(*arr));// 1 对首元素的地址进行解引用 得到一个字符a
//	printf("%d\n", sizeof(arr[1]));//1 字符b 同上
//	printf("%d\n", sizeof(*(arr + 1)));// 1 字符b  arr[1]=*(arr+1)
//	printf("%d\n", sizeof(&arr));// 4 数组指针占4个字节char(*)[]
//	printf("%d\n", sizeof(&arr + 1));// 4 数组指针+1 仍然是一个数组指针
//	printf("%d\n", sizeof(&arr[0] + 1));// 4  char*
//
//	printf("%d\n", strlen(*arr));// 未定义行为 char和char*不匹配
//	printf("%d\n", strlen(arr[1]));//同上
//	printf("%d\n", strlen(&arr));//&arr 属于char(*)[]类型和char*不是同一个类型
//	printf("%d\n", strlen(&arr + 1));// 跳过整个数组,访问数组后面的空间
//	printf("%d\n", strlen(&arr[0] + 1));// 5 指向b的地址,然后往后面数遇到\0就结束
//	system("pause");
//	return 0;
//
//}
//**********************************************************************************************************
//**第五组**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p)); // 4   p的类型为char* (指针在32位操作系统下占4个字节)
//	printf("%d\n", sizeof(p + 1));// 4  指针+1仍然是指针
//	printf("%d\n", sizeof(p[1])); //1 对应的是字符b char占一个字节
//	printf("%d\n", sizeof(*(p + 1))); // 1 *(p+1)=p[1]
//	printf("%d\n", sizeof(&p)); //4 二级指针仍然是指针
//	printf("%d\n", sizeof(&p + 1));//4 二级指针+1仍然是二级指针
//	printf("%d\n", sizeof(&p[0] + 1)); // 4 p[0]对应a,然后取&得到char*
//
//	printf("%d\n", strlen(p));// 6 指向一个字符串
//	printf("%d\n", strlen(p + 1));//5 从p+1个元素往后找遇到\0就结束
//	printf("%d\n", strlen(*p));// 未定义行为 解引用得到一个char 类型
//	printf("%d\n", strlen(p[1]));// 未定义行为 得到一个字符b同上
//	printf("%d\n", strlen(&p));// 未定义行为  得到一个char** 和char*不是一个类型
//	printf("%d\n", strlen(&p + 1));//未定义行为  得到一个char** 和char*不是一个类型
//	printf("%d\n", strlen(&p[0] + 1));//5 得到一个指向b的char* 然后依次往后面找遇到\0结束
//
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//**第五组**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//长度为3个元素的一维数组,每一个元素又是长度为4的一维数组
//	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//
//	printf("%d\n", sizeof(a));//48 一共12个元素,每一个元素又占4个字节
//	printf("%d\n", sizeof(a[0][0]));//4 int类型
//	printf("%d\n", sizeof(a[0]));//16 代表第一行的4个元素,一个元素占4个字节,一共占16个字节int[4]
//	printf("%d\n", sizeof(a[0] + 1));//4 等于a[0]是第一行的数组名,数组名参与运算会隐式转为指针.指针在32位操作系统下占4个字节
//	printf("%d\n", sizeof(*(a[0] + 1)));//4  a[0]+1类型是int*,然后在解引用得到int
//	printf("%d\n", sizeof(a[0][1]));//4 *(a[0]+1)=a[0][1] a[0]相当于第一行数组名
//	printf("%d\n", sizeof(&a[0] + 1));// 4 &a[0]+1 数组指针int(*)[4]
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 &a[0]+1 数组指针int(*)[4],然后在*进行解引用
//	printf("%d\n", sizeof(*a));//16 *(a+0)=a[0]里面有4个元素,一共占16个字节in[4]
//	//特别提示:
//	//sizef()是一个运算符,特点是在编译期求值,
//	//数组下标越界  属于未定义行为,前提条件是内存访问越界,这是在程序运行的时候,也就是说程序在编译期的时候已经识别出了int[4]
//	printf("%d\n", sizeof(a[3]));// 16
//
//	printf("%d\n", sizeof(a[100]));//16
//	//但是这个就属于数组下标越界,属于典型的未定义行为
//	printf("%d\n", a[100]);//数组下标越界,未定义行为
//	system("pause");
//	return 0;
//}
//****************************************************************************************************8
//**重点提示:**
//sizeof ()是一个运算符(不是函数), 特点是在编译期求值,
//数组下标越界属于未定义行为, 前提条件是内存访问越界, 这是内存访问的行为.

#include <stdio.h>
#include <stdlib.h>

int main(){
	//长度为3个元素的一维数组,每一个元素又是长度为4的一维数组
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	//printf("%d\n", sizeof(a[3]));// 16
	//在编译期就直接变成了
	printf("%d\n",16);
	system("pause");
	return 0;
}

//*****************************************************************************************************
//**重点例题:**
//定义一个函数指针, 指向的函数有两个int形参, 并且返回一个函数指针,
//返回的函数指针指向有一个int形参并且返回值int的函数, 正确的是
//int(*(*p)(int, int))(int)
//
//函数的样子 : 
//
//Ptr Func(int, int)
//函数指针的样子 : 
//
//Ptr(*p)(int, int)
//把函数值返回展开 : 
//
//int(*(*p)(int, int))(int)// 将(*p)(int ,int)看做一个整体
