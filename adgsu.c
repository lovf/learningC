//操作符的属性

//运算级的优先级:核心多加括号 

//表达式的求值顺序
#include <stdio.h>
#include <stdlib.h>

int main () {

	int i = 1;
	int ret = ++i + ++i + ++i;
	printf("ret = %d\n",ret);
    system ("pause");
    return 0;
}
//++i + ++i + ++i 属于未定义行为:1. 多次 2.修改 3.无序  表达式中对某个值进行多次修改,由于表达式的求值顺序是不确定,就导致最终的值无法确定

//未定义行为的代码一定是错误的代码,最终的结果是不确定的

//指针

//基本概念:指针也是一个变量,这个变量里面存的是一个整数,这个整数具有特殊的含义,就是内存的地址.

//内存的特点: 
//1.内存支持随机访问. CPU在访问内存的时候,访问任何一个地址的数据的代价都非常低.
//2.内存和外存的对比:
//a>访问速度:访问内存的速度快,访问外存的速度慢,(慢3~4个数量级)
//b>容量:内存容量小,外存容量大
//c> 内存成本高,外存成本低
//d>内存断电后数据就没了,外存断电后数据还在
#include <stdio.h>
#include <stdlib.h>

int main () {

	int num = 10;//创建变量的同时等于申请一块内存空间
	int* p = &num;//取地址:首元素的地址 p的类型是(int*),p就是指针变量,里面存的内容是地址
	//*间接访问操作符/解引用运算/提领
	//根据地址找到对应的值
	printf("%d\n",*p);
	*p = 5;//也能修改指针
	printf("%d\n",*p);
	printf("%p\n",p);

    system ("pause");
    return 0;
}
//可以创建一个变量来保存num的地址,此时p这个变量就是指针变量
//p的类型叫做int* ,指针是一个统称 int*  double* char*
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main() {

	int num = 10;//创建变量的同时等于申请一块内存空间
	//内存没有申请不能使用,否则就出现未定义行为
	int* p = (int*)0x100000;
	printf("%d\n", *p);

	system("pause");
	return 0;
}
//内存必须申请了才能使用,没申请不能使用,如果强行使用未申请的内存就会出现访问非法内存,这是一种常见的"未定义行为"

//包含非法地址的指针,叫做"野指针".
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main() {

	int num = 10;//创建变量的同时等于申请一块内存空间
	int* p1 = (int*)0x100000;
	char* p2 = &num;
	printf("%d\n", sizeof(p1));
	printf("%d\n", sizeof(p2));

	char num2 = 10;
	char* p2 = &num2;

	system("pause");
	return 0;
}
//指针对应的内存地址是那个地址 (指针的值体现的)
//这个内存地址对应的内存大小是多大 _(指针的类型)

//一种特殊的指针,只有地址没有内存对应大小 (void*)  正因为没有限制内存的大小,因此void*对应的内存大小
//void*  不能进行解引用
#include <stdio.h>
#include <stdlib.h>
 
int main() {

	int num = 10;//创建变量的同时等于申请一块内存空间
	int* p1 = (int*)0x100000;
	char* p2 = &num;

	char num2 = 10;
	char* p2 = &num2;

	system("pause");
	return 0;
}
//访问字节的多少与指针的类型有关
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num1 = 0x11223344;
	int* p1 = &num1;
	printf("%x\n",*p1); //int*的解引用访问4个字节
	char* p2 = p1;
	printf("%x\n",*p2); //char*的解引用访问1个字节

    system ("pause");
    return 0;
}

//空指针  VS  void*  
//空指针:比较特殊的指针,空指针的地址就是0.(NULL) 空指针是一中特殊的野指针.
//****指针占几个字节:
//32位系统上,指针占4个字节 支持最大内存就是4G
//64位系统上,指针占8个字节. 

//64位操作系统能运行32位程序的,VS生成的程序默认为32位来生成.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num = 0x11223344;
	int* p = &num;
	printf("%x\n",*p);
	char* p2 = (char*)p;
	printf("%x\n",*p2);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//野指针:1.指针未初始化
#include <stdio.h>
#include <stdlib.h>

int main () {
	int* p;
	*p = 10;
	printf("%d\n", *p);

    system ("pause");
    return 0;
}

//2.指针越界访问  

#include <stdio.h>
#include <stdlib.h>

int main () {

	int arr[4] = { 0 };
	printf("%d\n",arr[4]);
	int* p = &arr[4];
	printf("%d\n",*p);
    system ("pause");
    return 0;
}

//3.指针指向的空间释放
//典型的错误 (局部变量的生命周期跟随当前代码快,函数结束的时候,即随着释放)
#include <stdio.h>
#include <stdlib.h>

int* Func() {
	int num = 10;
	return &num;
}

int main () {
	int* p = Func();
	printf("%d\n",*p);


    system ("pause");
    return 0;
}
//如何规避野指针:
//1.在指针初始化
//2.小心指针越界

//3.指针指向空间释放即放置NULL
//4.指针使用之前检查有效性
















