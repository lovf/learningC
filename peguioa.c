//********************����****************
//����1.дһ������,���������������ֵ
//#include<stdio.h>
//#include <stdlib.h>
//
//int Max(int a, int b){
//	if (a > b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//	int main(){
//		int x = 10;
//		int y = 20;
//		int ret;
//		ret = Max(x, y);
//		printf("%d\n",ret);
//		system("pause");
//		return 0;
//	}
//************************************************************************
//����2.дһ������,����������
//#include<stdio.h>
//#include <stdlib.h>
//
//void  Swap(int* a, int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	int x = 10;
//	int y = 20;
//	Swap(&x,&y );
//	printf("x=%d y=%d\n",x,y);
//	system("pause");
//	return 0;
//}
//�β���ʵ�εĹ�ϵ:
//�β���ʵ�ε�һ�ݿ���.(����)���������õ���ʵ��.
//**************************************************************************
//����3.����������
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int temp = x;
//	x = y;
//	y = temp;
//	printf("x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
//****************************************************************
//������ָ��������н���
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int* a=&x;
//    int* b=&y;
//	//a����x�ĵ�ַ,*���Ǽ�ӷ��ʲ�����,*a���Ƕ�a�Ľ�����,�ҵ�a����Ӧ�ı�����С
//	//*a���Ǹ���x�ĵ�ַ�ҵ���x�������
//	//*a��x�ǵȼ۵�
//	//*b��y�ǵȼ۵�
//	int temp = *a;
//	*a= *b;
//	*b = temp;
//	printf("x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
//**********************************************************************
#include<stdio.h>
#include <stdlib.h>

int main(){
	int a = 10;
	int b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}
//***************************************************************************
