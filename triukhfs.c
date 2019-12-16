//结构体
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct Student  {
	 //结构体的成员/年龄/成绩/性别
	char name[10];
	int age;
	int score;
	char sex[10];
};
 //不太推荐
 //
 //#define student（别名） struct Student
 typedef struct Student student ;//（别名在最后）
int main(){
	//Struct student 是一个整体，构成了自定制的一种类型 
	// s 的类型叫做struct Student
 student s = { "zhangsan", 20, 67, "MALE" };
 //成员访问操作符，访问到结构体中的成员
printf("name=%s age=%d score=%d sex=%s \n", s.name, s.age, s.score, s.sex);
system("pause");
return 0;
}
*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
char name[10];
int age;
int score;
char sex[10];
};
int main(){
struct Student s = { "zhangsan", 20, 67, "MALE" };
printf("name=%s age=%d score=%d sex=%s \n", s.name, s.age, s.score, s.sex);
system("pause");
return 0;
}
*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
	char name[10];
	int age;
	int score;
	char sex[10];
};
int main(){
	struct Student s = { "zhangsan", 20, 67, "MALE" };
	//printf("name=%s age=%d score=%d sex=%s \n", s.name, s.age, s.score, s.sex);
	struct Student*p = &s;
	printf("%s\n", s.name);
	//->操作类似于先* 然后在  .  
	printf("%s\n", p->name);
	printf("%s\n", (*p).name);
	system("pause");
	return 0;
}
*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
	char name[30];
	int age;
	int score;
	char sex[10];
};
int main(){
	struct Student s = { "zhangsan", 20, 67, "MALE" };
	//printf("name=%s age=%d score=%d sex=%s \n", s.name, s.age, s.score, s.sex);
	//strcpy 字符串拷贝 把一个字符串复制一份，复制到另一个数组中
	strcpy(s.name, "里斯");
	printf("%s\n", s.name);
	system("pause");
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum Sex{
	//打印第一位
	MALE,
	//打印第二位
	FEMALE,
};
struct Student{
	char name[10];
	int age;
	int score;
	enum Sex sex;
	//char sex[10];
};
int main(){
	struct Student s = { "zhangsan", 20, 67, FEMALE };
	//sex 的结果为1
	printf("name=%s age=%d score=%d sex=%d\n", s.name, s.age, s.score, s.sex);
	system("pause");
	return 0;
}

