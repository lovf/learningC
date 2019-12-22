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
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
//在c 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，
//所以按照 c 语言规范是没有办法遍历枚举类型的
	enum Sex {FALE,FEMALE};
	struct Student {
		//结构体的成员
		char name[10];
		int age;
		int score;
		enum Sex sex;
	};
	int main(){
		//struct Student 代表的是类型
		struct Student s = { "zhangsan", 20, 45, FEMALE };
		//取该类型的地址
		struct Student * p = &s;
		printf("name=%s\n", s.name);
		printf("name=%s\n", (*p).name);
		//->操作等价于上面的先*在.name
		printf("name=%s\n", p->name);
system("pause");
return 0 ;
}