//*********字节序问题:***************
//小端字节序: (0a 00 00 00) 数字的低位存到内存的低地址上   小(小端字节序)    小(数字低的)    小(低地址上)
//大端字节序: (00 00 00 0a) 数字的低位存在内存的高地址上 大端字节序的方式比较像日常数学一样 (千位 百位 十位 个位)
//	一台机器大端或者小端取决于CPU
//
//#include <stdio.h>
//#include <stdlib.h>
//
////返回值是1,证明是小端字节序.返回值是0,证明是大端字节序
//int IsLittleEnd(){
//	int num = 0x11113344;
//	int* p = &num;
//	char* p2 = (char*)p;
//	if (*p2 == 0x44){
//		return 1;
//	}
//	return 0;
//}
//int main(){
//
//	printf("%d\n", IsLittleEnd());
//	system("pause");
//	return 0;
//}
//**指针变量涉及的信息:
//1.内存对应的地址是那个地址(指针变量中存的数字决定的)
//2.这个内存对应的大小(指针类型体现的)int* 占4个字节 char*占一个字节
//**指针的解引用
#include <stdio.h>
#include <stdio.h>

int main(){
	int num = 10;
	//此处的*和int是一个整体共同构成(int*)
	int* p = &num;
	//此处的*是解引用, 根据指针变量中存储的地址找到对应内存中的值.
	printf("%d\n", *p);

	system("pause");
	return 0;
}
