//�ṹ��
////////////////////
//  //1.�ṹ��Ĺ���
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
////��C �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
////���԰��� C ���Թ淶��û�а취����ö�����͵�
//	enum Sex {FALE,FEMALE};
//	struct Student {
//		//�ṹ��ĳ�Ա
//		char name[10];
//		int age;
//		int score;
//		enum Sex sex;
//	};
//	int main(){
//		//�ṹ����һ�����ͣ�Ҫ����������ʵ��
//		//struct Sturct ��һ�����壬�������Զ��Ƶ�һ������
//		//s�����;ͽ���struct student
//		struct Student s = { "zhangsan", 20, 45, FEMALE };
//		//s={ "zhangsan", 20, 45, FEMALE };���Ǵ����  ���ڸ�ֵ�ṹ�岻�ܸ�ֵ
//		printf("name=%s age=%d score=%d sex=%d\n", s.name,s.age,s.score,s.sex);
//
//system("pause");
//return 0 ;
//}


//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//	//��C �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
//	//���԰��� C ���Թ淶��û�а취����ö�����͵�
//	enum Sex { FALE, FEMALE };
//	struct Student {
//		//�ṹ��ĳ�Ա
//		char name[10];
//		int age;
//		int score;
//		enum Sex sex;
//	};
//	//����typedef ���¸�struct Studeng ������ ��Studeng
//	typedef struct Student Student; //typedef struct Student (Student)����;
//    //���Ƽ�����
//	//#define Student struct student;
//	int main(){
//		//�ṹ����һ�����ͣ�Ҫ����������ʵ��
//		//struct Sturct ��һ�����壬�������Զ��Ƶ�һ������
//		//s�����;ͽ���struct student
//		Student s = { "zhangsan", 20, 45, FEMALE };
//		//s={ "zhangsan", 20, 45, FEMALE };���Ǵ����  ���ڸ�ֵ�ṹ�岻�ܸ�ֵ
//      //.��ʾ�Գ�Ա����
//		printf("name=%s age=%d score=%d sex=%d\n", s.name, s.age, s.score, s.sex);
//
//		system("pause");
//		return 0;
//	}


//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//	//��C �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
//	//���԰��� C ���Թ淶��û�а취����ö�����͵�
//	enum Sex { FALE, FEMALE };
//	typedef struct Student {
//		//�ṹ��ĳ�Ա
//		char name[10];
//		int age;
//		int score;
//		enum Sex sex;
//	} Stu;
//	//Stu����typedef����ı���
//
//	int main(){
//		//�ṹ����һ�����ͣ�Ҫ����������ʵ��
//		//struct Sturct ��һ�����壬�������Զ��Ƶ�һ������
//		//s�����;ͽ���struct student
//		//sΪ�ṹ��student�ı��������ñ�����ʵ��
//		Stu s = { "zhangsan", 20, 45, FEMALE };
//		//s={ "zhangsan", 20, 45, FEMALE };���Ǵ����  ���ڸ�ֵ�ṹ�岻�ܸ�ֵ
//		//s.�ǶԳ�Ա��ķ���
//		printf("name=%s age=%d score=%d sex=%d\n", s.name, s.age, s.score, s.sex);
//
//		system("pause");
//		return 0;
//	}
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//	//��C �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
//	//���԰��� C ���Թ淶��û�а취����ö�����͵�
//	enum Sex { FALE, FEMALE };
//	typedef struct Student {
//		//�ṹ��ĳ�Ա/�ֶ�/����
//      //��ֹ����̫��Խ��
//		char name[1024];/////////////////�ܴ���ٸ����֣��ܴ�2������arr[20]��9��
//		int age;
//		int score;
//		enum Sex sex;
//	} Stu;
//	//Stu����typedef����ı���
//
//	int main(){
//		//�ṹ����һ�����ͣ�Ҫ����������ʵ��
//		//struct Sturct ��һ�����壬�������Զ��Ƶ�һ������
//		//s�����;ͽ���struct student
//		//sΪ�ṹ��student�ı��������ñ�����ʵ��
//		Stu s = { "zhangsan", 20, 45, FEMALE };
//		//s={ "zhangsan", 20, 45, FEMALE };���Ǵ����  ���ڸ�ֵ�ṹ�岻�ܸ�ֵ
//		//s.�ǶԳ�Ա��ķ���
//		strcpy(s.name, "����");
//		printf("name=%s age=%d score=%d sex=%d\n", s.name, s.age, s.score, s.sex);
//		system("pause");
//		return 0;
//	}
//	//strcpy���ַ�������
//	//��һ���ַ������Ƶ���һ��������
//	//c�в���ֱ��ʹ��=���ַ�����ֵ������c����󲿷ֵı�����Զ�����ʹ��=���и�ֵ+
//
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	printf("%d\n", strlen ("��"));//һ������ռ�����ֽ���GBK��windows��
//	system("pause");             //һ������ռ3���ֽ���UTF-8��linux��
//	return 0;
//}

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
//��C �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
//���԰��� C ���Թ淶��û�а취����ö�����͵�
enum Sex { FALE, FEMALE };
struct Student {
	//�ṹ��ĳ�Ա
	char name[10];
	int age;
	int score;
	enum Sex sex;
};
int main(){
	//struct Student �����������
	struct Student s = { "zhangsan", 20, 45, FEMALE };
	//ȡ�����͵ĵ�ַ
	struct Student * p = &s;
	printf("name=%s\n", s.name);
	printf("name=%s\n", (*p).name);
	//->�����ȼ����������*��.name
	printf("name=%s\n", p->name);
	system("pause");
	return 0;
}