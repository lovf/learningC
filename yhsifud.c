//************���ú���ʵ�������������**********
//#include <stdio.h>
//#include <stdlib.h>
//#define  Add(x,  y)  (x+y)
//int main(){
//	int a = 2;
//	int b = 3;
//	int sum = Add(a , b);
//	printf("%d\n", sum);
//	int Sum = 10 * Add(a, b);
//	printf("%d\n", Sum);
//		system("pause");
//		return 0;
//}
//***********************************************
//********�����ĵ�����ʵ�������������***************
#include<stdio.h>
#include <stdlib.h>
int Add(int x, int y){
	return x + y;
}
int main(){
	int sum = Add(2, 3);
	int Sum = 10 * Add(2, 3);
	printf("%d\n",sum);
	printf("%d\n", Sum);
	system("pause");
	return 0;
}