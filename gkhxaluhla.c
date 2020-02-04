//例1.不能创建临时临时变量(第三个变量),实现两个数字的交换
//法1.
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//**********************************************************************************
//法2.
#include<stdio.h>
#include <stdlib.h>
int main(){
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n",a,b);
	system("pause");
	return 0;
}