//****ָ��ļ�ʹ��:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////��һ��
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//int arr[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(arr)); // 16 ��������ֽڴ�С 
	//printf("%d\n", sizeof(arr + 0)); //  4 ��������������ʱ����ʽתΪָ��

	//printf("%d\n", sizeof(*arr)); // 4 ���鲻��ֱ�ӽ��н�����,����ָ����� *(arr+0)��˼�Ƕ���Ԫ�صĵ�ַ���н����� �õ�1 ,ռ4���ֽ�
	//printf("%d\n", sizeof(*(arr + 0)));//4
	//printf("%d\n", sizeof(arr[0]));//4
	//printf("%d\n", sizeof(arr + 1));//4 ������ֱ�Ӳ�������ʱ����ʽת��Ϊָ��
	//printf("%d\n", sizeof(&arr));//4����ָ��
	//printf("%d\n", sizeof(*&arr)); //16����ָ����н�����,�õ���������
	//printf("%d\n", sizeof(&*arr)); //4 ���int ������ȡ��ַ,�õ�int*
	//printf("%d\n", sizeof(&arr + 1));//4 ����ָ��+1,��Ȼ������ָ��
	//printf("%d\n", sizeof(&arr[0] + 1)); // 4 int* 

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////�ڶ���
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n",sizeof(arr));//6 ����������ڴ��С
	//printf("%d\n",sizeof(arr+0)); // 4 �����������������ʽתΪָ��
	//printf("%d\n",sizeof(*arr));// 1 arrָ����Ԫ�صĵ�ַ,Ȼ���ڽ��н�����,�õ�'1',һ��char ռһ���ֽ�
	//printf("%d\n", sizeof(*(arr+0)));// 1 *arr = *(arr+0) =arr[0]
	//printf("%d\n",sizeof(arr[0]));//1 arr[0]ָ����һ���ַ� ,���ռһ���ֽڵĴ�С
	//printf("%d\n", sizeof(arr[1]));//1 ռһ���ֽڵĴ�С
	//printf("%d\n",sizeof(&arr));// 4 &arr������char(*)[4] ����ָ��Ҳ��ָ��ռ 4���ֽ�
	//printf("%d\n",sizeof(&arr[0]+1));// 4 ����char*,ָ����VS�¶���ռ4���ֽ�
	//printf("%d\n",strlen(arr)); //����� δ������Ϊ strlen �����ַ����ĳ���,һ����\0���ַ�����Ž��ַ��� arr�������ַ���
	//printf("%d\n",strlen(arr+0)); // ����� δ������Ϊ
	//printf("%d\n",strlen(*arr)); // strlen ()�����е�Ԫ��������ַ����ĳ���,������char*���� ����*arr�õ�����char����,ԭ����Ҫ����ʧ��,����C����ǿ�н�char����ת����char* ,���ǽ�����Ǵ���,�����õ�ʱ��ͻ����δ������Ϊ.
	//printf("%d\n",strlen(arr[1]));// ͬ�� δ������Ϊ
	//printf("%d\n",&arr);// δ������Ϊ ָ����Ԫ�صĵ�ַ char(*)[6] ��char*���Ͳ�һ�� ����ǿת�Ļ�,�ͻ�õ�һ��ָ��'a'ָ��,�����ָ�뿪ʼ������\0��Ȼ�Ҳ���   strlen () ������Ҫchar* ����
	//printf("%\n", strlen(&arr + 1));// δ������Ϊ  ����ָ��+1������������
	//printf("%d\n",strlen(&arr[0]+1)); //�õ�һ��ָ��'b'��ָ��,������Ȼ��δ������Ϊ.

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////������
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//char arr[] = "abcdef";
	//printf("%d\n",sizeof(arr));//7 �ַ����Դ�\0

	//printf("%d\n",sizeof(arr+0)); // 4 �����������������ʽתΪָ��ռ4���ֽڴ�С
	//printf("%d\n",sizeof(*arr)); // 1 *arr�õ�һ���ַ� 
	//printf("%d\n",sizeof(arr[1])); //  1 ͬ��
	//printf("%d\n",sizeof(&arr)); //4 ����ָ�� char(*)[]
	//printf("%d\n", sizeof(&arr+1)); //4 ͬ��
	//printf("%d\n",sizeof(&arr[0]+1));//4 char* ָ��b 


	//printf("%d\n",strlen(arr)); // 6 ���ַ�������,����\0
	//printf("%d\n",strlen(arr+0)); // 6 �õ�����һ��ָ��a��ָ��,Ȼ������������\0����
	//printf("%d\n",strlen(*arr)); // δ������Ϊ char ��char* ����ͬһ������
	//printf("%d\n",strlen(arr[2])); // δ������Ϊ char ��char* ����ͬһ������
	//printf("%d\n",strlen(&arr)); // δ������Ϊ  ����ָ�� char(*)[6]
	//printf("%d\n",strlen(&arr+1)); // δ������Ϊ  
	///printf("%d\n",strlen(&arr[0]+1)); //5 char* &arr[0]+1�õ�ָ��b��ָ��
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////������
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//char* p = "abcdef";

	//printf("%d\n",sizeof(p));// 4 p�����ͱ������һ��ָ��,ָ����VS��ռ4���ֽ�
	//printf("%d\n", sizeof(p + 1)); // 4 ָ��+1,�����Ȼ��һ��ָ�� char* 
	//printf("%d\n",sizeof(*p)); // 1 *p ��һ��char���� a
	//printf("%d\n",sizeof(p[1])); //1 p[1]=*(p+1) b ����Ϊchar
	//printf("%d\n",sizeof(&p));// 4 char**���� 
	//printf("%s\n", sizeof(&p + 1)); // 4 ����ָ��+1,��Ȼ��һ������ָ��
	//printf("%d\n", sizeof(&p[0] + 1)); // 4 char* ָ��b


	//printf("%d\n",strlen(p));// 6
	//printf("%d\n",strlen(p+1));// 5
	//printf("%d\n",strlen(*p));// *p�õ�char��strlen��������Ͳ�һ��,δ������Ϊ
	//printf("%d\n", strlen(p[1])); //*(p+1) δ������Ϊ
	//printf("%d\n",strlen(&p)); //  char**  δ������Ϊ
	//printf("%d\n", strlen(&p + 1)); // δ������Ϊ

	//printf("%d\n",strlen(&p[0]+1));//5


    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
����������:����Խ������֮������ֶȾ͵�.(C)
ǿ��������:����Խǿ������������������֮������ֶȾ�Խ��.(JAVA)

��̬����: һ������������,���������еĹ����з����ı�.C������һ�־�̬���͵�����.
��̬����: һ���������������ڳ������еĹ����з����ı�.��Python��һ�ֶ�̬���͵����ԣ�
  
��̬ǿ���ͣ�JAVA 
��̬�����ͣ�C C++
��̬ǿ���ͣ�Python 
��̬�����ͣ�Javascript PHP
RPG: ��ɫ��������Ϸ �ɽ�ϵ��,�����˲�
FPS: ��һ�˳��������Ϸ,CS CF
MOBA LOL,������ҫ
RTS ��ʱս������Ϸ,SC War3 ��ɫ����   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
********�ṹ��************
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
	//struc Student ��һ������,������һ���Զ��Ƶ�����
	//s�����;ͽ���struct Student ,��������Student
	Student s = {"zhang san",18,100,MALE};//�ṹ���ʼ��
	//s = { "zhan", 29, 40, MALE }; //�����ڽṹ�ĸ�ֵ,���������Ǵ����,�ṹ��ĳ�ʼ�������ô���������ʾ,���ǽṹ�ĸ�ֵһ�������ô�����.
	//��Ա���ʲ�����,�ܹ����ʵ��ṹ���еĳ�Ա 
	strcpy(s.name,"����");//strpy �ַ����Ŀ���  ��һ���ַ��������Ƶ���һ��������ȥ

	///*s.name[0] = 'L';
	//s.name[1] = 'i';
	//s.name[2] = 'S';
	//s.name[3] = 'i';
	//s.name[4] = '\0';*/
	printf("%s\n",s.name);
	s.age = 20; //���Ը����еı���
	printf("%d\n", s.age);


    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
C�����в���ֱ��ʹ�� = ���ַ�����ֵ,����c����֮��,�󲿷ֵı�����Կ����� = ���и��� 

һ������ռ�����ֽ�?
�����ϵͳ�ͱ������޹�,���ַ����뷽ʽ�й�
1.GBK:windows �������İ�Ĭ�ϱ���,�������ֽڱ�ʾһ������
2.UTF-8: Linux Ĭ�ϱ��뷽ʽ,�䳤����.���ں�����˵һ�������ֽڱ�ʾһ������


#include <stdio.h>
#include <stdlib.h>

int main () {

	printf("%d\n", strlen("��"));
    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*********�ṹ��**********
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
�ṹ�崫��
�ṹ�崫��: �ṹ�崫��Ҫ���ṹ��ĵ�ַ.

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

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
	ѧ�������� ѧ�� �ɼ�
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

	printf("ѧ���ɼ��Ӹߵ�����������: \n");
	for (int i = 0; i < n; i++) {
		printf("������%dѧ����������:%s ѧ��: %d �ɼ�:%d \n", i + 1, s[i].name, s[i].num, s[i].score);
	}
}

int main() {
	struct Student s[10] ;//�ṹ���ʼ��
	int n=0;//ѧ������

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
	scanf("%d",&n); //
	printf("������ѧ�������� ѧ�� �ɼ�: \n");
	Input(s,n);
	BubbleSort(s, n);
	Print(s,n);
	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
�������������ṩ���ֻ��������ṹ��ķ���

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
2.����ͬ���ͽṹ��ֱ�ӻ���ֵ����
struct stu student3;
student3 = student1;
student1 = student2;
student2 = student3;
//����Ҳ����д��Ӧstrcmp��������

3.��memcpy()�������л���


4.�Ƚϱ��ķ����� ��forѭ������

//***��սṹ��ļ��ַ�ʽ:

struct Student
{
	char cName[20];
	int number;
	char csex;
}stu1;

//1.����.
һ������£����str�ķ�����
str.cName[0] = '\0';
str.csex = '0';
str.number = 0;
//
////2.����2
����������memset�ͷǳ����㣺
memset(&str, 0, sizeof(struct Student));
��������飺struct Student stu[10];
���� memset(stu, 0, sizeof(struct Student) * 10);





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




