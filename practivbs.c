//�Զ��庯��
/*�Զ��庯���Ϳ⺯��һ�����к�����������ֵ���ͺͺ���������
������⺯����һ��������Щ���������Լ����������
*/
/*������ɣ�
1.����ֵ����
2.������
3.��������
*///�ҵ��������������ֵ
#include<stdio.h>
//x��y����ʽ����
/*int get_max(int x, int y){
	return  (x > y) ? x : y;
}
#include <stdio.h>
int main(){
	//a��b����ʵ�ʲ�����ʵ�Σ�
	int a = 10;
	int b = 20;
	int Max = get_max(10, 20);;
	printf("%d\n", Max);
	system("pause");
	return 0;
}
*/
#include<stdio.h>{
int get_max(int x, int y){
	if (x > y){
		return x;
	}
	else{
		return y;
	}
}
#include <stdio.h>
int main(){
	//a��b����ʵ�ʲ�����ʵ�Σ�
	int a = 20;
	int b = 10;
	int Max = get_max(10, 20);;
	printf("%d\n", Max);
	system("pause");
	return 0;
}

