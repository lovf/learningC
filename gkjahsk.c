//通过指针变量访问整形变量
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 100;
//	int b = 10;
//	int* point1;
//	int* point2;
//	point1 = &a;
//	point2 = &b;
//	printf("a=%d  b=%d\n ", a, b);
//	//对point1 point2 进行解引用
//	printf("%d %d\n", *point1, *point2);
//	system("pause");
//	return 0;
//}
//输入a,b 两个整数，按先大后小的顺序输出a和b
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int* p1;
//	int* p2;
//	int* p;
//	int a, b;
//	scanf("%d%d", &a, &b);
//	p1 = &a;
//	p2 = &b;
//	if (a < b){
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//	printf("a=%d b=%d\n", a, b);
//	printf("Max=%d Min=%d\n", *p1, *p2);
//	system("pause");
//	return 0;
//}
//
//输入a,b 两个整数，按先大后小的顺序输出a和b 现在用函数处理，而且用指针类型的数据作为函数参数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//调用swap 函数
void swap(int* p1, int* p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main(){
	int a, b;																		
	scanf("%d%d", &a, &b);
	int* point1 = &a;
	int* point2 = &b;
	if (a < b)  swap(point1,point2);
	printf("max=%d min=%d\n", a, b);
	system("pause");
	return 0;
}