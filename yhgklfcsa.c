//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//*********结构体**********
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//结构体传参
//结构体传参: 结构体传参要传结构体的地址.

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
//
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
	//学生的姓名 学号 成绩
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
void BubbleSort(struct Student s[], int n) {

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
	struct Student s[10];//结构体初始化
	int n = 0;//学生个数

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
	scanf("%d", &n); //
	printf("请输入学生的姓名 学号 成绩: \n");
	Input(s, n);
	BubbleSort(s, n);
	Print(s, n);
	system("pause");
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//在这里我们再提供几种互换两个结构体的方法

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
//2.对于同类型结构体直接互换值就行

struct stu student3;
student3 = student1;
student1 = student2;
student2 = student3;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//3.用memcpy()函数进行互换

//4.比较笨的方法： 用for循环互换
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////***清空结构体的几种方式:
//
struct Student
{
	char cName[20];
	int number;
	char csex;
}stu1;

//1.方法.
//一般情况下，清空str的方法：
str.cName[0] = '\0';
str.csex = '0';
str.number = 0;

//2.方法2
但是我们用memset就非常方便：
memset(&str, 0, sizeof(struct Student));
如果是数组：struct Student stu[10];
就是 memset(stu, 0, sizeof(struct Student) * 10);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////