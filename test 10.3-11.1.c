//*************************************��һ��********************************
//Ctrl+F5 ���������:
//1.��.cԴ�ļ�ת����.exe �Ŀ�ִ�г���.(����)
//2.����.exe(˫��)
//sizeof() �鿴һ���������ڴ���ռ�����ֽ�:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h >
//
//int  main(){
//	//�ַ���
//	char a = 0;
//	//����
//	int b = 0;
//	//������
//	short c = 0;
//	//������
//	long d = 0;
//	//�����ȸ�����
//	float e = 0.0;
//	//˫���ȸ�����
//	double f = 0;
//	//��������
//	long long g=0.0;
//	printf("char: %d\n", sizeof(a));
//	printf("int: %d\n", sizeof(b));
//	printf("short: %d\n", sizeof(c));
//	printf("long: %d\n", sizeof(d));
//	printf("float: %d\n", sizeof(e));
//	printf("double: %d\n", sizeof(f));
//	printf("long long: %d\n", sizeof(g));
//	system("pause");
//}
//*******************************************************************************************
//�ص�:
//char 1���ֽ� 8��biteλ   
//char ���ݷ�Χ:0~255   -128~127
//short 2���ֽ�  16��biteλ
//short ���ݷ�Χ:0~65536  -12768~12767
//int 4���ֽ� 32��biteλ
//int  ���ݷ�Χ:0~42��9ǧ��  -21��~21��

//����һ��������ͬʱ��������һ���ַ.
//��������: ����,��ĸ,�»���(���ֲ��ܿ�ͷ)
//*****�ֲ�������ȫ�ֱ���******
//�ֲ�����:��ĳ��������
//ȫ�ֱ���:û���κκ�����
//������:��Щ�������Ч
//��������: ʲôʱ�򴴽�,
//*******
//�ֲ�����������������������ڵ�ǰ�����
//**********************************�ڶ���********************
//����:�������й����е�ֵû�з����ı�.
//C�����г����ı����ʽ:
//1.const  
//2.����ֵ����
//3.enum ö�� 
//4.�� #define 
//������4�з�ʽ��UI�����ֱ����
//1.const ���峣��
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	printf("%d\n",a);//10
//	//����const�����˳��� ,a ��ֵ�����ڽ����޸�
//	////const int a = 10;
//	////a = 20;
//	////printf("%d\n", a);  //��ʱ���ʽ��ֵ�޷�����
//	system("pause");
//	return 0;
//}
//***********************************************************************************************
//2. ����ֵ����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	printf("%d\n",a);//10
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//3.enum ö��
//#include<stdio.h>
//#include <stdlib.h>
//
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOW,
//};
//
//int main(){
//	printf("%d\n", MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n", UNKNOW);//2
//	system("pause");
//	return 0;
//}
// enum �еı�����ӡ������������
//************************************************************************************************
//4.�� #define
//#include <stdio.h>
//#include <stdlib.h>
//
//# define A 10
//int main(){
//	printf("%d\n",A);
//	system("pause");
//	return 0;
//***************************************************************************************************
//***�ؼ��ֲ��ܸ���������***
//��.���²��ǹؼ��ֵ���(D )
//A if  B double C struct  D define  
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int define = 10;
//	printf("%d\n",define ); //10 
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//***���õ�ת���ַ�***
//\n ���� \t (Tab��)������ˮƽ�Ʊ�� \' ��ʾ�ַ����� ' .\" ��ʾһ���ַ����ڲ���˫����.\\ ��ʾһ����б��,��ֹ����Ϊһ��ת���ַ�����  
//����1.��ӡ D:\code\\test.c
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	printf(" D:\code\\\\test.c\n");
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//����2.��ӡMy name is "Beijing"
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	printf("My name is \"Beijing\"\n");
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//����3.��һ���ַ��ĳ���.(�ж���������)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	printf("%d\n",strlen("abcdef"));
//	printf("%d\n", strlen("\328"));
//	printf("%d\n",strlen("c:\test\328\test.c"));
//    system("pause");
//	return 0;
//}
//**************************************************************************************
//****ѡ�����(�������/��֧���)******
//#include <stdlib.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int choice = 0;
//	printf("�����ô�����?���������ѡ��:1.Ը�� 0.��Ը��\n");
//	scanf("%d",&choice);
//	if (choice == 1){
//		printf("���ҵ��ù���\n");
//	}
//	else{
//		printf("ʧҵ\n");
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//***********ѭ�����**************
//while  do while  for 
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
//**********************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	do {
//		i++;
//		printf("%d\n",i);
//	} 
//	while (i<10);
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//***********����********
//#include <stdio.h>
//#include <stdlib.h>
//
//int  Add(int x, int y){
//	return x + y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//*********����******
//������[]�ڵ�ȡֵ,�±��0��ʼ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < 5; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************
//****�ؼ���typedef(�����ڸ�������һ������)
//
//#include <stdio.h>
//#include <stdlib.h> 
//
//void func(){
//	int i = 1;
//	i = i + 1;//2  2  2
//	printf("%d\n",i);
//
//}
//
//int main(){
//	func();
//	func();
//	func();
//	system("pause");
//	return 0;
//}
//*********************************************************************************
//static �ؼ���
#include <stdio.h>
#include <stdlib.h> 

void func(){
	static  int i = 1; //2 3 4  �����õڶ���Func()ʱ,static��鲻��ִ��,ֱ�Ӵ���һ�п�ʼִ��
	i = i + 1;
	printf("%d\n", i);
}

int main(){
	func();
	func();
	func();
	system("pause");
	return 0;
}










