//*******************************联合体**************************
//联合体中的各个成员共用一块内存空间
//应用1.
//大小端字节序的的判定
//#include <stdio.h>
//#include <stdlib.h>
//
//
//union Un{
//	int i;
//	char c;
//};
//typedef union Un Un;
//int IsLittleEnd(){
//	Un un;
//	un.i = 0x11223344;
//	if (un.c == 0x44){
//		return 1;
//	}
//	return 0;
//}
//
//int main(){
//	printf("%d\n", IsLittleEnd());
//
//	system("pause");
//	return 0;
//}

//应用2.联合体大小的计算

//分为两种情况:

//1.当没有定义 #pragma pack(N)这种指定 N字节进行对齐时，它的计算规则是：
//联合体中最大成员所占内存的大小且必须为最大类型所占字节的整数倍。举例如下**

//#include <stdio.h>
//#include "stdio.h"
//
//union Test{
//	char a[5];
//	int b[2];
//	double c;
//};
//
//int main(){
//	union Test test;
//	printf("sizeof(Test) = %d\n", sizeof(test));
//
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************

//2.当定义了 #pragma pack(N)，以 N字节进行对齐时，它的计算规则如下：
//联合体中最大成员所占字节且必须为N的最小倍数。**

#include <stdio.h>
#include <stdlib.h>

#pragma pack(2)
union{
	char a[7];
	int b[3];
	double c;
}Test;

int main(){
	printf("sizeof(Test) = %d\n", sizeof(Test));
	system("pause");
}

