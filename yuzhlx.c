

//结构体大小的计算
//64位能运行32位程序的VS默认是按照32位来生成的 char  1:short 2:int 4:long 4 :float 4: double 8: 
//结构体内存对齐原则:
//1.结构体第一个成员在起始的位置2.除第一个成员外,其他成员要对齐到某个数(对齐数的整数倍)的地址处..
//.对齐数等于编译器默认的对齐数(借助#pragma ()可以改变)和该成员大小之中的较小的那个数值
//3.结构体的结构体的总大小等于最大对齐数的整数倍4.如果嵌套了结构体嵌套的结构体对齐到最大对齐数的整数倍,结构体的整体大小就是最大对齐数的整数倍
//
//结构体大小计算分为两种情况:
//当没有定义 #pragma pack(value)时,此时对齐数 = Min(编译器默认的对齐数8,sizeof())
//举例1.：
//#include <stdlib.h>
//#include <stdio.h>
//
//struct Test{
//	char a[5];
//	int b;
//	double c;
//};
//
//int main(){
//	struct Test s = { " ", 4 ,5.0 };
//	printf("sizeof(Test) = %d\n", sizeof(s));
//
//	system("pause");
//	return 0;
//}
// 成员a 5个字节  3个空字节  成员b 4个字节 4个空字节  成员c 8个字节  加起来一共24个字节
//举例2.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Test{
//	char a;
//	double b;
//	char c;
//	double d;
//};
//int main(){
//	struct Test s;
//	printf("sizeof(s) = %d\n",sizeof(s));
//	system("pause");
//	return 0;
//}
//*****************************************
//当定义了 #pragma pack(value)，此时对齐数 = Min(Value,sizeof())它的计算规则仍然满足结构体的内存对齐原则
//举例1.
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(4)
//typedef struct{
//	char a[5];
//	int b;
//	double c;
//}Test;
//
//int main(void)
//{
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(4)
//typedef struct{
//	char a[5];
//	int b;
//	double c;
//}Test;
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//
//	system("pause");
//	return 0;
//}
//结构体的嵌套计算方式:
//举例:
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S3{
//	double a;
//	char b;
//	int c;
//};
//
//struct S4{
//
//	char e;
//	struct S3 s3;
//	double f;
//};
//
//int main(){
//
//
//	printf("sizeof(struct S4)=%d\n", sizeof(struct S4));
//
//	system("pause");
//	return 0;
//
//}
//嵌套的结构对应到最大对齐数的整数倍上
//整体结果为://1 + 7(空字节)+S3(16)+8
//
//联合体大小的计算业分为两种情况:
//
//当没有定义 #pragma pack(value)这种指定 value 字节进行对齐时，它的计算规则是：
//联合体中最大成员所占内存的大小且必须为最大类型所占字节的最小倍数
//联合体成员共用一块内存空间.
//举例如下
//
//#include <stdio.h>
//#include "stdio.h"
//
//union{
//	char a[7];
//	int b[2];
//	double c;
//}Test;
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//
//	system("pause");
//	return 0;
//}
//********************************************************************
//
//#include <stdio.h>
//#include "stdio.h"
//
//union Test1{
//	char a[5];
//	int i;
//	
//};
//
//union Test2{
//	short a[7];
//	int i;
//
//};
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(union Test1));
//	printf("sizeof(Test) = %d\n", sizeof(union Test2));
//	system("pause");
//}

//*********************************
//当定义了 #pragma pack(value)，以 value字节进行对齐时，它的计算规则如下：
//联合体中最大成员所占字节且必须为value的最小倍数。
//举例如下：
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(2)
//union{
//	char a[7];
//	int b[3];
//	double c;
//}Test;
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//	system("pause");
//}
//****************************************************************************
//
//******************结构体嵌套联合体的大小计算****
///*同理也是分为两种情况：
//
//当没有定义 #pragma pack(value)这种指定 value 字节进行对齐时，它的计算规则是：
//联合体大小计算等于按照最大成员所占字节且为最大类型所对应的字节的最小整数倍的原则进行计算，
//它所占的字节数与结构体中其他成员所占字节的总和应为结构体中最大数据类型所对应的字节的最小倍数。
//*/
//举例:
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//typedef  struct {
//	//联合体
//	union{
//		char a[10];
//		int b[2];
//		double c;
//	}test;
//	//联合体等于16  结构体等于: 5+3(空字节)+4+4(空字节)+8
//	
//	char d[5];
//	int e;
//	double f;
//}Test;
//
//int main(){
//	printf("sizeof(Test) = %d\n", sizeof(Test));
//
//	system("pause");
//}

//根据上述的表述结构体总的计算结果是: 联合体总体大小 + 结构体总体大小=16+24=40
//
//当定义了 #pragma pack(value)，以 value字节进行对齐时，它的计算规则如下：
//结构体总体大小等于联合体总体大小+ 结构体自身的大小,只不过这块联合体和结构体的大小要按照定义的#pragma pack(value)的方式进行计算
//举例:
#include <stdio.h>
#include <stdlib.h>

#pragma pack(2)
typedef struct{
	union{
		char a[10];
		int b[2];
		double c;
	}test;
	char d[5];
	int e;
	double f;
}Test;

int main(){
	printf("sizeof(Test) = %d\n", sizeof(Test));

	system("pause");
	return 0;
}
////联合体(10个)+结构体(5+1(空字节)+4+8)==28