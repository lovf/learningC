//�����������Ӵ�С���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a, b, c;
//	int temp;
//	printf("������Ҫ�ж���3����: \n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b){
//		temp = b;
//		b = a;
//		a = temp;
//	}
//	if (a<c){
//		temp = c;
//		c = a;
//		a = temp;
//	}
//	if (b<c){
//		temp = c;
//		c = b;
//		b = temp;
//	}
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//***********************************************************************************************
//����������С�������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	int temp;
	printf("������Ҫ�ж���3����: \n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b){
		temp = b;
		b = a;
		a = temp;
	}
	if (a>c){
		temp = c;
		c = a;
		a = temp;
	}
	if (b>c){
		temp = c;
		c = b;
		b = temp;
	}
	printf("a=%d b=%d c=%d\n", a, b, c);
	system("pause");
	return 0;
}
//























