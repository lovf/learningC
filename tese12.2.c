//ָ���ָ���������
//1.ָ��
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	//���ڴ�������һ��ռ�
//	int a = 10;
//	//�������ȡa�ĵ�ַ��ʵ�е���ȡ&������
//	//��a �ĵ�ַ�����p��
//	int*p = &a;
//	//��ӡ����*pָ�Ķ�Ӧ��ֵ
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//�ܽ᣺ָ�����һ��������������ŵ�ַ�ġ�����ŵ�ֵ���ɵ�ַ������ģ�
//ָ����������ŵ�ַ�ģ���ַ��Ψһ��ʾһ���ַ�Ŀռ䡣
//ָ��Ĵ�С��32λ����ƽ̨����4���ֽڣ���64΢����ƽ̨����8���ֽڡ���1���ֽ���8������λ��
//2.ָ���ָ�������
//��֪��ָ�����͵�ʱ��ָ����������ʱ���֪��ָ�뵽����ǰ����������˶��ľ��롣
//��1.����ָ�����͵����壺
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int n=10;
//	char*p1 = (char*)&n;
//	int* p2 = &n;
//	short*p3 = (short*)&n;
//	double *p4 = (double*)&n;
//
//	printf("%p\n", &n);
//	printf("%p\n", p1);
//	printf("%p\n", p1 + 1);
//	
//	printf("%p\n", p2);
//	printf("%p\n", p2 + 1);
//	
//	printf("%p\n", p3);
//	printf("%p\n", p3 + 1);
//
//	printf("%p\n", p4);
//	printf("%p\n", p4 + 1);
//	printf("%p\n", p4 + 2);
//
//	system("pause");
//	return 0;
//}
//�ܽ᣺���յĽ������ָ���Ӧ�������йء�
//ָ������;����ˣ���ָ������õ�ʱ���ж���Ȩ�ޡ��������ܲ��������ֽڣ���
//���磺char*��ָ������þ�ֻ�ܷ���һ���ֽڣ���int*��ָ������þ��ܷ���4���ֽڡ�
//3.ָ�����͵��ֽڣ�
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(long long ));//8
	printf("%d\n", sizeof(double));//8

	system("pause");
	return 0;

}