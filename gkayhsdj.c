//�ṹ��
////////////////////
//  //1.�ṹ��Ĺ���
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
////��c �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
////���԰��� c ���Թ淶��û�а취����ö�����͵�
//	enum sex {fale,female};
//	struct student {
//		//�ṹ��ĳ�Ա
//		char name[10];
//		int age;
//		int score;
//		enum sex sex;
//	};
//	int main(){
//		//�ṹ����һ�����ͣ�Ҫ����������ʵ��
//		//struct sturct ��һ�����壬�������Զ��Ƶ�һ������
//		//s�����;ͽ���struct student
//		struct student s = { "zhangsan", 20, 45, female };
//		//s={ "zhangsan", 20, 45, female };���Ǵ����  ���ڸ�ֵ�ṹ�岻�ܸ�ֵ
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
//	//��c �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
//	//���԰��� c ���Թ淶��û�а취����ö�����͵�
//	enum sex { fale, female };
//	struct student {
//		//�ṹ��ĳ�Ա
//		char name[10];
//		int age;
//		int score;
//		enum sex sex;
//	};
//	//����typedef ���¸�struct studeng ������ ��studeng
//	typedef struct student student; //typedef struct student (student)����;
//    //���Ƽ�����
//	//#define student struct student;
//	int main(){
//		//�ṹ����һ�����ͣ�Ҫ����������ʵ��
//		//struct sturct ��һ�����壬�������Զ��Ƶ�һ������
//		//s�����;ͽ���struct student
//		student s = { "zhangsan", 20, 45, female };
//		//s={ "zhangsan", 20, 45, female };���Ǵ����  ���ڸ�ֵ�ṹ�岻�ܸ�ֵ
//      //.��ʾ�Գ�Ա����
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
//	//��c �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
//	//���԰��� c ���Թ淶��û�а취����ö�����͵�
//	enum sex { fale, female };
//	typedef struct student {
//		//�ṹ��ĳ�Ա
//		char name[10];
//		int age;
//		int score;
//		enum sex sex;
//	} stu;
//	//stu����typedef����ı���
//
//	int main(){
//		//�ṹ����һ�����ͣ�Ҫ����������ʵ��
//		//struct sturct ��һ�����壬�������Զ��Ƶ�һ������
//		//s�����;ͽ���struct student
//		//sΪ�ṹ��student�ı��������ñ�����ʵ��
//		stu s = { "zhangsan", 20, 45, female };
//		//s={ "zhangsan", 20, 45, female };���Ǵ����  ���ڸ�ֵ�ṹ�岻�ܸ�ֵ
//		//s.�ǶԳ�Ա��ķ���
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
//	//��c �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
//	//���԰��� c ���Թ淶��û�а취����ö�����͵�
//	enum sex { fale, female };
//	typedef struct student {
//		//�ṹ��ĳ�Ա/�ֶ�/����
//      //��ֹ����̫��Խ��
//		char name[1024];/////////////////�ܴ���ٸ����֣��ܴ�2������arr[20]��9��
//		int age;
//		int score;
//		enum sex sex;
//	} stu;
//	//stu����typedef����ı���
//
//	int main(){
//		//�ṹ����һ�����ͣ�Ҫ����������ʵ��
//		//struct sturct ��һ�����壬�������Զ��Ƶ�һ������
//		//s�����;ͽ���struct student
//		//sΪ�ṹ��student�ı��������ñ�����ʵ��
//		stu s = { "zhangsan", 20, 45, female };
//		//s={ "zhangsan", 20, 45, female };���Ǵ����  ���ڸ�ֵ�ṹ�岻�ܸ�ֵ
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
//	printf("%d\n", strlen ("��"));//һ������ռ�����ֽ���gbk��windows��
//	system("pause");             //һ������ռ3���ֽ���utf-8��linux��
//	return 0;
//}
//
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
//��c �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
//���԰��� c ���Թ淶��û�а취����ö�����͵�
	enum Sex {FALE,FEMALE};
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
return 0 ;
}