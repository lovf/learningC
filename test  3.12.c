//*************************自定义类型 结构体 + 枚举 + 联合********************************8
//1.结构体使用举例:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////枚举: 里面都是整数
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOW,
//
//};
////结果体类型
//struct Student {
//	char name[1024];
//	int age;
//	int core;
//	enum Sex sex;
//	char id[1024];
//};
//
//int main(){
//	struct Student s = { "liming", 20, 120, MALE ,"2020312"};
//	printf("name=%s age=%d core=%d sex=%d id=%s\n",s.name,s.age,s.core,s.sex,s.id);
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************
//2.结果体传参
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////枚举: 里面都是整数
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOW,
//
//};
////结果体类型
//struct Student {
//	char name[1024];
//	int age;
//	int core;
//	enum Sex sex;
//	char id[1024];
//};
////结构体传参:传指针的方式
//void print(struct Student* s){
//	printf("name=%s age=%d core=%d sex=%d id=%s\n", s->name, s->age, s->core, s->sex, s->id);
//}
//
//
//int main(){
//	struct Student s = { "liming", 20, 120, MALE, "2020312" };
//	print(&s);
//	system("pause");
//	return 0;
//}
////总结:对于结构体传参的时候,要传结构体的地址
//******结构体赋值:
//结构体不能直接赋值: struct Student s = { "liming", 20, 120, MALE, "2020312" };
 // s2 = { "lisi", 20, };这样的赋值 方式不对
//必须创建新变量的方式来复制 struct Student s = { "liming", 20, 120, MALE, "2020312" };
//    创建的另一个变量      struct Student s2 = { "lisi", 34, 126 FEMALE, "2020312" };
//     进行变量之间的赋值    s=s2

//或者利用strcpy函数进行赋值  strcpy(s.name,s2.name)
//重点::结构体内存对齐:

//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct  Test{
//	int a;
//	int b;
//	int c;
//
//};
//int main(){
//	struct  Test t;
//	printf("%d\n",sizeof(t)); //12
//	system("pause");
//	return 0;
//}
//********************************************************************************************************888
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct  Test{
//	char a;
//	int b;
//	int c;
//
//};
//int main(){
//	struct  Test t;
//	printf("%d\n",sizeof(t)); //12
//	system("pause");
//	return 0;
//}

//**************************************************************************************************
//

//结构体内存对齐规则:

//1.描述的是结构体中第一个成员布局
//2.描述的除了第一个成员,其他成员的布局规则:(其他成员要对齐到某个数(对齐数的整数倍)的地址上)
//对齐数等于编译器默认的对齐数(VS是8)与该成员大小中较小的那个值(对齐数=(8,sizeof())
//编译器中默认的对齐数可以改变通过#pragma pack()
//#include <stdio.h>
//#include <stdlib.h>
//
//struct  Test{
//	int a;
//	
//	char b;
//};
//int main(){
//	struct  Test t;
//	printf("%d\n",sizeof(t)); //  8
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct Test{
//	char a;
//	short b;
//	int c;
//	double d;
//	int e;
//	short f;
//	char g;
//};
//
//int main(){
//	//同时遵循结构体内存对齐的规则
//	printf("%d\n", sizeof(struct Test));// 24 
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct Test{
//	char a;
//
//	double b;
//	char c;
//	double d;
//};
//
//int main(){
//	//同时遵循结构体内存对齐的规则
//	printf("%d\n", sizeof(struct Test));// 32
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//练习1.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S1{
//
//	char c1;
//	int i;
//	char c2;
//};
//
//int main(){
//
//	printf("%d\n",sizeof(struct S1));//12
//	system("pause");
//	return 0;
//}

//*************************************************************************************************************
////练习2.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S2{
//
//	char c1;
//	char c2;
//	int i;
//};
//
//int main(){
//	
//	printf("%d\n", sizeof(struct S2));//8
//	system("pause");
//	return 0;
//}

//********************************************************************************************************
//练习3.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S3{
//	double d;
//	char c;
//	int i;
//};
//
//int main(){
//
//	printf("%d\n", sizeof(struct S3));//  16
//	system("pause");
//	return 0;
//}
//*************************************************************************************************************
//练习4.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct S3{
//	double d;
//	char c;
//	int i;
//};
//
//struct s4{
//	
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main(){
//
//	printf("%d\n", sizeof(struct s4));//  32
//	system("pause");
//	return 0;
//}
//***************************************************************************************************/

//拓展:关于最大对齐数=编译器的默认值和改成员字节大小之中较小的哪一个数值 但是VS的默认值可以修改的即对齐数是可以修改的
//举例:
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Test{
//
//	char a;
//	double b;
//
//
//};
//
//int main(){
//
//	printf("%d\n",sizeof(struct Test));//16
//
//	system("pause");
//	return 0;
//}
//***************************************************************************************************/
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(4)
//struct Test{
//
//	char a;
//	double b;
//};
//
//int main(){
//
//	printf("%d\n",sizeof(struct Test));//12 
//
//	system("pause");
//	return 0;
//}
// #pragma pack(4) 括号里面就是自己将默认的对齐数修改成4.,然后再求其占几个字节
//*********************************************************************************************************

//*******************************枚举:*******************************
//#include <stdio.h>
//#include <stdlib.h>
//
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOW,
//};
//int main(){
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOW);
//	system("pause");
//	return 0;
//}
//**************************************************************************************************************
//在C语言中,enum和int是等价的.(C是弱类型语言)
//enum:就是可以穷举出来的概念.枚举在内存中的存储和int是一样的(字节序+原码反码补码)

//**************************联合体(共用体)****************************
//联合体中的各种成员,共用一块内存空间
//联合体大小的计算:(了解)
//#include <stdio.h>
//#include <stdlib.h>
//
//
//union un1{
//	char c[5];
//	int i;
//};
//
//
//union un2{
//	short c[7];
//	int i;
//};
//
//int main(){
//	printf("%d\n", sizeof(union un1));//8
//	printf("%d\n", sizeof(union un2));//16
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************
//联合体的应用:(大小端字节序的判定)(因为联合体的各个成员,共用一块内存空间)

#include <stdio.h>
#include <stdlib.h>

union Un{
	int i;
	char c;
};
//typedef union Un un;
//返回1表示小端字节序
//返回0表示大端字节序
int IsLittleEnd(){
	union Un u;
	u.i = 0x11223344;
	if (u.c == 0x44){
		return 1;
	}
return 0;
}
int main(){
	int ret = IsLittleEnd();
	printf("返回1表示小端字节序,返回0表示大端字节\n");

	printf("%d\n", ret);
	system("pause");
	return 0;
}























