//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//*********�ṹ��**********
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
	
	Student s = { "zhang san", 18, 100, MALE };//�ṹ���ʼ��
	Student* p = &s;
	printf("%s\n",s.name);
	printf("%s\n",(*p).name);
	//->he . (*)�ȼ۵�
	printf("%s\n",p->name);

	system("pause");
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ṹ�崫��
//�ṹ�崫��: �ṹ�崫��Ҫ���ṹ��ĵ�ַ.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ö���������Ǵ� 0 1 2 3  ... ��ʼ���м�����
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
	
	Student s = { "zhang san", 18, 100, MALE };//�ṹ���ʼ��
	Print(&s);

	system("pause");
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// �ṹ��Ӧ�ã�1.����ѧ����ѧ�ţ��������ɼ��������������
//
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
	//ѧ�������� ѧ�� �ɼ�
	char name[10];
	int num;// ѧ��
	int  score;
};

void Input(struct Student s[], int n) {
	for (int i = 0; i < n; i++) {
		printf("�������%d��ѧ������Ϣ: \n", i + 1);
		scanf("%s %d %d", s[i].name, &s[i].num, &s[i].score);
	}
}
//ע�⣺�ڽ�������ʱ�����ڵ�һ�δ����ʱ������һ���ܳ��������⡣������ͨ���ɼ��Ƚ�ʱ��ֻ�����˳ɼ���������Ϣ��δ���������������ݴ��ҡ�
//�����ڽ���ʱӦ���������ṹ�����飬������ֻ���������е�ĳһ�
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

	printf("ѧ���ɼ��Ӹߵ�����������: \n");
	for (int i = 0; i < n; i++) {
		printf("������%dѧ����������:%s ѧ��: %d �ɼ�:%d \n", i + 1, s[i].name, s[i].num, s[i].score);
	}
}

int main() {
	struct Student s[10];//�ṹ���ʼ��
	int n = 0;//ѧ������

	printf("*********************\n");
	printf("*   *   *   *   *   *\n");
	printf("*     *  *   *  *   *\n");
	printf("*       *   *       *\n");
	printf("* ѧ���ɼ�����ϵͳ  *\n");
	printf("*       *   *       *\n");
	printf("*   *   *   *   *   *\n");
	printf("*   *   *   *   *   *\n");
	printf("*********************\n");

	printf("������¼��ѧ��������: ");
	scanf("%d", &n); //
	printf("������ѧ�������� ѧ�� �ɼ�: \n");
	Input(s, n);
	BubbleSort(s, n);
	Print(s, n);
	system("pause");
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�������������ṩ���ֻ��������ṹ��ķ���

//1.������ַ 
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
stu2 = student3;//������ַ

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.����ͬ���ͽṹ��ֱ�ӻ���ֵ����

struct stu student3;
student3 = student1;
student1 = student2;
student2 = student3;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//3.��memcpy()�������л���

//4.�Ƚϱ��ķ����� ��forѭ������
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////***��սṹ��ļ��ַ�ʽ:
//
struct Student
{
	char cName[20];
	int number;
	char csex;
}stu1;

//1.����.
//һ������£����str�ķ�����
str.cName[0] = '\0';
str.csex = '0';
str.number = 0;

//2.����2
����������memset�ͷǳ����㣺
memset(&str, 0, sizeof(struct Student));
��������飺struct Student stu[10];
���� memset(stu, 0, sizeof(struct Student) * 10);

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

	struct Books  book = { "C ���Ա�̻���", "LOVE", "�������", 123456789 };
	printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////