//�������Ͳ鿴�ֽ�
#include<stdio.h>
#include <stdlib.h>
int main(){
	//����һ����������������һ���ڴ�ռ�
	//�������������� ��ĸ �»��ߣ��������ֲ��ܿ�ͷ��
	//�ַ�����
	char a = 0;
	//������
	short b = 0;
	//���α���
	int  c = 0;
	//�����α���
	long d = 0;
	//�������α���
	long long e = 0;
	//�����ȸ����ͱ���
	float f = 0.0;
	//˫���ȸ����ͱ���
	double g = 0.0;
	//sizeof �鿴һ���������ڴ���ռ�����ֽ�
	//%d Ϊ��ʽ���ַ���
  //����ʮ�����з��ŵķ�ʽ��ӡһ������
	printf("char:  %d\n", sizeof (a));
	printf("short:  %d\n", sizeof (b));
	printf("int :  %d\n", sizeof (c));
	printf("long:  %d\n", sizeof (d));
	printf("long long :  %d\n", sizeof (e));
	printf("float:  %d\n", sizeof (f));
	printf("double:  %d\n", sizeof (g));
	system("pause");
	return 0;
}