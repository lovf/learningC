//*************************�Զ������� �ṹ�� + ö�� + ����********************************8
//1.�ṹ��ʹ�þ���:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////ö��: ���涼������
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOW,
//
//};
////���������
//struct Student {
//	char name[1024];
//	int age;
//	int core;
//	enum Sex sex;
//	char id[1024];
//};
//
//int main(){
//	struct Student s = { "liming", 20, 120, MALE ,"2020312"};
//	printf("name=%s age=%d core=%d sex=%d id=%s\n",s.name,s.age,s.core,s.sex,s.id);
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************
//2.����崫��
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////ö��: ���涼������
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOW,
//
//};
////���������
//struct Student {
//	char name[1024];
//	int age;
//	int core;
//	enum Sex sex;
//	char id[1024];
//};
////�ṹ�崫��:��ָ��ķ�ʽ
//void print(struct Student* s){
//	printf("name=%s age=%d core=%d sex=%d id=%s\n", s->name, s->age, s->core, s->sex, s->id);
//}
//
//
//int main(){
//	struct Student s = { "liming", 20, 120, MALE, "2020312" };
//	print(&s);
//	system("pause");
//	return 0;
//}
////�ܽ�:���ڽṹ�崫�ε�ʱ��,Ҫ���ṹ��ĵ�ַ
//******�ṹ�帳ֵ:
//�ṹ�岻��ֱ�Ӹ�ֵ: struct Student s = { "liming", 20, 120, MALE, "2020312" };
 // s2 = { "lisi", 20, };�����ĸ�ֵ ��ʽ����
//���봴���±����ķ�ʽ������ struct Student s = { "liming", 20, 120, MALE, "2020312" };
//    ��������һ������      struct Student s2 = { "lisi", 34, 126 FEMALE, "2020312" };
//     ���б���֮��ĸ�ֵ    s=s2

//��������strcpy�������и�ֵ  strcpy(s.name,s2.name)
//�ص�::�ṹ���ڴ����:

//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct  Test{
//	int a;
//	int b;
//	int c;
//
//};
//int main(){
//	struct  Test t;
//	printf("%d\n",sizeof(t)); //12
//	system("pause");
//	return 0;
//}
//********************************************************************************************************888
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct  Test{
//	char a;
//	int b;
//	int c;
//
//};
//int main(){
//	struct  Test t;
//	printf("%d\n",sizeof(t)); //12
//	system("pause");
//	return 0;
//}

//**************************************************************************************************
//

//�ṹ���ڴ�������:

//1.�������ǽṹ���е�һ����Ա����
//2.�����ĳ��˵�һ����Ա,������Ա�Ĳ��ֹ���:(������ԱҪ���뵽ĳ����(��������������)�ĵ�ַ��)
//���������ڱ�����Ĭ�ϵĶ�����(VS��8)��ó�Ա��С�н�С���Ǹ�ֵ(������=(8,sizeof())
//��������Ĭ�ϵĶ��������Ըı�ͨ��#pragma pack()
//#include <stdio.h>
//#include <stdlib.h>
//
//struct  Test{
//	int a;
//	
//	char b;
//};
//int main(){
//	struct  Test t;
//	printf("%d\n",sizeof(t)); //  8
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct Test{
//	char a;
//	short b;
//	int c;
//	double d;
//	int e;
//	short f;
//	char g;
//};
//
//int main(){
//	//ͬʱ��ѭ�ṹ���ڴ����Ĺ���
//	printf("%d\n", sizeof(struct Test));// 24 
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct Test{
//	char a;
//
//	double b;
//	char c;
//	double d;
//};
//
//int main(){
//	//ͬʱ��ѭ�ṹ���ڴ����Ĺ���
//	printf("%d\n", sizeof(struct Test));// 32
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//��ϰ1.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S1{
//
//	char c1;
//	int i;
//	char c2;
//};
//
//int main(){
//
//	printf("%d\n",sizeof(struct S1));//12
//	system("pause");
//	return 0;
//}

//*************************************************************************************************************
////��ϰ2.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S2{
//
//	char c1;
//	char c2;
//	int i;
//};
//
//int main(){
//	
//	printf("%d\n", sizeof(struct S2));//8
//	system("pause");
//	return 0;
//}

//********************************************************************************************************
//��ϰ3.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S3{
//	double d;
//	char c;
//	int i;
//};
//
//int main(){
//
//	printf("%d\n", sizeof(struct S3));//  16
//	system("pause");
//	return 0;
//}
//*************************************************************************************************************
//��ϰ4.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct S3{
//	double d;
//	char c;
//	int i;
//};
//
//struct s4{
//	
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main(){
//
//	printf("%d\n", sizeof(struct s4));//  32
//	system("pause");
//	return 0;
//}
//***************************************************************************************************/

//��չ:������������=��������Ĭ��ֵ�͸ĳ�Ա�ֽڴ�С֮�н�С����һ����ֵ ����VS��Ĭ��ֵ�����޸ĵļ��������ǿ����޸ĵ�
//����:
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Test{
//
//	char a;
//	double b;
//
//
//};
//
//int main(){
//
//	printf("%d\n",sizeof(struct Test));//16
//
//	system("pause");
//	return 0;
//}
//***************************************************************************************************/
//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma pack(4)
//struct Test{
//
//	char a;
//	double b;
//};
//
//int main(){
//
//	printf("%d\n",sizeof(struct Test));//12 
//
//	system("pause");
//	return 0;
//}
// #pragma pack(4) ������������Լ���Ĭ�ϵĶ������޸ĳ�4.,Ȼ��������ռ�����ֽ�
//*********************************************************************************************************

//*******************************ö��:*******************************
//#include <stdio.h>
//#include <stdlib.h>
//
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOW,
//};
//int main(){
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOW);
//	system("pause");
//	return 0;
//}
//**************************************************************************************************************
//��C������,enum��int�ǵȼ۵�.(C������������)
//enum:���ǿ�����ٳ����ĸ���.ö�����ڴ��еĴ洢��int��һ����(�ֽ���+ԭ�뷴�벹��)

//**************************������(������)****************************
//�������еĸ��ֳ�Ա,����һ���ڴ�ռ�
//�������С�ļ���:(�˽�)
//#include <stdio.h>
//#include <stdlib.h>
//
//
//union un1{
//	char c[5];
//	int i;
//};
//
//
//union un2{
//	short c[7];
//	int i;
//};
//
//int main(){
//	printf("%d\n", sizeof(union un1));//8
//	printf("%d\n", sizeof(union un2));//16
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************
//�������Ӧ��:(��С���ֽ�����ж�)(��Ϊ������ĸ�����Ա,����һ���ڴ�ռ�)

#include <stdio.h>
#include <stdlib.h>

union Un{
	int i;
	char c;
};
//typedef union Un un;
//����1��ʾС���ֽ���
//����0��ʾ����ֽ���
int IsLittleEnd(){
	union Un u;
	u.i = 0x11223344;
	if (u.c == 0x44){
		return 1;
	}
return 0;
}
int main(){
	int ret = IsLittleEnd();
	printf("����1��ʾС���ֽ���,����0��ʾ����ֽ�\n");

	printf("%d\n", ret);
	system("pause");
	return 0;
}























