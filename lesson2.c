//11月 3日

//static
//
//#include <stdio.h>
//#include <stdlib.h>
//
////函数声明没有函数体，只是一个空头支票，告诉存在这样一个类型的函数
////1.告诉编译器存在一个名字 名为Add的函数
////2.这个函数有两个类型，都是double类型
////3.这个函数有一个返回值，类型也是double
//
//extern double Add(double a,double b);
//
//int main() {
//
//	//%d: 表示十进制有符号的整数  %f 表示打印一个浮点型
//	double ret = Add(10.0, 20.0);
//	printf("%f\n", ret);
//
//
//	system("pause");
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////
//double Add(double x, double y) {
//	return x + y;
//}
//C语言函数的定义放在函数的上方，如果非要将函数的定义放在函数的下面那么要加上声明

//#define 宏和常量

//宏:1.定义一个常量2.给变量定义一个别名3.还能影响编译器的行为4.宏还能定义一个代码片段(类似于函数的效果,相当于给函数定义了一个计算的方式)
//宏的本质文本的替换

//#include <stdio.h>
//#include <stdlib.h>
//
//#define SIZE 5
//int main () {
//	printf("%d\n",SIZE);
//system ("pause");
//return 0;
//}
//2.定义一个别名

//#include <stdio.h>
//#include <stdlib.h>
//
//#define unit unsigned int 
////typedef unsigned int unit;
//
//int main () {
//
//system ("pause");
//return 0;
//}
//4.4.宏还能定义一个代码片段(类似于函数的效果,相当于给函数定义了一个计算的方式)

//#include <stdio.h>
//#include <stdlib.h>
//
//#define Add( x, y)  x + y
//
//int main () {
//	int x = 10;
//	int y = 20;
//	printf("%d\n",x+y);
//system ("pause");
//return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//指针

//直观的把内存想象成一个走廊,这个走廊里面有许多的房间,每一个房间的大小都为1byte(8个bite位)都有一个房间都有一个房间号,依次往上累加,
//平时这样的房间号可能是一个较大的数字,这样的数字代表了"地址" 
//指针是一个变量,这个变量中保存了一个整数,这个整数代表了一个特殊的含义,表示内存的中的一个地址.
//习惯使用十六进制表示内存的地址
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int x = 10;
//	//变量p就是一个指针变量
//	int* p = &x;
//	//*p 和int* * 出现了两次,但是两个 * 截然不同  ..第二个叫做"间接访问操作符",也叫做"解引用" 
//	//根据指针P中存的地址,找到这个地址占中存的内容
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//
//
//结构体:是一种用户自定义类型.
//
//#include <stdio.h>
//#include <stdlib.h>
//
////新类型 struct Student
//struct Student {
//	//成员/属性/字段
//	char name[20];
//	int age;
//	int score;
//};
//typedef struct Student student;
//int main() {
//
//	student s = { "zhangsan", 20, 60 };
//	//对于结构体,最核心的方式是使用它的成员
//	// . 使用成员访问运算符
//	printf("%s\n",s.name);
//	s.age = 20;
//	printf("%d\n",s.age);
//	printf("%d\n",s.score);
//	system("pause");
//	return 0;
//}

//分支语句和循环语句
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//
//	int choice = 0;
//	printf("你会认真写代码? 1.表示会, 0.表示不会: \n");
//	scanf("%d",&choice);
//	if (choice == 1) {
//		printf("敲代码!n");
//	} else if(choice == 0 ){
//		printf("无工作!\n");
//	} else {
//		printf("您的输入有误!\n");
//	}
//
//system ("pause");
//return 0;
//}
 //真假语句: 非0表示真,0表示假
//判定一个数是不是奇数
//#include <stdio.h>
//#include <stdlib.h>
//
////1代表是奇数,0代表不是奇数
//int isOdd(int x) {
//	if (x % 2 == 0) {
//		return 0;
//	}
//	return 1;
//}
////这种情况属于典型的错误,会使判断错误比如-11
////if (x % 2 == 1) {
////	return 1;
////}
////return 0;
//
//
//
//int main() {
//
//	printf("%d\n",isOdd(11));
//	system("pause");
//	return 0;
//}

//输出1-100之间的奇数
//#include <stdio.h>
//#include <stdlib.h>
//
////1代表是奇数,0代表不是奇数
//int isOdd(int x) {
//	if (x % 2 == 0) {
//		return 0;
//	}
//	return 1;
//}
//
//
//int main() {
//
//	int num = 1;
//	while (num <= 100) {
//		if (isOdd(num)) {
//			printf("%d\n",num);
//		}
//		num++;
//	
//	}
//	system("pause");
//	return 0;
//}

//switch 语句 也表示分支语句 

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	printf("请输入今天是星期几(1-7): \n");
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) { //switch括号里面必须放整数
//	case 1:
//		printf("星期一!\n");
//		break;//break表示跳出当前的switch语句
//	case 2:
//		printf("星期二!\n");
//		break;
//	case 3:
//		printf("星期三!\n");
//		break;
//	case 4:
//		printf("星期四!\n");
//		break;
//	case 5:
//		printf("星期五!\n");
//		break;
//	case 6:
//		printf("星期六!\n");
//		break;
//	case 7:
//		printf("星期日!\n");
//		break;
//	default:
//		printf("您的输入有误!\n");
//	}

//	system("pause");
//	return 0;
//}

//switch简单使用的场景 一般都是处于分支结构中,当题目中需要进行多次分支时,并且if 语句使用时有时复杂时, 那么这种情况可以考虑一下switch语句 
//对于某一些问题switch语句相对来说还是比较简单,但是大多数情况下都会被if语句所替换
//switch 语句中需要注意的问题:
//1.switch 括号里面只能放整数
//2.break语句不能遗漏 ,假如遗漏了,那么程序会继续往下开始执行,
//3.不太能表达相对复杂的结构
//4.switch里面也支持嵌套,,但是一般不用

//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	printf("请输入今天是星期几(1-7): \n");
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) { //switch括号里面必须放整数
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday!\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend!\n");
//		break;
//	default:
//		printf("您的输入有误!\n");
//	}
//	system("pause");
//	return 0;
//}
//实例:输入学生的成绩,判定那个等级
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void judge(int grade) {
//	int grade1 = (int)(grade / 10);
//	switch (grade1) {
//	case 10:
//		printf("等级A\n");
//		break;
//	case 9:
//		printf("等级A\n");
//		break;
//	case 8:
//		printf("等级B\n");
//		break;
//	case 7:
//		printf("等级C\n");
//		break;
//	case 6:
//		printf("等级D\n");
//		break;
//	default:
//		printf("等级E\n");
//	}
//}
//
//int main () {
//	int grade = 0;
//	printf("请输入学生的成绩: \n");
//	scanf("%d",&grade);
//	judge(grade);
//    system ("pause");
//    return 0;
//}


//循环语句
//while 中条件成立表示为真,执行下面的代码
//1到10
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int num = 1;
//	while (num <= 10) {
//		printf("%d\n",num);
//		num++;
//	}
//system ("pause");
//return 0;
//}
/// 假如while后面没有添加大括号,那么后面紧接着的语句就是他需要执行的循环体

//break和continue语句  break  跳出当前的循环语句,结束整个循环  continue:结束这次循环,直接进入到下一次循环中
//结合while 使用break和continue

//实例1:找到1-100中第一个能被3整除的数字 break 的使用 
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int num = 1;
//	while (num <= 100) {
//		if (num % 3== 0) {
//			printf("%d\n",num);
//			break;
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//实例2:
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) {
//			break;
//		}
//		printf("%d\n",i);
//		i += 1;
//	}
//    system ("pause");
//    return 0;
//}
//代码中遇到break;直接终止此次循环过程
//break在while语句中的作用:
//循环中只要遇到break,就停止后面的所有循环,直接终止循环,while中的break是永远的终止于循环的.


//找到所有能被3整除的数字 continue 的使用
//实例1.continue 使用
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int num = 1;
//
//	while(num <= 100) {
//		if (num % 3 == 0) {
//			printf("%d\n", num);
//		}
//		num++;
//	}
//    system ("pause");
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int num = 1;
//
//	while (num <= 100) {
//		if (num % 3 != 0) {
//			num++;
//			continue;//当程序执行到continue这块时,直接跳转到while() 语句中,后面的语句不执行
//		}
//		printf("%d\n",num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//实例2:

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int i = 1;
//	while (i <= 10) {
//	/*	if (i == 5) {
//			i++;
//			continue;
//		}*/
//		if (i == 5) //if 语句后面的大括号可以省略,后面紧接着的一行为循环体
//			i++;
//			continue; //当在while中使用continue时,continue下一次执行的是while()中的循环条件
//		printf("%d\n",i);
//		i += 1;
//	}
//    system ("pause");
//    return 0;
//}

//实例3.

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5)  { //if 后面大括号可以省略,后面紧接着的为循环体
//			continue; //当执行到i == 5 continue的时候,循环立马跳到while (i <= 10)这部分 后面的程序已经不再执行了
//		}
//		printf("%d\n",i);
//		i += 1;
//	}
//
//    system ("pause");
//    return 0;
//}
//打印出来的结果是: 1 2 3 4


//拓展:

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int i = 1;
//	while (i <= 10) {
//		i += 1;
//		if (i == 5)  { //if 后面大括号可以省略,后面紧接着的为循环体
//			continue; //当执行到i == 5 continue的时候,循环立马跳到while (i <= 10)这部分 后面的程序已经不再执行了
//		}
//		printf("%d\n", i); // 2 3 4  6 7 8 9 10
//	}
//	system("pause");
//	return 0;
//}

//程序直接从i=2开始执行,当执行到i == 5时,程序立马跳到while(i <= 10)这部分,然后继续往下走,等于运行到5不打印它,之后又继续往下面继续执行
//总结:
//continue 在while循环中的作用是: continue 是用来阻止本次循环的也就是continue后面的代码不会再继续执行,而是直接跳到while语句的判定部分,
//进入下一次循环的入口判定.




































