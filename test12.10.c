//关于指针例题的总结：
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	////////////////////////////////
//	第一组
//	////////////////////////////////
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
  // printf("%d\n", sizeof(arr));// 6 代表整个数组的内存大小
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