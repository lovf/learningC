//阶乘的实现
//1.5！
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
//2.输入一个数字求它的阶乘
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int i;
//	int n;
//	int s=1;
//	printf("请输入要求的数字：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		s = i*s;
//}
//	printf("%d\n", s);
//system("pause");
//return 0;
//		
//}
//3.阶乘相加  1！+2！+3!+4!+5!
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
//4. 输入一个数求它的阶乘的和
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main(){
	int i,m;
	int n=1;
	int s=0;
	printf("请输入要求的阶乘数：");
	scanf("%d", &m);
	for (i = 1; i <=m ; i++){
		n = n*i;
		s = n + s;
	}
	printf("%d\n", s);
	system("pause");
	return 0;
}