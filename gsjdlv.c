//����ؼ��ֵ�ʹ��
//1.typedef()
//#include <stdio.h>
//#include <stdlib.h>
//typedef unsigned int unit ;
//int main(){
//	unsigned int num2 = 10;
//	//�� unsigned int ����ı�����unit
//	unit num1 = 5;
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//*****************************************************************************
//2.��c������ static�������α����ͺ�����
//*1.���ξֲ��������޸����������ھͱ�����������ˣ�
//*2.����ȫ�ֱ������޸��˱�����������ֻ���ڵ�ǰ�������з��ʣ����ܿ��ļ����ʣ�
//*3.����һ������������ȫ�ֱ�����һ���ģ��޸���������Ϊ��ǰ�ļ��з��ʡ�
//�۲���ü��ν����θı�
//#include<stdio.h>
//#include <stdlib.h>
//void Fun(){
//	int i = 1;
//	i = i + 1;
//	printf("%d\n", i);
//}
//int main(){
//	Fun();
//	Fun();
//	Fun();
//	system("pause");
//	return 0;
//}
//*******************************************************************
//3.const ���峣��
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//�Ա����������޸�
//****************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	 const int a = 10;//������const�Գ������ж���
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//������const ��a�����˶��壬��ʱa�Ѿ�ʱ�����޷������޸ġ�
//********************************************************************
//4.��  #define �����峣��
#include<stdio.h>
#include <stdlib.h>
#define A 10

int main(){

	printf("%d\n", A);
	system("pause");
	return 0;
}
//**�����������޸�**,��Ϊ��ʱ�����Ĵ�С�Ѿ�ȷ��
///////////////////////////////////////////////////////
