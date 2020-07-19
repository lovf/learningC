指针类型的理解:
1.指针对应的内存的地址是哪个地址.(指针变量存的数据体现的)
2.这个内存地址对应的内存大小(指针的类型所决定的)

 特殊指针: void* (不是空指针) 只考虑指针地址,不考虑内存大小


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

指针运算:(很容易产生野指针)

1.指针+- 整数
指针里面存的就是一个整数.

#include <stdio.h>
#include <stdlib.h>

int main () {

	char* p1 = (char*)0x100; //(针对野指针只要不解引用就可以了)
	short* p2 = (short*)0x100;
	int* p3 = (int*)0x100;
	double* p4 = (double*)0x100;

	printf("%p\n", p1 + 1);
	printf("%p\n", p2 + 1);
	printf("%p\n", p3 + 1);
	printf("%p\n", p4 + 1);
	printf("%p\n", p4 + 2);



    system ("pause");
    return 0;
}

指针+1相当于地址向后跳过一个元素(类型)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
指针-1相当于地址向前跳过一个元素
#include <stdio.h>
#include <stdlib.h>

int main() {

	char* p1 = (char*)0x100; //(针对野指针只要不解引用就可以了)
	short* p2 = (short*)0x100;
	int* p3 = (int*)0x100;
	double* p4 = (double*)0x100;

	printf("%p\n", p1 - 1);
	printf("%p\n", p2 - 1);
	printf("%p\n", p3 - 1);
	printf("%p\n", p4 - 1);
	printf("%p\n", p4 - 2);

	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {

	int arr[4] = { 1, 2, 3, 4 };
	int* p = &arr[0];

	printf("%p\n",arr);
	printf("%p\n",p);
	printf("%p\n",p+1);


	printf("%d\n",arr[1]);
	printf("%d\n",*(p+1));
	printf("%d\n", p[1]); //*(p+1)和p[1]是等价的,指针还能向数组一样(方括号取下标)


    system ("pause");
    return 0;
}

1.数组在作为函数参数的时候,会隐式转化成指针.
2.数组名指直接printf打印也会隐式转化成指针.
3.数组名参与运算也会隐式转化成指针.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

一定要将指针和数组区分开//////////////////////////////////////////////////////////////////
1.数组在作为函数参数的时候,会隐式转化成指针.
2.数组名指直接printf打印也会隐式转化成指针.
3.数组名参与运算也会隐式转化成指针.

*(p + 1)和p[1]是等价的, 指针还能向数组一样(方括号取下标) 数组的下标不能取负数,但是指针的下标可以
#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[4] = { 1, 2, 3, 4 };
	int* p = &arr[1];

	printf("%d\n", arr[1]);
	printf("%d\n", *(p - 1));
	printf("%d\n", p[-1]);//必须要合法 
	//*(p+1)和p[1]是等价的,指针还能向数组一样(方括号取下标)


	system("pause");
	return 0;
}
2.指针-指针
指针大部分是没有任何意义的.

指针相减要想有意义 

1.两个指针类型相同
2.连个指针必须指向同一个连续的内存空间

#include <stdio.h>
#include <stdlib.h>

int main () {

	//int arr[] = { 1, 2, 3, 4 };
	//int* p1 = &arr[0];
	//int* p2 = &arr[2]; 
	//int ret = p2 - p1;
	// 


	short arr[] = { 1, 2, 3, 4 };
	short* p1 = &arr[0];
	short* p2 = &arr[2];
	int ret = p2 - p1; //计算两个指针之间隔了多少个元素.

	printf("%p\n", p1);
	printf("%p\n",  p2);
	printf("ret = %d\n",ret);

    system ("pause");
    return 0;
} 
指针相减本质上就是算两个指针之间隔了多少个元素. 指针相减其实算的是指针+-整数的逆运算

*****指针相加不能计算***
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[4] = { 1, 2, 3, 4 };
	int* p = &arr[0];
	printf("%p\n",p);
	//p += 1;
	//p++;
	++p;
	printf("%p\n",p);
    system ("pause");
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void* 关于整数运算的说明:
#include <stdio.h>
#include <stdlib.h>

int main () {
	//+整数
	//void* p = (void*)0x100;
	//printf("%p\n", p + 1);//错误的 ,因为void*只知道地址不知道大小
	//指针之间进行计算
	int arr[4] = { 1, 2, 3, 4 };
	void* p1 = &arr[0];
	void* p2 = &arr[2];
	printf("%d\n",p2-p1);//错误

    system ("pause");
    return 0;
}
void* 不能进行+- 整数的运算,也不能进行指针相减
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
3.指针的关系比较  
指针的关系运算
这个比较相对比较重要:
==  !=  

规则就是比较两个指针中存的地址是不是一样

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

	char str1[] = "hehe";
	char str2[] = "hehe";
	printf("%p,%p\n",str1,str2);
	//if (str1 ==  str2) { //数组名参与运算时,会隐式转化成指针,数组不能比较大小,但是指针可以
	if (strcmp(str1,str2) == 0) { //比较的是字符串的内容
		printf("相等!\n");
	} else {
		printf("不相等!\n");
	}
    system ("pause");
    return 0;
}
c语言中,比较两个字符串,有两种方式

1. == 比较字符串的身份或者地址(是不是同一个字符串变量)
2. strcmp 比较字符串的内容(字符串中每一个字符是不是依次相同) strcmp 除了能比较字符串相等之外,还能比较字符串的大小
比较规则: 先看第一个ASCII值的大小,如果能分出大小关系,结果就确定了,如果第一个字符相同,那么就比较第二个字符的大小.("字典序")
strcmp(str1,str2)
1.如果str1<str2返回一个<0的整数
2.如果str1>str2返回一个>0整数  
一般常见的编程语言,字符串 == 都是在比较内容,但是两个例外 C语言和JAVA 

#include <stdio.h>
#include <stdlib.h>

int main () {
	//char* str1 = "hehe";//存的是首元素的地址
	//char* str2 = "hehe";
	char str1[] = "hehe";
	char str2[] = "hehe";
	if (str1 == str2) {
		printf("相等!\n");
	}
	else {
		printf("不相等!\n");
	}
    system ("pause");
    return 0;
}

针对比较大小一般没有意义,比较地址数值的大小 1.两个指针类型相同 2.两个指针指向同一个连续的内存空间 (数值,malloc) < <= > >=
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[4] = { 1, 2, 3, 4 };
	int* p = &arr[0];
	//if (p != NULL) {
	if (p) {
		*p = 20;
	}

    system ("pause");
    return 0;
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
指针和数组:

#include <stdio.h>
#include <stdlib.h>

int main () {

	int arr[4] = { 1, 2, 3, 4 };

	int* p = &arr[0];
	printf("%p\n", p); //首元素的地址
	printf("%p\n",arr);//数组名直接打印出来,会隐式转化为指针
    system ("pause");
    return 0;
}



二级指针:
二维数组:本质上也是一个一维数组,只不过里面的每一个元素也是一个一维数组.
二级指针:本质上也是一个一级指针,只不过这个指针的指向也是一个一级指针.


指针:1.内存2.地址对应的内存大小(类型)

typedef int* IntPtr;
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num = 10;
	IntPtr p = &num;
	//二级指针
	IntPtr* pp = &p;
	//*pp和p是等价的
	//*P和num是等价的
	//**pp就和num是等价的
	printf("%d\n",**pp);

    system ("pause");
    return 0;
}

指针数组:是一个数组,数组中的每一个元素又是一个指针.
数组指针:

#include <stdio.h>
#include <stdlib.h>

int main () {
	////指针数组:经常用
	//int* arr[4] = { 0 };
	////数组指针 :用处面试中常考
	//int(*arr)[4] = { 0 }; //类型叫做: int[4]
	////数组类型的理解
	//// 变量名 arr,arr的类型叫做int[4]
	//int arr[4];
	int arr[4] = { 1, 2, 3, 4 };
	//数组指针]
	int(*p)[4] = &arr;
	//int*
	printf("%p\n",&arr[0]);
	//int*
	printf("%p\n",arr+1);
	//int(*)[4]
	printf("%p\n", &arr+1);


    system ("pause");
    return 0;
}


**const和指针搭配: 有三种搭配方式

#include <stdio.h>
#include <stdlib.h>

int main () {

	int num1 = 10;
	int num2 = 20;

	const int* p = &num1;
	//第一种操作:根据地址修改指针对应的变量
	//*p = 100;
	//第二种操作:修改指针的指向
	//p = &num2;

    system ("pause");
    return 0;
}

const int* p: 限制根据指针修改对应的内存.
int const* p: 限制根据指针修改对应的内存.
int* const p: 限制指针的指向 



#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 2, 3, 4 };
	printf("%d\n",sizeof(arr)); // 16 求数组的字节大小 
	printf("%d\n",sizeof(arr+0)); //  4 数组名参与运算时会隐式转为指针

	printf("%d\n",sizeof(*arr)); // 4 数组不能直接进行解引用,但是指针可以 *(arr+0)意思是对首元素的地址进行解引用 得到1 ,占4个字节
	printf("%d\n",sizeof(*(arr+0)));//4
	printf("%d\n", sizeof(arr[0]));//4
	printf("%d\n",sizeof(arr+1));//4 数组名直接参与运算时会隐式转化为指针

	printf("%d\n",sizeof(&arr));//4数组指针

	printf("%d\n",sizeof(*&arr)); //16数组指针进行解引用,得到整个数组

	printf("%d\n",sizeof(&*arr)); //4 针对int 类型来取地址,得到int*
	printf("%d\n",sizeof(&arr+1));//4 数组指针+1,仍然是数组指针
	printf("%d\n",sizeof(&arr[0]+1)); // 4 int* 

    system ("pause");
    return 0;
}
















































