//�ṹ��
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct Student  {
	 //�ṹ��ĳ�Ա/����/�ɼ�/�Ա�
	char name[10];
	int age;
	int score;
	char sex[10];
};
 //��̫�Ƽ�
 //
 //#define student�������� struct Student
 typedef struct Student student ;//�����������
int main(){
	//Struct student ��һ�����壬�������Զ��Ƶ�һ������ 
	// s �����ͽ���struct Student
 student s = { "zhangsan", 20, 67, "MALE" };
 //��Ա���ʲ����������ʵ��ṹ���еĳ�Ա
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
	//->������������* Ȼ����  .  
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
	//strcpy �ַ������� ��һ���ַ�������һ�ݣ����Ƶ���һ��������
	strcpy(s.name, "��˹");
	printf("%s\n", s.name);
	system("pause");
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum Sex{
	//��ӡ��һλ
	MALE,
	//��ӡ�ڶ�λ
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
	//sex �Ľ��Ϊ1
	printf("name=%s age=%d score=%d sex=%d\n", s.name, s.age, s.score, s.sex);
	system("pause");
	return 0;
}

