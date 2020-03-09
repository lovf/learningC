//指针进阶习题
//问题1.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* Ptr = (int*)(&a+1); //  数组指针+1跳过整个数组(int(*)[5]类型)
//
//	printf("%d,%d\n",*(a+1),*(Ptr-1));// a+1 指首元素的地址+1,然后在进行解引用
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//问题2.

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Test {
//	int Num;
//	char* pcName;
//	char cha[3];
//	short Sba[4];
//};
//
//int main(){
//	struct Test* p = (struct Test*)0x100000;
//
//	printf("%d\n",sizeof(struct Test));// 20个字节
//	printf("%p\n",p + 0x1);//0x100014
//
//	printf("%p\n",(unsigned long)p+0x1);//0x100001 (unsigned long)p强制转换整型,相当于整数+1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
// 
//	printf("%d",sizeof(unsigned long ));
//	system("pause");
//	return 0;
//}

//*************************************************************************************************************
//问题3.
//#include <stdlib.h>
//#include <stdlib.h>
//
//int main(){
//	int a[4] = { 1, 2, 3, 4 };
//	int* Ptr1 = (int*)(&a+1);
//	int* Ptr2 = (int*)((int)a + 1);
//
//	printf("%x,%x\n",Ptr1[-1],*Ptr2);
//
//
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//问题4.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	//长度为3个元素的一维数组,每一个元素的长度是2
//	//逗号表达式,其值等于最后一个元素的长度int a=(1,2,3,4,5) a的值为5
//	int a[3][2] = { (0,1), (2,3), (4,5) };
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	printf("%d\n",a[0][0]);
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//问题5.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int a[5][5];//二维数组
//	int(*p)[4];//数组指针  p指向长度为4的一维数组int[4]
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");
//	return 0;
//}

//二维数组在调用的时候可以使用数组指针的形式进行调用表示.
//二维数组的表示:
//int a[5][5];
//int a[][5];
//int(*p)[5];
//***************************************************************
//问题6.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//二维数组,长度为2个元素的一维数组,每一个元素的长度为5
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* Ptr1 = (int*)(&aa+1);//数组指针 +1 跳过整个数组 指向10后面的地址
//	int* Ptr2 = (int*)(*(aa+1));// 首元素的地址+1 aa[0]+1指向aa[1]的地址(即6后面的地址)
//	//*(aa+1)=aa[1]
//	printf("%d,%d\n",*(Ptr1-1),*(Ptr2-1));//10 5
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//问题7.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char* a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;//pa=pa+1
//
//	printf("%s\n",*pa);
//	//%s的含义就是从0x200开始往后打印,一直打印到\0的结束
//	system("pause");
//	return 0;
//}
//*****************************************************************************************************
//问题8.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;


	printf("%s\n", **++cpp);//从右到左依次计算
	printf("%s\n", *--*++cpp + 3);//
	printf("%s\n",*cpp[-2]+3);//*cpp[-2]=* *(cpp-2)

	printf("%s\n",cpp[-1][-1]+1);//cpp[-1]=*(cpp-1)   *(x-1)


	
	system("pause");
	return 0;

}









































































































































































