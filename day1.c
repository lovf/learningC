//�׳˵�ʵ��
//1.5��
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int i;
//	int n = 1;
//	for (i = 1; i <= 5; i++){
//		n = i*n;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
//2.����һ�����������Ľ׳�
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int i;
//	int n;
//	int s=1;
//	printf("������Ҫ������֣�");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		s = i*s;
//}
//	printf("%d\n", s);
//system("pause");
//return 0;
//		
//}
//3.�׳����  1��+2��+3!+4!+5!
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int i;
//	int n=1;
//	int s = 0;
//	for (i = 1; i <= 5; i++){
//		n = n*i;
//		s = s + n;
//	}
//	printf("%d\n", s);
//	system("pause");
//	return 0;
//}
//4. ����һ���������Ľ׳˵ĺ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main(){
	int i,m;
	int n=1;
	int s=0;
	printf("������Ҫ��Ľ׳�����");
	scanf("%d", &m);
	for (i = 1; i <=m ; i++){
		n = n*i;
		s = n + s;
	}
	printf("%d\n", s);
	system("pause");
	return 0;
}