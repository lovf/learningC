//����ָ��������ܽ᣺
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	////////////////////////////////
//	��һ��
//	////////////////////////////////
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
  // printf("%d\n", sizeof(arr));// 6 ��������������ڴ��С
//	printf("%d\n", sizeof (arr + 0)); // 4 ����������������ʽת����ָ��
//	printf("%d\n", sizeof(*arr));//1 *arr�õ�һ��char��ָ��a 
//	printf("%d\n", sizeof(arr[1]));// 1 �õ�һ��char
//	&arr��char*����һ�����ͣ������ʽ����ת��ȥ�Ļ����ͻ�õ�һ��ָ��a����ָ�룬
//	�����ָ�뿪ʼ������\0��Ȼ�Ҳ���
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1)); //�����������һ����Ҳ��ָ��
//	printf("%d\n", strlen(&arr[0] + 1));//�õ�b��ָ�� ����δ������Ϊ
//	printf("%d\n", strlen(arr[0] + 1));
//	////////////////////////////////
//	�ڶ���
//	////////////////////////////////
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); // 7 �����ַ���������\0����
//	printf("%d\n", sizeof(arr + 0));//4 ���������������ʱ�����ʽת��λָ��
//	printf("%d\n", sizeof(*arr)); //1 �õ�һ���ַ�
//	printf("%d\n", sizeof(arr[0]));//1
//	printf("%d\n", sizeof(arr[1]));//1 ͬ��
//	printf("%d\n", &arr); //4  ����ָ��
//	printf("%d\n", sizeof(&arr + 1));//4 Ҳ��һ������ָ��
//	printf("%d\n", sizeof (&arr[0] + 1));// 4 Ҳ��һ��ָ��
//
//	printf("%d\n", strlen(arr)); // 6 ���ַ����ĳ�������\0�ͽ���
//	printp("%d\n", strlen(arr + 0));//6 �õ��Ļ���ָ��a��ָ��
//	printf("%d\n", strlen(*arr));//δ������Ϊ  �õ�һ���ַ�a/////////
//	printf("%d\n", strlen(arr[1]));  //δ������Ϊ
//	printf("%d\n", strlen(&arr)); //6 &arr��һ������ָ�� ����ĵ�ַǡ�þ�����Ԫ�صĵ�ַ 
//	Ȼ��strlen ���������ҵ��ҵ�\0��ʱ��ֹͣ ǡ�õ�f��λ��ֹͣ
//	printf("%d\n", strlen(&arr + 1)); //δ������λ  ��&arr +1 ������������������
//	printf("%d\n", strlen(&arr[0] + 1)); //5  �õ�ָ��b��ָ�� ��������� ���ҵ�\0����
//	////////////////////////////////
//	������
//	////////////////////////////////
//	char*p = "abcdef";
//	printf("%d\n", sizeof (p));//4 p����һ��ָ��
//	printf("%d\n", sizeof (p + 1));// 4 ָ���1����һ��ָ�� ָ����32λ����ƽ̨����4���ֽ� ��64λ����ϵͳ����8���ֽ�
//	printf("%d\n", sizeof(*p));// 1 �õ�һ��char ����
//	printf("%d\n", sizeof(p[1]));//1 ��һ��char
//	printf("%d\n", sizeof(&p)); //4 char**
//	printf("%d\n", sizeof(&p + 1)); //4 char**
//	printf("%d\n",sizeof(&p[0]+1)); //4 ָ��b�ĵ�ַ
//
//
//	printf("%d\n", strlen(p));//6 
//	printf("%d\n", strlen(p+1));//5 
//	printf("%d\n", strlen(*p));// δ������Ϊ
//	printf("%d\n", strlen(p[1]));//δ������Ϊ
//	printf("%d\n", strlen(&p)); //&p������char**
//	printf("%d\n",strlen(&p+1))//δ������Ϊ
//	printf("%d\n", strlen(&p[0] + 1));//5 ָ����������ƶ�ֱ��\0����
//
//	
//	system("pause");
//	return 0;
//
//}
//	////////////////////////////////
//	������
//	////////////////////////////////
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(arr));//16
//	//printf("%d\n", sizeof(arr + 0));//4 �������ڲ�������ʱ����ʽת����ָ��
//	//printf("%d\n", sizeof(*arr));//4 ������������ȡ��ַ������ת��Ϊ��Ԫ�صĵ�ַ���ٽ����õõ�1������int��
//	//printf("%d\n", sizeof(*(arr + 0)));//4
//	//printf("%d\n", sizeof(arr[0]));//4  *(arr+0)��arr[0]�ǵȼ۵�
//	//printf("%d\n", sizeof(arr + 1));//4 �������ڲ�����������ʱ����ʽת��Ϊָ��
//	//printf("%d\n", sizeof(&arr));//4 ����ָ�뻹��ָ�룬ָ����32λƽ̨����4���ֽڣ���64λƽ̨����8���ֽ�
//	//printf("%d\n", sizeof(*&arr));//16 &arr��һ������ָ�룬�ڶ�����н����õõ�һ������
//	//printf("%d\n", sizeof(&*arr));//4 *arr��һ��int�����������ڶ�int ȡ��ַ�õ�һ��int*
//	//printf("%d\n", sizeof(&arr + 1));//4  &arr��һ������ָ�룬����ָ��+1��Ȼ��һ������ָ�룬ֻҪ��ָ��32λ����ϵͳ�¶���4
//	//printf("%d\n", sizeof(&arr[0] + 1)); //4 arr[0]��һ��int������������ȡ��ַ�õ���������int*
//	system("pause");
//	return 0;
//}
//strlen:������ַ�������\0��������strlen(char*)������λchar*ʱ����ֵ�����ŵ�����Ϊ�ַ�����ָ�������δ������Ϊ
//sizeof:������ַ����� �������ַ��������ʱ��һ��Ҫ����\0��
////////////////////
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
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
////��c �����У�ö�������Ǳ����� int ���� unsigned int ����������ģ�
////���԰��� c ���Թ淶��û�а취����ö�����͵�
//	enum Sex {FALE,FEMALE};
//	struct Student {
//		//�ṹ��ĳ�Ա
//		char name[10];
//		int age;
//		int score;
//		enum Sex sex;
//	};
//	int main(){
//		//struct Student �����������
//		struct Student s = { "zhangsan", 20, 45, FEMALE };
//		//ȡ�����͵ĵ�ַ
//		struct Student * p = &s;
//		printf("name=%s\n", s.name);
//		printf("name=%s\n", (*p).name);
//		//->�����ȼ����������*��.name
//		printf("name=%s\n", p->name);
//system("pause");
//return 0 ;
//}