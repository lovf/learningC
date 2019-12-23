//指针和指针类型理解
//1.指针
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	//在内存中申请一块空间
//	int a = 10;
//	//代表的是取a的地址，实行的是取&操作符
//	//将a 的地址存放于p中
//	int*p = &a;
//	//打印的是*p指的对应的值
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//总结：指针就是一个变量，用来存放地址的。（存放的值当成地址来处理的）
//指针是用来存放地址的，地址是唯一标示一块地址的空间。
//指针的大小在32位操作平台上是4个字节，在64微操作平台上是8个字节。（1个字节是8个比特位）
//2.指针和指针的类型
//当知道指针类型的时候当指针参与运算的时候就知道指针到底向前或者向后走了多大的距离。
//例1.关于指针类型的意义：
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int n=10;
//	char*p1 = (char*)&n;
//	int* p2 = &n;
//	short*p3 = (short*)&n;
//	double *p4 = (double*)&n;
//
//	printf("%p\n", &n);
//	printf("%p\n", p1);
//	printf("%p\n", p1 + 1);
//	
//	printf("%p\n", p2);
//	printf("%p\n", p2 + 1);
//	
//	printf("%p\n", p3);
//	printf("%p\n", p3 + 1);
//
//	printf("%p\n", p4);
//	printf("%p\n", p4 + 1);
//	printf("%p\n", p4 + 2);
//
//	system("pause");
//	return 0;
//}
//总结：最终的结果都于指针对应的类型有关。
//指针的类型决定了，对指针解引用的时候有多大的权限。（自身能操作几个字节）。
//例如：char*的指针解引用就只能访问一个字节，而int*的指针解引用就能访问4个字节。
//3.指针类型的字节：
#include<stdio.h>
#include<stdlib.h>

int main(){

	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(double));//8

	system("pause");
	return 0;

}





//指针运算
//1.指针+-整数
//2.指针-指针
//3.指针的关系运算
//
//1.指针 + -整数
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	char*p1 = (char*)0x100;
//	int *p2 = (int *)0x100;
//	short*p3 = (short*)0x100;
//	double *p4 = (double *)0x100;
//	//结果加几要根据指针的类型来判定
//	printf("%p\n", p1 + 1);
//	printf("%p\n", p2 + 1);
//	printf("%p\n", p3 + 1);
//	//十六进制的+-运算
//	printf("%p\n", p4 + 2);
//	printf("%p\n", p4- 1);
//	system("pause");
//	return 0;
//	//指针+1相当于地址向后跳过一个元素。（具体该元素的大小与对应的指针类型有关）
//	//指针-1相当于地址向前跳过一个元素。（具体该元素的大小与对应的指针类型有关）
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int  arr[4]  = { 1, 2, 3, 4 };
//	int* p = &arr[0];
//	//数组名表示的首地址
//	printf("%p\n", arr);
//	//也是首元素的地址
//	printf("%p\n", p);
//	//首元素的地址+1
//	printf("%p\n", p + 1);
//	printf("%d\n", *p);
//	//快速注释代码Ctrl+k然后在松开k按C
//	//快速取下注释Ctrl+k然后在松开k按U
//	//三个结果相等，都是数组第二个元素的值
//	//printf("%d\n", arr[1]);
//	//*（p+1）和[1]是等价的
//	//printf("%d\n", *(p + 1));
//	//printf("%d\n", p[1]);
//	system("pause");
//	return 0;
//}
//
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
//
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
////void*:(比较特殊不能进行运算)
////void*只知道地址不知道大小，在进行算术运算时指针类型的大小一定要搞清楚
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//		int  arr[] = { 1, 2, 3, 4 };
//		void*p1 = &arr[0];
//		void*p2 = &arr[2];
//		printf("%d\n", p2 - p1);
//		system("pause");
//		return 0;
//		//void*大小不知道直接参与运算导致编译错误
//
////3.指针的关系运算(数组名在进行算术运算的时候会隐式转化指针)
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "hehe";
//	//数组名在参与运算的时候会隐式转化成指针,故该等式是在比较str1和str2地址/身份是否一样
//	//隐式转化成指针了 
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
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//	int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	//strcmp 比较的是字符串的内容是否相等
//	//printf ("%d\n",strcmp(str1,str2));
//	if (strcmp(str1, str2) == 0){
//		printf("相等");
//	}
//	else{
//		printf("不相等");
//	}
//	system("pause");
//	return 0;
//}
//
//二级指针
//#include<stdio.h>
//#include <stdlib.h>
//typedef int* Intptr;
//int main(){
//	int num =10;
//	//*p和num是等价的
//	Intptr p = &num;
//	//*pp和p是等价的
//	Intptr* pp = &p;
//	//**p和num是等价的
//	printf("%d\n", **pp);
//	system("pause");
//	return 0;
//}
//数组指针和指针数组
//数组指针是一个指针，指向一个数组
//指针数组是一个数组，数组中的每一个元素又都是一个指针变量
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[4] = { 1, 2, 3, 4 };
//	int (*p) [4] = &arr;
//	//结果全部相等
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	system("pause");
//	return 0;
//}
//const 常量和指针
//const int* p 限制根据指针修改对应的内存
//int const* p 限制根据指针修改对应的内存
//int*const p 限制修改指针的指向
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	const int* p=&num1; //1.限制根据指针修改对应的内存
//		//int const* p //2.限制根据指针修改对应的内存
//		//int*const p //3.限制修改指针的指向
//	//第一种操作，根据地址修改对应的内存
//		//*p= 100;
//	//第二种操作，修改指针的指向
//	p = &num2;
//	system("pause");
//	return 0;
//}
//1和2属于限制根据指针修改对应的内存
//3.属于限制指针的指向
//关于指针例题总结：
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(arr));//16
//	printf("%d\n", sizeof(arr+0));//4 数组名在参与运算时会隐式转化成指针
//	printf("%d\n", sizeof(*arr));//4 数组名本身不能取地址，但能转化为首元素的地址，再解引用
//	printf("%d\n", sizeof(*(arr+0)));//4
//	printf("%d\n", sizeof(arr[0]));//4  *(arr+0)和arr[0]是等价的
//	printf("%d\n", sizeof(arr + 1));//4 数组名在参与算术运算时会隐式转化为指针
//	printf("%d\n", sizeof(&arr ));//4 数组指针还是指针，指针在32位平台上是4个字节，在64位平台上是8个字节
//	printf("%d\n", sizeof(*&arr));//16 &arr是一个数组指针，在对其进行解引用得到一个数组
//	printf("%d\n", sizeof(&*arr));//4 *arr是一个int（整数），在对int 取地址得到一个int*
//	printf("%d\n", sizeof(&arr+1));//4  &arr是一个数组指针，数组指针+1仍然是一个数组指针，只要是指针32位操作系统下都是4
//	printf("%d\n", sizeof(&arr[0] + 1)); //4arr[0]是一个int（整数）整数取地址得到int*
//
//	system("pause");
//	return 0;
//}


//关于指针例题的总结：
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	////////////////////////////////
//	第一组
//	////////////////////////////////
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));// 6 代表整个数组的内存大小
//	printf("%d\n", sizeof (arr + 0)); // 4 数组名参与运算隐式转化成指针
//	printf("%d\n", sizeof(*arr));//1 *arr得到一个char型指向a 
//	printf("%d\n", sizeof(arr[1]));// 1 得到一个char
//	&arr和char*不是一个类型，如果隐式类型转过去的话，就会得到一个指向‘a’的指针，
//	从这个指针开始往后找\0仍然找不到
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1)); //这个和上面是一样的也是指针
//	printf("%d\n", strlen(&arr[0] + 1));//得到b的指针 属于未定义行为
//	printf("%d\n", strlen(arr[0] + 1));
//	////////////////////////////////
//	第二组
//	////////////////////////////////
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); // 7 对于字符串而言以\0结束
//	printf("%d\n", sizeof(arr + 0));//4 数组名参与运算的时候会隐式转换位指针
//	printf("%d\n", sizeof(*arr)); //1 得到一个字符
//	printf("%d\n", sizeof(arr[0]));//1
//	printf("%d\n", sizeof(arr[1]));//1 同上
//	printf("%d\n", &arr); //4  数组指针
//	printf("%d\n", sizeof(&arr + 1));//4 也是一个数组指针
//	printf("%d\n", sizeof (&arr[0] + 1));// 4 也是一个指针
//
//	printf("%d\n", strlen(arr)); // 6 求字符串的长度遇到\0就结束
//	printp("%d\n", strlen(arr + 0));//6 得到的还是指向a的指针
//	printf("%d\n", strlen(*arr));//未定义行为  得到一个字符a/////////
//	printf("%d\n", strlen(arr[1]));  //未定义行为
//	printf("%d\n", strlen(&arr)); //6 &arr是一个数组指针 里面的地址恰好就是首元素的地址 
//	然后strlen 函数依次找当找到\0的时候停止 恰好到f的位置停止
//	printf("%d\n", strlen(&arr + 1)); //未定义行位  当&arr +1 等于跳过了整个数组
//	printf("%d\n", strlen(&arr[0] + 1)); //5  得到指向b的指针 依次向后找 当找到\0结束
//	////////////////////////////////
//	第三组
//	////////////////////////////////
//	char*p = "abcdef";
//	printf("%d\n", sizeof (p));//4 p就是一个指针
//	printf("%d\n", sizeof (p + 1));// 4 指针加1还是一个指针 指针在32位操作平台上是4个字节 在64位操作系统上是8个字节
//	printf("%d\n", sizeof(*p));// 1 得到一个char 类型
//	printf("%d\n", sizeof(p[1]));//1 是一个char
//	printf("%d\n", sizeof(&p)); //4 char**
//	printf("%d\n", sizeof(&p + 1)); //4 char**
//	printf("%d\n",sizeof(&p[0]+1)); //4 指向b的地址
//
//
//	printf("%d\n", strlen(p));//6 
//	printf("%d\n", strlen(p+1));//5 
//	printf("%d\n", strlen(*p));// 未定义行为
//	printf("%d\n", strlen(p[1]));//未定义行为
//	printf("%d\n", strlen(&p)); //&p类似于char**
//	printf("%d\n",strlen(&p+1))//未定义行为
//	printf("%d\n", strlen(&p[0] + 1));//5 指向依次向后移动直到\0结束
//
//	
//	system("pause");
//	return 0;
//
//}
//	////////////////////////////////
//	第四组
//	////////////////////////////////
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(arr));//16
//	//printf("%d\n", sizeof(arr + 0));//4 数组名在参与运算时会隐式转化成指针
//	//printf("%d\n", sizeof(*arr));//4 数组名本身不能取地址，但能转化为首元素的地址，再解引用得到1（属于int）
//	//printf("%d\n", sizeof(*(arr + 0)));//4
//	//printf("%d\n", sizeof(arr[0]));//4  *(arr+0)和arr[0]是等价的
//	//printf("%d\n", sizeof(arr + 1));//4 数组名在参与算术运算时会隐式转化为指针
//	//printf("%d\n", sizeof(&arr));//4 数组指针还是指针，指针在32位平台上是4个字节，在64位平台上是8个字节
//	//printf("%d\n", sizeof(*&arr));//16 &arr是一个数组指针，在对其进行解引用得到一个数组
//	//printf("%d\n", sizeof(&*arr));//4 *arr是一个int（整数），在对int 取地址得到一个int*
//	//printf("%d\n", sizeof(&arr + 1));//4  &arr是一个数组指针，数组指针+1仍然是一个数组指针，只要是指针32位操作系统下都是4
//	//printf("%d\n", sizeof(&arr[0] + 1)); //4 arr[0]是一个int（整数）整数取地址得到的类型是int*
//	system("pause");
//	return 0;
//}
//strlen:求的是字符串的以\0结束，当strlen(char*)括号中位char*时才有值，括号的类型为字符或者指针均属于未定义行为
//sizeof:求的是字符数组 ，当是字符串数组的时候一定要算上\0的
////////////////////
//结构体
////////////////////
//  //1.结构体的构成
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
////在c 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，
////所以按照 c 语言规范是没有办法遍历枚举类型的
//	enum sex {fale,female};
//	struct student {
//		//结构体的成员
//		char name[10];
//		int age;
//		int score;
//		enum sex sex;
//	};
//	int main(){
//		//结构体是一个类型，要借助变量来实现
//		//struct sturct 是一个整体，构成了自定制的一种类型
//		//s的类型就叫做struct student
//		struct student s = { "zhangsan", 20, 45, female };
//		//s={ "zhangsan", 20, 45, female };这是错误的  属于赋值结构体不能赋值
//		printf("name=%s age=%d score=%d sex=%d\n", s.name,s.age,s.score,s.sex);
//
//system("pause");
//return 0 ;
//}
//
//
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//	//在c 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，
//	//所以按照 c 语言规范是没有办法遍历枚举类型的
//	enum sex { fale, female };
//	struct student {
//		//结构体的成员
//		char name[10];
//		int age;
//		int score;
//		enum sex sex;
//	};
//	//利用typedef 重新个struct studeng 起名字 叫studeng
//	typedef struct student student; //typedef struct student (student)别名;
//    //不推荐这种
//	//#define student struct student;
//	int main(){
//		//结构体是一个类型，要借助变量来实现
//		//struct sturct 是一个整体，构成了自定制的一种类型
//		//s的类型就叫做struct student
//		student s = { "zhangsan", 20, 45, female };
//		//s={ "zhangsan", 20, 45, female };这是错误的  属于赋值结构体不能赋值
//      //.表示对成员访问
//		printf("name=%s age=%d score=%d sex=%d\n", s.name, s.age, s.score, s.sex);
//
//		system("pause");
//		return 0;
//	}
//
//
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//	//在c 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，
//	//所以按照 c 语言规范是没有办法遍历枚举类型的
//	enum sex { fale, female };
//	typedef struct student {
//		//结构体的成员
//		char name[10];
//		int age;
//		int score;
//		enum sex sex;
//	} stu;
//	//stu就是typedef给起的别名
//
//	int main(){
//		//结构体是一个类型，要借助变量来实现
//		//struct sturct 是一个整体，构成了自定制的一种类型
//		//s的类型就叫做struct student
//		//s为结构体student的变量，利用变量来实现
//		stu s = { "zhangsan", 20, 45, female };
//		//s={ "zhangsan", 20, 45, female };这是错误的  属于赋值结构体不能赋值
//		//s.是对成员体的访问
//		printf("name=%s age=%d score=%d sex=%d\n", s.name, s.age, s.score, s.sex);
//
//		system("pause");
//		return 0;
//	}
//
//
//#define _crt_secure_no_warnings
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//	//在c 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，
//	//所以按照 c 语言规范是没有办法遍历枚举类型的
//	enum sex { fale, female };
//	typedef struct student {
//		//结构体的成员/字段/属性
//      //防止名字太长越界
//		char name[1024];/////////////////能存多少个汉字？能存2个汉字arr[20]存9个
//		int age;
//		int score;
//		enum sex sex;
//	} stu;
//	//stu就是typedef给起的别名
//
//	int main(){
//		//结构体是一个类型，要借助变量来实现
//		//struct sturct 是一个整体，构成了自定制的一种类型
//		//s的类型就叫做struct student
//		//s为结构体student的变量，利用变量来实现
//		stu s = { "zhangsan", 20, 45, female };
//		//s={ "zhangsan", 20, 45, female };这是错误的  属于赋值结构体不能赋值
//		//s.是对成员体的访问
//		strcpy(s.name, "李四");
//		printf("name=%s age=%d score=%d sex=%d\n", s.name, s.age, s.score, s.sex);
//		system("pause");
//		return 0;
//	}
//	//strcpy：字符串拷贝
//	//把一个字符串复制到另一个数组中
//	//c中不能直接使用=给字符串赋值。除了c以外大部分的编程语言都可以使用=进行赋值+
//
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	printf("%d\n", strlen ("呵"));//一个汉字占两个字节在gbk（windows）
//	system("pause");             //一个汉字占3个字节在utf-8（linux）
//	return 0;
//}
//
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
////在c 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，
////所以按照 c 语言规范是没有办法遍历枚举类型的
//	enum Sex {FALE,FEMALE};
//	struct Student {
//		//结构体的成员
//		char name[10];
//		int age;
//		int score;
//		enum Sex sex;
//	};
//	int main(){
//		//struct Student 代表的是类型
//		struct Student s = { "zhangsan", 20, 45, FEMALE };
//		//取该类型的地址
//		struct Student * p = &s;
//		printf("name=%s\n", s.name);
//		printf("name=%s\n", (*p).name);
//		//->操作等价于上面的先*在.name
//		printf("name=%s\n", p->name);
//system("pause");
//return 0 ;
//}