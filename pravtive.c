//ʵ����������ӣ���
//#define ���峣���ͺ�
/*1.����һ������
2.���������ض����������͵ı���
3.�껹��Ӱ�쵽����������Ϊ
4.�껹�ܶ���һ�������Ƭ�Σ�����һ��������Ч����
���к�ĺ��������(;)��ı����������ı����滻
*/
//ʵ�������������
/*efine Add(x,y)  ((x)+(y))
#include <stdio.h>
int main(){
	int  x = 1;
	int  y = 2;
	int sum = Add(x, y);
	int ret = 10 *Add (x, y);
	printf("%d\n", sum);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
*/
/*#include<stdio.h>
int main(){
	int a = 1;
	int b = 2;
	int sum = a + b;
	int ret = 10*(a+b);
	printf("%d\n", sum);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
*/
#include<stdio.h>
int Sum(int a, int b){
	int sum = a + b;
	int ret = 10 * (a + b);
	printf("%d\n", sum);
	printf("%d\n", ret);
}
int main(){
	int x= 1;
	int y = 2;
	Sum(x, y);
	system("pause");
	return 0;
}