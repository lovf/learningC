//1. ��������֮��
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 2;
//	int b = 5;
//	int sum;
//	sum = a + b;
//	printf("sun =%d\n", sum);
//	system("pause");
//	return 0;
//}
//2.���������������������ǵĺ�
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a, b;
//	int sum;
//	printf("������Ҫ������ӵ���������:\n");
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("a=%d b=%d sum=%d", a,b,sum );
//	system("pause");
//	return 0;
//}
//3.��1��100 �ĺ�
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++){
//		sum = sum + i;
//	}
//	printf("sum =%d\n", sum);
//	system("pause");
//	return 0;
//}
//4.ʵ��2+22+222+2222+22222
#include<stdio.h>
#include <stdlib.h>
int main(){
	int n = 0;
	int sum;
	int l = 0;
	for (int i = 1; i <= 5; i++){
		sum = n * 10 + 2;
		n = sum;
		l = l + sum;
	}
	printf("l=%d\n", l);
	system("pause");
	return 0;
}
