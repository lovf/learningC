//指针运算
//1.指针 + -整数
//2.指针 - 指针
//3.指针的关系运算
//* /
//1.指针 + -整数
/*#include <stdio.h>
#include <stdlib.h>
int main(){
char*p1 = (char*)0x100;
int *p2 = (int *)0x100;
short*p3 = (short*)0x100;
double *p4 = (double *)0x100;
//结果加几要根据指针的类型来判定
printf("%p\n", p1 + 1);
printf("%p\n", p2 + 1);
printf("%p\n", p3 + 1);
//十六进制的+-运算
printf("%p\n", p4 + 2);
printf("%p\n", p4- 1);
system("pause");
return 0;
指针+1相当于地址向后跳过一个元素。（具体该元素的大小与对应的指针类型有关）
指针-1相当于地址向前跳过一个元素。（具体该元素的大小与对应的指针类型有关）
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){
int  arr[4]  = { 1, 2, 3, 4 };
int* p = &arr[0];
//数组名表示的首地址
printf("%p\n", arr);
//也是首元素的地址
printf("%p\n", p);
//首元素的地址+1
printf("%p\n", p + 1);
printf("%d\n", *p);
//快速注释代码Ctrl+k然后在松开k按C
//快速取下注释Ctrl+k然后在松开k按U
//三个结果相等，都是数组第二个元素的值
//printf("%d\n", arr[1]);
//*（p+1）和[1]是等价的
//printf("%d\n", *(p + 1));
//printf("%d\n", p[1]);
system("pause");
return 0;
}
*/
//总结：1.数组在作为函数参数时，会隐式转换成指针
//2.数组名直接printf 式也会隐式转换成指针
//3.数组名作为参数运算时也会隐式转换成指针
//一定要将数组和指针区分开来（数组是数组指针就是指针)只不过数组容易转换成指针的形式
//数组不能下表取负，但是指针是可以的：
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	int*p = &arr[1];
//	//*（p-）是对p-1的解引用
//	printf("%d\n", *(p - 1));
//	// *(p - 1) 和p[-1]是等价的
//	printf("%d\n", p[-1]);
//	system("pause");
//	return 0;
//}

//2.关于指针-指针
//本身是没有任何意义的，但如果非得要进行运算必须要满足2个条件：
//1.两个指针的类型要相同
//2.要求两个指针必须指向同一个连续的内存空间
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int  arr[] = { 1, 2, 3, 4 };
//	int*p1 = &arr[0];
//	int*p2 = &arr[2];
//	//p1=0133FE40
//	printf("%p\n", p1);
//	//p2=0133FE48
//	printf("%p\n", p2);
//	//p2-p1=8 一个int占4个字节故结果为2
//	int ret = p2 - p1;
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	short  arr[] = { 1, 2, 3, 4 };
//	short*p1 = &arr[0];
//	short*p2 = &arr[2];
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	//p2-p1=4一个short 占2个字节故结果为2
//	int ret = p2 - p1;
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//void*:(比较特殊不能进行运算)
//void*只知道地址不知道大小
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//		int  arr[] = { 1, 2, 3, 4 };
//		void*p1 = &arr[0];
//		void*p2 = &arr[2];
//		printf("%d\n", p2 - p1);
//		system("pause");
//		return 0;
//		void*大小不知道直接参与运算导致编译错误
//
//3.指针的关系运算(数组名在进行算术运算的时候会隐士转化指针)
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "hehe";
//	数组名在参与运算的时候会隐士转化成指针
//	故该等式是在比较str1和str2地址/身份是否一样
//	隐式转化成指针了 
//	printf("%p %p\n", str1, str2);
//	if (str1 == str2){
//		printf("1\n");
//	}
//	else{
//		printf("2\n");
//	}
//	system("pause");
//	return 0;
//	}
//	
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
	int main(){
	char str1[] = "hehe";
	char str2[] = "haha";
	//strcmp 比较的是字符串的内容是否相等
	//printf ("%d\n",strcmp(str1,str2));
	if (strcmp(str1, str2) == 0){
		printf("相等");
	}
	else{
		printf("不相等");
	}
	system("pause");
	return 0;
}