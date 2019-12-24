//编写一个程序，输入一个x的值，要求输出相应的y值；（x<0,y=-1;x=0,y=0;x>0y=1）
//程序1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int x, y;
//	scanf("%d", &x);
//	if (x < 0)
//		y = -1;
//	else
//	if (x == 0) y = 0;
//	else
//		y = 1;
//	printf("x=%d  y=%d\n", x, y);
//	system("pause");
//	return 0;
//
//}
//程序2.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x, y;
	scanf("%d", &x);
	if (x >= 0)
	  if (x > 0) y = 1;
	else  y = 0;
	else  y = -1;
	printf("%d", y);
	system("pause");
	return 0;
}