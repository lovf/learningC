//**************#define ���峣���ͺ꣺*********************
//***ʹ�ú�
//1.����һ������
//2.����������������������
//3.�껹��Ӱ�쵽����������Ϊ
//4.�껹�ܶ���һ������Ƭ��(������һ������)

//��1.���峣��
//#include<stdio.h>
//#include <stdlib.h>

//#define A 10 //���еĺ���涼���� ;
//#define B 20
//int main(){
//	int C;
//	C = A + B;
//	printf("%d\n", A);
//	printf("%d\n", B);
//	printf("%d\n", C);
//	system("pause");
//	return 0;
//}
//��2.����һ������
//#include<stdio.h>
//#include <stdlib.h>

//#define  unit  unsigned int 
////typedef  unsigned  int 
//��3.����һ������
//#include<stdio.h>
//#include <stdlib.h>
//#define Add(x,y)  (x+y) //���ú궨����һ������Ƭ��
//int main(){
//	int sum=Add(1, 2);
//	printf("%d\n", sum);
//	int sum1 = 10 * Add(1, 2);
//	printf("%d\n", sum1);
//	system("pause");
//	return 0;
//}
//**ָ��**
//#include<stdio.h>
//#include<stdlib.h>

//int main(){
//	int x = 10;
//	int* p = &x;
//	//*��һ����ӷ��ʲ�������Ҳ���ǽ�����
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//************************�ṹ��*************************
//#include<stdio.h>
//#include <stdlib.h>

////struct student ����ṹ�������
//struct student {
//	//�ṹ��ĳ�Ա
//	char name[10];
//	int age;
//	int score;
//};
//int main(){
//	//struct student ����ṹ�������  s����ṹ��ı���
//	struct student s = { "zhangsan", 20, 78 };
//	//. ������ǶԽṹ��ĳ�Ա����
//	printf("name= %s  age= %d  score= %d\n", s.name ,s.age, s.score);
//	system("pause");
//	return 0;
//}
//*************************��֧��ѭ���ṹ*************************
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int a ;
//	scanf("%d",&a);
//		if (a == 2){
//			printf("hehe\n");
//		}
//		else  {
//			if (a == 1) {
//			printf("haha\n");
//		}
//			else{
//				printf("������������");
//			}
//	}
//		system("pause");
//		return 0;
//}
//�ж�һ�������Ƿ�Ϊ����
//#include<stdio.h>
//#include <stdlib.h>

////0������ż����1����������
//int IsOdd(int n){
//	if (n % 2 == 0){
//		return 0;
//	}
//	return 1;
//}
//int  main(){
//
//	printf("%d\n", IsOdd(-11));
//	system("pause");
//	return 0;
//
//}
//************************************
//#include <stdio.h>
//#include <stdlib.h>
//int IsOdd(int n){
//	if (n % 2 != 0){
//		return 1;
//	}
//	return 0;
//}
//int  main(){
//	printf("%d\n", IsOdd(-11));
//	system("pause");
//	return 0;
//}
//���1��100������
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n;
//	for (n = 1; n <= 100; n++){
//		if (n % 2 != 0){
//			printf("%d\n", n);
//		}
//			n++;
//	}
//	system("pause");
//	return 0;
//}
//**************************switch���************************
//����1��7������ڼ�
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int day = 0;
//	printf("��������������ڼ���1��7���� \n");
//	scanf("%d", &day);
//	switch (day){
//	case 1: printf("����һ\n");
//		break;
//	case 2: printf("���ڶ�\n");
//		break;
//	case 3: printf("������\n");
//		break;
//	case 4: printf("������\n");
//		break;
//	case 5: printf("������\n");
//		break;
//	case 6: printf("������\n");
//		break;
//	case 7: printf("������\n");
//		break;
//	default:
//		printf("������������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//******************************************
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int day = 0;
//	printf("��������������ڼ���1��7���� \n");
//	scanf("%d", &day);
//	switch (day){
//	case 1: 
//	case 2: 	
//	case 3: 	
//	case 4: 	
//	case 5: 
//		printf("weekday\n");
//		break;
//	case 6: 
//	case 7: 
//		printf("weekend\n");
//		break;
//	default:
//		printf("������������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//break :������ǰѭ������������ѭ����
//continue ���������ѭ��������һ��ѭ����

//********************************
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int day ;
//	printf("��������������ڼ���1��7���� \n");
//	scanf("%d", &day);
//	if (day == 1){
//		printf("����һ\n");
//	}
//	if (day == 2){
//			printf("���ڶ�\n");
//		}
//	if (day == 3){
//		printf("������\n");
//	}
//	if (day == 4){
//		printf("������\n");
//	}
//	if (day == 5){
//		printf("������\n");
//	}
//	if (day == 6){
//		printf("������\n");
//	}
//	if (day == 7){
//		printf("������\n");
//	}
//	if (day < 1 || day >7){
//		printf("������������\n");
//	}
//	system("pause");
//	return 0;
//}
//*************����switch����ɵ���䣬if  ���ͬ�������**************************
//**************ѭ�����************************
//**while**
//**for**
//**do while**
//1.��ӡ1��10
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10; i++){
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//***********************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i=1;
//	while (i <= 10){
//		printf("%d\n",i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//�ж�while ��ѭ�������������������ִ��ѭ���塣������������������˳���ѭ����
//���ѭ��ִ�����ˣ��ٴν����ж�ѭ������
//*******************����ó���while ������� ; ʹ���򹹳�����ѭ���������ܱ����������û���κν��
//***********************************
//while ����е�break��continue 
//break���� :
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		if (i == 5)
//			break;
//			printf("%d\n", i);
//			i++;
//	}
//	system("pause");
//	return 0;
//}
//��1��100���ҳ���һ����3����������
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 100){
//		if (i % 3 == 0){
//			printf("%d\n", i);
//			break;
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//}//**********
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		i++;
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//
//	}
//	system("pause");
//	return 0;
//}
//****************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//			i++;
//	}
//	system("pause");
//	return 0;
//}
//*******************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i < 10){
//		i++;
//		if (i == 5)
//			continue;
//			printf("%d\n", i);
//			
//	}
//	system("pause");
//	return 0;
//}
//�ҵ�1��100���е��ܱ�3����������
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i=1;
//	while (i <= 100){
//		if (i % 3 == 0){
//			printf("%d\n",i);
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//
//}
//******************************
#include<stdio.h>
#include <stdlib.h>

int main(){
	int i = 1;
	while (i <= 100){
		if (i % 3 != 0){
			i++;
			continue;
		}
		printf("%d\n", i);
		i++;
	}
	system("pause");
	return 0;

}