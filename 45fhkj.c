//����1~100����ͳ�������do  while () �����ʵ��ѭ��//
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h >
int main()
{
	int i = 1, sum = 0;
	do
	{

		sum = sum + i;    //ѭ�����//
		i++;
	} while (i <= 100);//ѭ���������ʽ//
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}*/
//����while ()��do while ()��ʹ�÷���˵��//
//while ()�����ж�ѭ�������Ƿ������Ȼ���ٽ���ѭ���塣//
//do while ()����������ִ��ѭ���壬Ȼ�����ж�ѭ�������Ƿ����//
//����1~100����ͳ�������while () �����ʵ��ѭ��//
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h >
int main()
{
	int i = 1, sum = 0;
	while (i <= 100)//ѭ���������ʽ//
	{

		sum = sum + i;    //ѭ�����//
		i++;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}
*/
//��for ѭ��������while ����//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h >
int main()
{
	int i, sum = 0;
	for (i = 0; i <= 100; i++)
		sum = sum + i;
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}
