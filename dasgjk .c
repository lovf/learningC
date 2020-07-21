//****指针的简单使用:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////第一组
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//int arr[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(arr)); // 16 求数组的字节大小 
	//printf("%d\n", sizeof(arr + 0)); //  4 数组名参与运算时会隐式转为指针

	//printf("%d\n", sizeof(*arr)); // 4 数组不能直接进行解引用,但是指针可以 *(arr+0)意思是对首元素的地址进行解引用 得到1 ,占4个字节
	//printf("%d\n", sizeof(*(arr + 0)));//4
	//printf("%d\n", sizeof(arr[0]));//4
	//printf("%d\n", sizeof(arr + 1));//4 数组名直接参与运算时会隐式转化为指针
	//printf("%d\n", sizeof(&arr));//4数组指针
	//printf("%d\n", sizeof(*&arr)); //16数组指针进行解引用,得到整个数组
	//printf("%d\n", sizeof(&*arr)); //4 针对int 类型来取地址,得到int*
	//printf("%d\n", sizeof(&arr + 1));//4 数组指针+1,仍然是数组指针
	//printf("%d\n", sizeof(&arr[0] + 1)); // 4 int* 

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////第二组
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n",sizeof(arr));//6 整个数组的内存大小
	//printf("%d\n",sizeof(arr+0)); // 4 数组名参与运算会隐式转为指针
	//printf("%d\n",sizeof(*arr));// 1 arr指向首元素的地址,然后在进行解引用,得到'1',一个char 占一个字节
	//printf("%d\n", sizeof(*(arr+0)));// 1 *arr = *(arr+0) =arr[0]
	//printf("%d\n",sizeof(arr[0]));//1 arr[0]指的是一个字符 ,因此占一个字节的大小
	//printf("%d\n", sizeof(arr[1]));//1 占一个字节的大小
	//printf("%d\n",sizeof(&arr));// 4 &arr类型是char(*)[4] 数组指针也是指针占 4个字节
	//printf("%d\n",sizeof(&arr[0]+1));// 4 类型char*,指针在VS下都是占4个字节
	//printf("%d\n",strlen(arr)); //随机数 未定义行为 strlen 是求字符串的长度,一个带\0的字符数组才叫字符串 arr并不是字符串
	//printf("%d\n",strlen(arr+0)); // 随机数 未定义行为
	//printf("%d\n",strlen(*arr)); // strlen ()括号中的元素求得是字符串的长度,至少是char*类型 但是*arr得到的是char类型,原则上要编译失败,但是C语言强行将char类型转化成char* ,但是结果还是错误,解引用的时候就会出现未定义行为.
	//printf("%d\n",strlen(arr[1]));// 同上 未定义行为
	//printf("%d\n",&arr);// 未定义行为 指向首元素的地址 char(*)[6] 和char*类型不一样 加入强转的话,就会得到一个指向'a'指针,从这个指针开始往后找\0仍然找不到   strlen () 括号需要char* 类型
	//printf("%\n", strlen(&arr + 1));// 未定义行为  数组指针+1跳过整个数组
	//printf("%d\n",strlen(&arr[0]+1)); //得到一个指向'b'的指针,但是仍然是未定义行为.

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////第三组
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//char arr[] = "abcdef";
	//printf("%d\n",sizeof(arr));//7 字符串自带\0

	//printf("%d\n",sizeof(arr+0)); // 4 数组名参与运算会隐式转为指针占4个字节大小
	//printf("%d\n",sizeof(*arr)); // 1 *arr得到一个字符 
	//printf("%d\n",sizeof(arr[1])); //  1 同上
	//printf("%d\n",sizeof(&arr)); //4 数组指针 char(*)[]
	//printf("%d\n", sizeof(&arr+1)); //4 同上
	//printf("%d\n",sizeof(&arr[0]+1));//4 char* 指向b 


	//printf("%d\n",strlen(arr)); // 6 求字符串长度,不算\0
	//printf("%d\n",strlen(arr+0)); // 6 得到的是一个指向a的指针,然后往后找遇到\0结束
	//printf("%d\n",strlen(*arr)); // 未定义行为 char 和char* 不是同一个类型
	//printf("%d\n",strlen(arr[2])); // 未定义行为 char 和char* 不是同一个类型
	//printf("%d\n",strlen(&arr)); // 未定义行为  数组指针 char(*)[6]
	//printf("%d\n",strlen(&arr+1)); // 未定义行为  
	///printf("%d\n",strlen(&arr[0]+1)); //5 char* &arr[0]+1得到指向b的指针
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////第四组
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//char* p = "abcdef";

	//printf("%d\n",sizeof(p));// 4 p的类型本身就是一个指针,指针在VS下占4个字节
	//printf("%d\n", sizeof(p + 1)); // 4 指针+1,结果仍然是一个指针 char* 
	//printf("%d\n",sizeof(*p)); // 1 *p 是一个char类型 a
	//printf("%d\n",sizeof(p[1])); //1 p[1]=*(p+1) b 类型为char
	//printf("%d\n",sizeof(&p));// 4 char**类型 
	//printf("%s\n", sizeof(&p + 1)); // 4 二级指针+1,仍然是一个二级指针
	//printf("%d\n", sizeof(&p[0] + 1)); // 4 char* 指向b


	//printf("%d\n",strlen(p));// 6
	//printf("%d\n",strlen(p+1));// 5
	//printf("%d\n",strlen(*p));// *p得到char与strlen所需的类型不一样,未定义行为
	//printf("%d\n", strlen(p[1])); //*(p+1) 未定义行为
	//printf("%d\n",strlen(&p)); //  char**  未定义行为
	//printf("%d\n", strlen(&p + 1)); // 未定义行为

	//printf("%d\n",strlen(&p[0]+1));//5


    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
弱类型语言:类型越弱类型之间的区分度就低.(C)
强类型语言:类型越强可以理解成类型与类型之间的区分度就越高.(JAVA)

静态类型: 一个变量的类型,不能再运行的过程中发生改变.C语言是一种静态类型的语言.
动态类型: 一个变量的类型能在程序运行的过程中发生改变.（Python是一种动态类型的语言）
  
静态强类型：JAVA 
静态弱类型：C C++
动态强类型：Python 
动态弱类型：Javascript PHP
RPG: 角色扮演类游戏 仙剑系列,天龙八部
FPS: 第一人称类设计游戏,CS CF
MOBA LOL,王者荣耀
RTS 即时战略类游戏,SC War3 红色警戒   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
********结构体************
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Sex{
	MALE,
	FAMALE,
};

typedef struct Student Student;
//#define Student struct Struct

struct Student {
	char name[1024];
	int age;
	int  score;
	enum Sex sex;
};


int main () {
	//struc Student 是一个整体,构成了一种自定制的类型
	//s的类型就叫做struct Student ,而不会是Student
	Student s = {"zhang san",18,100,MALE};//结构体初始化
	//s = { "zhan", 29, 40, MALE }; //类似于结构的赋值,但是这种是错误的,结构体的初始化可以用大括号来表示,但是结构的赋值一定不能用大括号.
	//成员访问操作符,能够访问到结构体中的成员 
	strcpy(s.name,"李四");//strpy 字符串的拷贝  把一个字符串赋复制到另一个数组中去

	///*s.name[0] = 'L';
	//s.name[1] = 'i';
	//s.name[2] = 'S';
	//s.name[3] = 'i';
	//s.name[4] = '\0';*/
	printf("%s\n",s.name);
	s.age = 20; //可以改其中的变量
	printf("%d\n", s.age);


    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
C语言中不能直接使用 = 给字符串赋值,除了c语言之外,大部分的编程语言可以拿 = 进行复制 

一个汉字占几个字节?
与操作系统和编译器无关,和字符编码方式有关
1.GBK:windows 简体中文版默认编码,用两个字节表示一个汉字
2.UTF-8: Linux 默认编码方式,变长编码.对于汉字来说一般三个字节表示一个汉字


#include <stdio.h>
#include <stdlib.h>

int main () {

	printf("%d\n", strlen("呵"));
    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*********结构体**********
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Sex{
	MALE,
	FAMALE,
};

typedef struct Student Student;
//#define Student struct Struct

struct Student {
	char name[1024];
	int age;
	int  score;
	enum Sex sex;
};


int main() {
	
	Student s = { "zhang san", 18, 100, MALE };//结构体初始化
	Student* p = &s;
	printf("%s\n",s.name);
	printf("%s\n",(*p).name);
	//->he . (*)等价的
	printf("%s\n",p->name);

	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
结构体传参
结构体传参: 结构体传参要传结构体的地址.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//枚举这块等于是从 0 1 2 3  ... 开始进行记数字
enum Sex{
	MALE,
	FAMALE,
};

typedef struct Student Student;
//#define Student struct Struct

struct Student {
	char name[1024];
	int age;
	int  score;
	enum Sex sex;
};


void Print(Student* ps) {

	printf("%s\n",ps->name);
 	printf("%d\n", ps->age);
    printf("%d\n", ps->score);
	printf("%d\n", ps->sex);
}

int main() {
	
	Student s = { "zhang san", 18, 100, MALE };//结构体初始化
	Print(&s);

	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 结构体应用：1.输入学生的学号，姓名，成绩进行排名后输出

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
	学生的姓名 学号 成绩
	char name[10];
	int num;// 学号
	int  score;
};

void Input(struct Student s[], int n) {
	for (int i = 0; i < n; i++) {
		printf("请输入第%d个学生的信息: \n", i + 1);
		scanf("%s %d %d", s[i].name, &s[i].num, &s[i].score);
	}
}
//注意：在交换数据时，我在第一次打代码时遇到了一个很常见的问题。就是在通过成绩比较时，只交换了成绩而其余信息并未被交换，导致数据错乱。
//所以在交换时应交换整个结构体数组，而不是只交换数组中的某一项。
void BubbleSort(struct Student s[],int n) {

	for (int j = 0; j < n - 1; j++) {
		for (int k = 0; k < n - j - 1; k++) {
			if (s[k].score < s[k + 1].score) {
				struct Student  temp = s[k + 1];
				s[k + 1] = s[k];
				s[k] = temp;
			}
		}
	}
}

void Print(struct Student s[], int n) {

	printf("学生成绩从高到低排名如下: \n");
	for (int i = 0; i < n; i++) {
		printf("排名第%d学生的名字是:%s 学号: %d 成绩:%d \n", i + 1, s[i].name, s[i].num, s[i].score);
	}
}

int main() {
	struct Student s[10] ;//结构体初始化
	int n=0;//学生个数

	printf("*********************\n"); 
	printf("*   *   *   *   *   *\n");
	printf("*     *  *   *  *   *\n");
	printf("*       *   *       *\n");
	printf("* 学生成绩排名系统  *\n");
	printf("*       *   *       *\n");
	printf("*   *   *   *   *   *\n");
	printf("*   *   *   *   *   *\n");
	printf("*********************\n");

	printf("请输入录入学生的总数: ");
	scanf("%d",&n); //
	printf("请输入学生的姓名 学号 成绩: \n");
	Input(s,n);
	BubbleSort(s, n);
	Print(s,n);
	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
在这里我们再提供几种互换两个结构体的方法

//1.互换地址
struct Student
{
	char cName[20];
	int number;
	char csex;
}student1, student2;
struct Student student1 = { "Wang", 12345, 'W' };
struct Student student2 = { "Zhao", 54321, 'M' };
struct Student*stu1 = &student1;
struct Student*stu2 = &student2;

struct Student *student3;
student3 = stu1;
stu1 = stu2;
stu2 = student3;//互换地址
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
2.对于同类型结构体直接互换值就行
struct stu student3;
student3 = student1;
student1 = student2;
student2 = student3;
//这里也可以写成应strcmp函数互换

3.用memcpy()函数进行互换


4.比较笨的方法： 用for循环互换

//***清空结构体的几种方式:

struct Student
{
	char cName[20];
	int number;
	char csex;
}stu1;

//1.方法.
一般情况下，清空str的方法：
str.cName[0] = '\0';
str.csex = '0';
str.number = 0;
//
////2.方法2
但是我们用memset就非常方便：
memset(&str, 0, sizeof(struct Student));
如果是数组：struct Student stu[10];
就是 memset(stu, 0, sizeof(struct Student) * 10);





#include <stdlib.h>
#include <stdio.h>

struct Books {
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

int main() {

	struct Books  book = { "C 语言编程基础", "LOVE", "编程语言", 123456789 };
	printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
	system("pause");
	return 0;
}




